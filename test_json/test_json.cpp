#include "test_json.h"
#include <iostream>
#include <json/json.h>

void stringWrite()
{
    Json::Value root;
    Json::Value data;
    constexpr bool shouldUseOldWay = false;
    root["action"] = "run";
    data["number"] = 1;
    root["data"] = data;

    if (shouldUseOldWay)
    {
        Json::FastWriter writer;
        const std::string json_file = writer.write(root);
        std::cout << json_file << std::endl;
    }
    else
    {
        Json::StreamWriterBuilder builder;
        const std::string json_file = Json::writeString(builder, root);
        std::cout << json_file << std::endl;
    }
}

void readString()
{
    const std::string rawJson = R"({"Age": 20, "Name": "colin"})";
    const auto rawJsonLength = static_cast<int>(rawJson.length());
    constexpr bool shouldUseOldWay = false;
    JSONCPP_STRING err;
    Json::Value root;

    if (shouldUseOldWay)
    {
        Json::Reader reader;
        reader.parse(rawJson, root);
    }
    else
    {
        Json::CharReaderBuilder builder;
        const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
        if (!reader->parse(rawJson.c_str(), rawJson.c_str() + rawJsonLength, &root,
                           &err))
        {
            std::cout << "error" << std::endl;
            return;
        }
    }
    const std::string name = root["Name"].asString();
    const int age = root["Age"].asInt();

    std::cout << name << std::endl;
    std::cout << age << std::endl;
}

void test_json()
{
    std::cout << "stringWriter" << std::endl;
    stringWrite();

    std::cout << "readString" << std::endl;
    readString();
}
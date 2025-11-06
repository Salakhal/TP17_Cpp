#include "Config.h"

Config::Config() {}

void Config::load(const std::string& filename) {
    data["username"] = "Alice";
    data["password"] = "1234";
}

std::string Config::get(const std::string& key) const {
    auto it = data.find(key);
    if (it != data.end())
        return it->second;
    return "";
}

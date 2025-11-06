#include "Logger.h"
#include "Config.h"

int main() {
    Logger::getInstance()->log("Debut du programme");

    Config cfg;
    cfg.load("config.json");
    std::string user = cfg.get("username");
    Logger::getInstance()->log("Utilisateur: " + user);

    return 0;
}

#ifndef REWARD_HPP
#define REWARD_HPP

#include <string>

class Reward {

    std::string wear;
    std::string reward_name;
    std::string reward_rarity;

public:

    Reward(std::string reward_name = "",std::string rarity = "");
    std::string getName();
    std::string toString();
    std::string showcase();
    void setWear(std::string w);

};

#endif // REWARD_HPP

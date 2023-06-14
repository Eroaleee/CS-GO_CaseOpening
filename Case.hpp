
#ifndef CASE_HPP
#define CASE_HPP

#include "Reward.hpp"

class Case {

public:

    Reward rewards[10];
    std::string case_name;

    Case();
    Reward& getReward();
    virtual Reward* getAllRewards();
    virtual std::string getName();
};

#endif // CASE_HPP

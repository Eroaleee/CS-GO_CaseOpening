#ifndef COBBLE_HPP
#define COBBLE_HPP

#include "Case.hpp"

class Cobble : public Case {

public:

    Cobble();
    Reward* getAllRewards() ;
    std::string getName() ;
};

#endif // COBBLE_HPP

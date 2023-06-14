#ifndef CHROMA_HPP
#define CHROMA_HPP

#include "Case.hpp"

class Chroma : public Case {

public:

    Chroma();
    Reward* getAllRewards() ;
    std::string getName() ;

};

#endif // CHROMA_HPP


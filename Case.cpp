#include "Case.hpp"
#include <iostream>
#include <time.h>

//Constructor
Case::Case() {}

//Metoda care intoarce un reward random
Reward& Case::getReward() {
    int random = rand()%100;
    if(random < 1) return rewards[9];
    if(random < 5) return rewards[8];
    if(random < 15) return rewards[7];
    if(random < 25) return rewards[6];
    if(random < 35) return rewards[5];
    if(random < 50) return rewards[4];
    if(random < 65) return rewards[3];
    if(random < 80) return rewards[2];
    if(random%2) return rewards[1];
    return rewards[0];
}

//Metoda care intoarce toate reward-urile dintr-o cutie
Reward* Case::getAllRewards() {
    return rewards;
}

//Metoda care intoarce numele cutiei
std::string Case::getName() {
    return case_name;
}


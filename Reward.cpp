#include "Reward.hpp"
#include <string>

//Constructor pentru initializare
Reward::Reward(std::string name,std::string rarity) {
    reward_name = name;
    reward_rarity = rarity;
}

//Metoda care intoarce numele reward-ului
std::string Reward::getName() {
    return reward_name;
}

//Metoda care seteaza starea calitatii reward-ului
void Reward::setWear(std::string w) {
    wear = w;
}

//Metoda care intoarce datele despre reward
std::string Reward::toString() {
    return "Item: " + reward_name + " | Rarity: " + reward_rarity +  " | Wear: " + wear;
}

//Metoda care prezinta reward-ul intr-un string
std::string Reward::showcase() {
    return "Item: " + reward_name + " | Rarity: " + reward_rarity;
}

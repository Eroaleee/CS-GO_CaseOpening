#include "Cobble.hpp"

//Constructor pentru initializare
Cobble::Cobble() {
    case_name = "Cobblestone Souvenir Package";
    rewards[0] = Reward("Dual Berettas | Briar","Consumer Grade");
    rewards[1] = Reward("MAC-10 | Indigo", "Consumer Grade");
    rewards[2] = Reward("MAG-7 | Silver","Industrial Grade");
    rewards[3] = Reward("USP-S | Royal Blue", "Industrial Grade");
    rewards[4] = Reward("P2000 | Chainmail", "Mil-Spec");
    rewards[5] = Reward("MP9 | Dark Age", "Mil-Spec");
    rewards[6] = Reward("Desert Eagle | Hand Cannon", "Restricted");
    rewards[7] = Reward("CZ75-Auto | Chalice", "Restricted");
    rewards[8] = Reward("M4A1-S | Knight","Classified");
    rewards[9] = Reward("AWP | Dragon Lore","Covert");
}

//Metoda care intoarce toate reward-urile din cutia Cobble
Reward* Cobble::getAllRewards() {
    return rewards;
}

//Metoda care intoarce numele cutiei
std::string Cobble::getName() {
    return case_name;
}

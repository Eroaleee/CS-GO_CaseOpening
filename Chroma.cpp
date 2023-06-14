
#include "Chroma.hpp"

//Constructor pentru initializare
Chroma::Chroma() {
    case_name = "Chroma Case";
    rewards[0] = Reward("Sawed-Off | Serenity","Restricted");
    rewards[1] = Reward("Dual Berettas | Urban Shock", "Restricted");
    rewards[2] = Reward("MAC-10 | Malachite","Restricted");
    rewards[3] = Reward("Desert Eagle | Naga", "Restricted");
    rewards[4] = Reward("PP250 | Muertos", "Classified");
    rewards[5] = Reward("M4A4 | Dragon King", "Classified");
    rewards[6] = Reward("AK-47 | Cartel", "Classified");
    rewards[7] = Reward("Galil AR | Chatterbox", "Covert");
    rewards[8] = Reward("AWP | Man-o'-war","Covert");
    rewards[9] = Reward("Karambit | Doppler","Rare Special Item");
}

//Metoda care intoarce toate reward-urile din cutia Chroma
Reward* Chroma::getAllRewards() {
    return rewards;
}

//Metoda care intoarce numele cutiei
std::string Chroma::getName() {
    return case_name;
}

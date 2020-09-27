#include <mainCharacter.h>


mainCharacter::mainCharacter(Parent *first, Parent *second) {
    this->happiness = generateStat();
    this->health = generateStat();
    if (rand() % 2 == 1) {
        this->lastName = (*first).getLastName();
    } else {
        this->lastName = (*second).getLastName();
    }
    short int firstParentWeight = rand() % 100;
    this->intelligence = ((*first).getIntelligence() * firstParentWeight / 100) + ((*second).getIntelligence() * (100 - firstParentWeight) / 100);
    firstParentWeight = rand() % 100;
    this->charisma = ((*first).getCharisma() * firstParentWeight / 100) + ((*second).getCharisma() * (100 - firstParentWeight) / 100);
}

short int mainCharacter::getHappiness() {
    return this->happiness;
}

void mainCharacter::updateHappiness(short int offset) {
    this->happiness += offset;
}

short int mainCharacter::getHealth() {
    return this->health;
}

void mainCharacter::updateHealth(short int offset) {
    this->health += offset;
}
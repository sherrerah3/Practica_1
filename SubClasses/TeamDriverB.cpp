
#include "TeamDriverB.h"
#include "PitCrewTeam.h"
#include <cstdlib>
#include <ctime>
// Constructor 1

TeamDriverB::TeamDriverB(string _name) : F1Team() {
    name = _name;
}

// Constructor 2
TeamDriverB::TeamDriverB(){}

// Métodos
void TeamDriverB::motivate(string) {
    cout << "not defined for now" << endl;
}
void TeamDriverB::giveAndChewGum(string) {
    cout << "not defined for now" << endl;
}
void TeamDriverB::pourWaterOnDriver(string) {
    cout << "not defined for now" << endl;
}
void TeamDriverB::brakePitStopB(vector<PitCrewTeam*> objects) {
    for (PitCrewTeam* obj : objects) {
        obj->performMasterTask();
    }
}
string TeamDriverB::chooseInspirationalQuote() {
    srand(time(nullptr));
    int numQuotes = inspirationalQuotes.size();
    int randomIndex = rand() % numQuotes;
    string chQuote = inspirationalQuotes[randomIndex];
    return chQuote;
}
string TeamDriverB::chooseChewGum() {
    srand(time(nullptr));
    int numGums = gums.size();
    int randomIndex = rand() % numGums;
    string chGum = gums[randomIndex];
    return chGum;
}

// Getters & Setters
string TeamDriverB::getName() {
    return name;
}
void TeamDriverB::setName(string _name) {
    name = _name;
}
vector<string> TeamDriverB::getInspirationalQuotes() {
    return inspirationalQuotes;
}
void TeamDriverB::setInspirationalQuotes(vector<string> _inspirationalQuotes) {
    inspirationalQuotes = _inspirationalQuotes;
}
string TeamDriverB::getBottleOfWater() {
    return bottleOfWater;
}
void TeamDriverB::setBottleOfWater(string _bottleOfWater) {
    bottleOfWater = _bottleOfWater;
}
string TeamDriverB::getSpeed() {
    return speed;
}
void TeamDriverB::setSpeed(string _speed) {
    speed = _speed;
}
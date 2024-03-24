#include "TeamDriverA.h"
#include "PitCrewTeam.h"

#include <cstdlib>
#include <ctime>

// Constructor1
TeamDriverA::TeamDriverA(string _name) : F1Team() {
    name = _name;
}
// Constructor 2
TeamDriverA::TeamDriverA() {}

// Métodos
void TeamDriverA::putSticker(vector<string>) {
    cout << " has put a sticker to the driver" << endl;
}
void TeamDriverA::cleanHelmet(string) {
    cout << " has cleaned the helmet of the driver" << endl;
}
void TeamDriverA::fillWaterTank(string) {
    cout << " has filled the water tank of the driver" << endl;
}
void TeamDriverA::brakePitStopA(vector<PitCrewTeam*> objects) {
    for (PitCrewTeam* obj : objects) {
        obj->performMasterTask();
    }
}
string TeamDriverA::chooseSticker() {
    srand(time(nullptr));
    int numStickers = stickers.size();
    int randomIndex = rand() % numStickers;
    string chSticker = stickers[randomIndex];
    return chSticker;
}
void TeamDriverA::drinkWater() {
    cout << name << " has drinked water. " << endl;
    string percentString = waterLevel;
    percentString.erase(percentString.find('%'));
    int number = atoi(percentString.c_str());
    number -= 20;
    string resultString = to_string(number) + "%";
    TeamDriverA::setWaterLevel(resultString);
    cout << "Remaining water: " << resultString << endl;
}

// Getters & Setters
string TeamDriverA::getName() {
    return name;
}
void TeamDriverA::setName(string _name) {
    name = _name;
}
vector<string> TeamDriverA:: getStickers() {
    return stickers;
}
void TeamDriverA::setStickers(vector<string> _stickers) {
    stickers = _stickers;
}
string TeamDriverA::getTissue() {
    return tissue;
}
void TeamDriverA::setTissue(string _tissue) {
    tissue = _tissue;
}
string TeamDriverA::getWaterLevel() {
    return waterLevel;
}
void TeamDriverA::setWaterLevel(string _waterLevel) {
    waterLevel = _waterLevel;
}
string TeamDriverA::getSpeed() {
    return speed;
}
void TeamDriverA::setSpeed(string _speed) {
    speed = _speed;
}
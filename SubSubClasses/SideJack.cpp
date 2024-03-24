#include "SideJack.h"

// Constructor
SideJack::SideJack(string _name, bool _isHelpingA, bool _isHelping, string _jackColor, string _stabilizationAbility, string _carCondition) : PitCrewTeam( _name, _isHelpingA, _isHelping) {
    jackColor = _jackColor;
    stabilizationAbility = _stabilizationAbility;
    carCondition = _carCondition;
}

// Métodos
void SideJack::performMasterTask(){
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has stabilized the car." << endl;
}

void SideJack::checkSpoiler(){
    cout << "SideJack: "<< getName() << " has checked the spoiler." << endl;
}

void SideJack::changeSpoiler(){
    cout << "SideJack: " << getName() << " has changed the side jack." << endl;
}

// Setters and Getters
string SideJack::getJackColor(){
    return jackColor;
}

void SideJack::setJackColor(string _jackColor){
    jackColor = _jackColor;
}

string SideJack::getStabilizationAbility(){
    return stabilizationAbility;
}

void SideJack::setStabilizationAbility(string _stabilizationAbility){
    stabilizationAbility = _stabilizationAbility;
}

string SideJack::getCarCondition(){
    return carCondition;
}

void SideJack::setCarCondition(string _carCondition){
    carCondition = _carCondition;
}


#include "RearJack.h"

//constructor
RearJack::RearJack(string _name, bool _isHelpingA, bool _isHelpingB, string _jackType, float _timeToRemoveJack, string _jackPressureBack) : PitCrewTeam(_name, _isHelpingA, _isHelpingB) , TeamDriverB(){
    jackType = _jackType;
    timeToRemoveJack = _timeToRemoveJack;
    jackPressureBack = _jackPressureBack;
}

// Métodos
void RearJack::performMasterTask(){
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has lifted the car from the rear." << endl;
    if (getIsHelpingB()) {
        cout << getName() << " has poured water to the driver." << endl;
    }
}

void RearJack::bringRearJack(){
    cout << "RearJack: " << getName() << " has brought the rear jack." << endl;
}

void RearJack::fitJackIntoLight(){
    cout << "RearJack: " << getName() << "installing hydraulic jack into light" << endl;
}


// Setters and Getters
string RearJack::getJackType(){
    return jackType;
}

void RearJack::setJackType(string _jackType){
    jackType = _jackType;
}

float RearJack::getTimeToRemoveJack(){
    return timeToRemoveJack;
}

void RearJack::setTimeToRemoveJack(float _timeToRemoveJack){
    timeToRemoveJack = _timeToRemoveJack;
}

string RearJack::getJackPressureBack(){
    return jackPressureBack;
}

void RearJack::setJackPressureBack(string _jackPressureBack){
    jackPressureBack = _jackPressureBack;
}

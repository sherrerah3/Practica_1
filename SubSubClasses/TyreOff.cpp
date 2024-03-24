#include "TyreOff.h"

// Constructor
TyreOff::TyreOff(string _name, bool _isHelpingA, bool _isHelpingB, float _timeRemoveTyre, string _typeGloveRemoveTyre, string _wearTyre) : PitCrewTeam(_name, _isHelpingA, _isHelpingB), TeamDriverA(){
    timeRemoveTyre = _timeRemoveTyre;
    typeGloveRemoveTyre = _typeGloveRemoveTyre;
    wearTyre = _wearTyre;
}

// Métodos
void TyreOff::performMasterTask() {
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has took off a tire." << endl;
    if (getIsHelpingA()) {
        cout << getName();
        // Se hace uso de polimorfismo
        TeamDriverA::cleanHelmet("clear helmet");
    }
}
void TyreOff::pickUpTyre() {
    cout << getName() << " has picked up the tire." << endl;
}
void TyreOff::takeTyreAway() {
    cout << getName() << " has took the tire far away." << endl;
}
// Setters and Getters
int TyreOff::getTimeRemoveTyre() {
    return timeRemoveTyre;
}
void TyreOff::setTimeRemoveTyre(int _timeRemoveTyre) {
    timeRemoveTyre = _timeRemoveTyre;
}
string TyreOff::getTypeGloveRemoveTyre() {
    return typeGloveRemoveTyre;
}
void TyreOff::setTypeGloveRemoveTyre(string _typeGloveRemoveTyre) {
    typeGloveRemoveTyre = _typeGloveRemoveTyre;
}
string TyreOff::getWearTyre() {
    return wearTyre;
}
void TyreOff::setWearTyre(string _wearTyre) {
    wearTyre = _wearTyre;
}
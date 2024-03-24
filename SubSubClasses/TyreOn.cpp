#include "TyreOn.h"

// Constructor
TyreOn::TyreOn(string _name, bool _isHelpingA, bool _isHelpingB, float _timePutTyre, string _typeTyre, string _typeGlovePutTyre) : PitCrewTeam(_name, _isHelpingA, _isHelpingB), TeamDriverB(){
    timePutTyre = _timePutTyre;
    typeTyre = _typeTyre;
    typeGlovePutTyre = _typeGlovePutTyre;
}

// Métodos
void TyreOn::bringTyre() {
    cout << getName() << " has brought a tire." << endl;
}
void TyreOn::holdTyre() {
    cout << getName() << " is holding a tire." << endl;
}
void TyreOn::performMasterTask() {
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has changed a tire." << endl;
    if (getIsHelpingB()) {
        cout << getName() << " has motivated the driver." << endl;
    }
}

// Setters and Getters
int TyreOn::getTimePutTyre() {
    return timePutTyre;
}
void TyreOn::setTimePutTyre(int _timePutTyre) {
    timePutTyre = _timePutTyre;
}
string TyreOn::getTypeTyre() {
    return typeTyre;
}
void TyreOn::setTypeTyre(string _typeTyre) {
    typeTyre = _typeTyre;
}
string TyreOn::getTypeGlovePutTyre() {
    return typeGlovePutTyre;
}
void TyreOn::setTypeGlovePutTyre(string _typeGlovePutTyre) {
    typeGlovePutTyre = _typeGlovePutTyre;
}
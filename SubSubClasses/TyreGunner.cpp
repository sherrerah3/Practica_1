#include "TyreGunner.h"

// Constructor
TyreGunner::TyreGunner(string _name, bool _isHelpingA, bool _isHelpingB, string _gunType, string _nutType, string _gunPower) : PitCrewTeam(_name, _isHelpingA, _isHelpingB) , TeamDriverA(_name){
    gunType = _gunType;
    nutType = _nutType;
    gunPower = _gunPower;
}

// Métodos
void TyreGunner::performMasterTask(){
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has loosened a tyre." << endl;
    if (getIsHelpingA()) {
        cout << getName();
        // Se hace uso de polimorfismo
        TeamDriverA::fillWaterTank("%100");
    }
}

void TyreGunner::loosenTyre(){
    cout << getName() << " has loosened the tyre." << endl;
}

void TyreGunner::tightenTyre(){
    cout << getName() << " has tightened the tyre." << endl;
}


// Setters and Getters
string TyreGunner::getGunType(){
    return gunType;
}

void TyreGunner::setGunType(string _gunType){
    gunType = _gunType;
}

string TyreGunner::getNutType(){
    return nutType;
}

void TyreGunner::setNutType(string _nutTye){
    nutType = _nutTye;
}

string TyreGunner::getGunPower(){
    return gunPower;
}

void TyreGunner::setGunPower(string _gunPower){
    gunPower = _gunPower;
}

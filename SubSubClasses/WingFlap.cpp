#include "WingFlap.h"

// Constructor
WingFlap::WingFlap(string _name, bool _isHelpingA, bool _isHelpingB, bool _goodFlapsState, bool _changesNeeded, string _flapsType) : PitCrewTeam(_name, _isHelpingA, _isHelpingB){
    goodFlapsState = _goodFlapsState;
    changesNeeded = _changesNeeded;
    flapsType = _flapsType;
}

// Métodos
void WingFlap::receiveDriverMessage() {
    cout << getName() << " has received a message from the driver." << endl;
}
void WingFlap::sendDriverMessage() {
    cout << getName() << " has sent a message to the driver." << endl;
}
void WingFlap::performMasterTask() {
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has changed a damaged flaps." << endl;
}

// Setters and Getters
bool WingFlap::getGoodFlapsState() {
    return goodFlapsState;
}
void WingFlap::setGoodFlapsState(bool _goodFlapsState) {
    goodFlapsState = _goodFlapsState;
}
bool WingFlap::getChangesNeeded() {
    return changesNeeded;
}
void WingFlap::setChangesNeeded(bool _changesNeeded) {
    changesNeeded = _changesNeeded;
}
string WingFlap::getFlapsType() {
    return flapsType;
}
void WingFlap::setFlapsType(string _flapsType) {
    flapsType = _flapsType;
}
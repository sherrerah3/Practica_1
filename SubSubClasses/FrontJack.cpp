#include "FrontJack.h"

// Constructor
FrontJack::FrontJack(string _name, bool _isHelpingA, bool _isHelpingB, string _jackSize, string _quantityToBeLifted, string _jackPressureFront) : PitCrewTeam(_name, _isHelpingA, _isHelpingB), TeamDriverB() {
    jackSize = _jackSize;
    quantityToBeLifted = _quantityToBeLifted;
    jackPressureFront = _jackPressureFront;
}

// Métodos
void FrontJack::performMasterTask() {
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has lifted the car from the front." << endl;
    if (getIsHelpingB()) {
        cout << getName() << " has gave a piece of gum to the driver." << endl;
    }
}
void FrontJack::bringFrontJack() {
    cout << getName() << "has brought the front jack." << endl;
}
void FrontJack::goBack() {
    cout << getName() << " has walk a few steps to back off from the speedway." << endl;
}

// Setters and Getters
string FrontJack::getJackSize() {
    return jackSize;
}
void FrontJack::setJackSize(string _jackSize) {
    jackSize = _jackSize;
}
string FrontJack::getQuantityToBeLifted() {
    return quantityToBeLifted;
}
void FrontJack::setQuantityToBeLifted(string _quantityToBeLifted) {
    quantityToBeLifted = _quantityToBeLifted;
}
string FrontJack::getJackPressureFront() {
    return jackPressureFront;
}
void FrontJack::setJackPressureFront(string _jackPressureFront) {
    jackPressureFront = _jackPressureFront;
}
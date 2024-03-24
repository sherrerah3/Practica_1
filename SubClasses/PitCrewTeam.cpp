#include <random>

#include "PitCrewTeam.h"


// Constructor
PitCrewTeam::PitCrewTeam(string _name, bool _isHelpingA, bool _isHelpingB) : F1Team() {
    name = _name;
    isHelpingA = _isHelpingA;
    isHelpingB = _isHelpingB;
}

// Métodos
void PitCrewTeam::performMasterTask() {
    cout << "I have a master task." << endl;
}
void PitCrewTeam::lineUp() {
    cout << "I need to line up." << endl;
}
void PitCrewTeam::crouch() {
    cout << name << " crouches." << endl;
}
void PitCrewTeam::approachCar() {
    cout << name << " approaches his team driver car." << endl;
}
void PitCrewTeam::standUp() {
    cout << name << " stands up." << endl;
}

// Getters & Setters
string PitCrewTeam::getName() {
    return name;
}
void PitCrewTeam::setName(string _name) {
    name = _name;
}
bool PitCrewTeam::getIsHelpingA() {
    return isHelpingA;
}
void PitCrewTeam::setIsHelpingA(bool _isHelpingA) {
    isHelpingA = _isHelpingA;
}
bool PitCrewTeam::getIsHelpingB() {
    return isHelpingB;
}
void PitCrewTeam::setIsHelpingB(bool _isHelpingB) {
    isHelpingB = _isHelpingB;
}

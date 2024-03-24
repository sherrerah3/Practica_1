#include "LollipopMan.h"

// Constructor
LollipopMan::LollipopMan(string _name, bool _isHelpingA, bool _isHelpingB, string _ledLightStickColor, string _glassesColor, string _ledLightStickIntensity) : PitCrewTeam(_name, _isHelpingA, _isHelpingB), TeamDriverA() {
    ledLightStickColor = _ledLightStickColor;
    glassesColor = _glassesColor;
    ledLightStickIntensity = _ledLightStickIntensity;
}

// Métodos
void LollipopMan::performMasterTask() {
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << getName() << " has said the car is free to go." << endl;
    if (getIsHelpingA()) {
        cout << getName();
        // Se hace uso de polimorfismo
        TeamDriverA::putSticker({"stickers"});
    }
}
void LollipopMan::reportTrackIssues() {
    cout << "LollipopMan: " << getName() << " is reporting track issues." << endl;
}
void LollipopMan::reportSafeTrackSpace() {
    cout << "LollipopMan: " << getName() << " is reporting the car is free to go." << endl;
}

// Setters and Getters
string LollipopMan::getLedLightStickColor() {
    return ledLightStickColor;
}
void LollipopMan::setLedLightStickColor(string _ledLightStickColor) {
    ledLightStickColor = _ledLightStickColor;
}
string LollipopMan::getGlassesColor() {
    return glassesColor;
}
void LollipopMan::setGlassesColor(string _glassesColor) {
    glassesColor = _glassesColor;
}
string LollipopMan::getLedLightStickIntensity() {
    return ledLightStickIntensity;
}
void LollipopMan::setLedLightStickIntensity(string _ledLightStickIntensity) {
    ledLightStickIntensity = _ledLightStickIntensity;
}
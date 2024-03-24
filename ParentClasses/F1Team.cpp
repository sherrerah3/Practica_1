#include "F1Team.h"

// Constructor 1
F1Team::F1Team(string _teamName, string _country, int _foundationYear) {
    teamName = _teamName;
    country = _country;
    foundationYear = _foundationYear;
}

// Constructor 2
F1Team::F1Team() {
}

// Métodos
void F1Team::printTeamName() {
    cout << "This Racing Team is " << F1Team::getTeamName() << "..." << endl;
}
void F1Team::printCountry() {
    cout << "They are eager for victory, and they are from "
         << F1Team::getCountry() << "..." << endl;
}
void F1Team::printDrivers() {
    vector<vector<string>> driversInfo = F1Team::getInfoDrivers();
    string driver1 = driversInfo[0][0];
    string driver2 = driversInfo[0][1];
    cout << "Represented by " << driver1 << " and " << driver2 << "." << endl;
}
void F1Team::printCrew() {
    for (int i = 0; i < 21; i++) {
        cout << "----> Member #" << i + 1 << ": " << F1Team::getInfoCrew()[0][i];
        cout << " || crewID: " << F1Team::getInfoCrew()[1][i] << endl;
    }
}
void F1Team::accesPrintTeamName(){
    F1Team::printTeamName();
}
void F1Team::accesPrintCountry(){
    F1Team::printCountry();
}

// Getters & Setters
string F1Team::getTeamName() { return teamName; }
void F1Team::setTeamName(string _teamName) { teamName = _teamName; }
string F1Team::getCountry() { return country; }
void F1Team::setCountry(string _country) { country = _country; }
int F1Team::getFoundationYear() { return foundationYear; }
void F1Team::setFoundationYear(int _foundationYear) {
    foundationYear = _foundationYear;
}
int F1Team::getChampionships() { return championships; }
void F1Team::setChampionships(int _championships) {
    championships = _championships;
}
vector<vector<string>> F1Team::getInfoDrivers() { return infoDrivers; }
void F1Team::setInfoDrivers(vector<vector<string>> _infoDrivers) {
    infoDrivers = _infoDrivers;
}
vector<vector<string>> F1Team::getInfoCrew() { return infoCrew; }
void F1Team::setInfoCrew(vector<vector<string>> _infoCrew) {
    infoCrew = _infoCrew;
}
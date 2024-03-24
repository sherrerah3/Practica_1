
#ifndef PRACTICE_1_F1TEAM_H
#define PRACTICE_1_F1TEAM_H

#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

//Abstraccion, capacidad de crear una clase
class F1Team {
private: //Uso del encapsulamiento
    // Atributos
    string teamName;
    string country;
    int foundationYear;
    int championships;
    vector<vector<string>> infoDrivers;
    vector<vector<string>> infoCrew;
    string driverA;
    string driverB;

    // Métodos privados
    void printTeamName();
    void printCountry();

public:
    // Constructor 1
    F1Team(string, string, int);

    // Constructor 2
    F1Team();

    // Métodos públicos
    void printDrivers();
    void printCrew();
    void accesPrintTeamName();
    void accesPrintCountry();

    // Getters & Setters
    string getTeamName();
    void setTeamName(string);
    string getCountry();
    void setCountry(string);
    int getFoundationYear();
    void setFoundationYear(int);
    int getChampionships();
    void setChampionships(int);
    vector<vector<string>> getInfoDrivers();
    void setInfoDrivers(vector<vector<string>>);
    vector<vector<string>> getInfoCrew();
    void setInfoCrew(vector<vector<string>>);
};


#endif //PRACTICE_1_F1TEAM_H

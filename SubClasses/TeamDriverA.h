

#ifndef PRACTICE_1_TEAMDRIVERA_H
#define PRACTICE_1_TEAMDRIVERA_H

#include "PitCrewTeam.h"
#include "../ParentClasses/F1Team.h"

class TeamDriverA : public F1Team{
private:
    // Atributos
    string name;
    vector<string> stickers = {"Happy face", "Furious rider", "Sponsored by F1"};
    string tissue;
    string waterLevel = "100%";
    string speed;

    // Métodos privados
    string chooseSticker();

public:
    // Constructor 1
    TeamDriverA(string);
    // Constructor 2
    TeamDriverA();

    // Métodos públicos
    virtual void putSticker(vector<string>);
    virtual void cleanHelmet(string);
    virtual void fillWaterTank(string);
    void brakePitStopA(vector<PitCrewTeam*>);
    void drinkWater();

    // Getters & Setters
    string getName();
    void setName(string);
    vector<string> getStickers();
    void setStickers(vector<string>);
    string getTissue();
    void setTissue(string);
    string getWaterLevel();
    void setWaterLevel(string);
    string getSpeed();
    void setSpeed(string);
};

#endif //PRACTICE_1_TEAMDRIVERA_H

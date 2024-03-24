
#ifndef PRACTICE_1_TEAMDRIVERB_H
#define PRACTICE_1_TEAMDRIVERB_H

#include "PitCrewTeam.h"
#include "../ParentClasses/F1Team.h"

class TeamDriverB : public F1Team{
private:
    // Atributos
    string name;
    vector<string> inspirationalQuotes = {"You can do this", "This is not over. Keet it up", "You are the best"};
    vector<string> gums = {"Dragon fruit", "Raspberry", "Bubblegum"};
    string bottleOfWater;
    string speed;

    // Métodos privados
    string chooseInspirationalQuote();
    string chooseChewGum();

public:
    // Constructor 1
    TeamDriverB(string);
    // Constructor 2
    TeamDriverB();

    // Métodos públicos
    virtual void motivate(string);
    virtual void giveAndChewGum(string);
    virtual void pourWaterOnDriver(string);
    void brakePitStopB(vector<PitCrewTeam*>);

    // Getters & Setters
    string getName();
    void setName(string);
    vector<string> getInspirationalQuotes();
    void setInspirationalQuotes(vector<string>);
    string getBottleOfWater();
    void setBottleOfWater(string);
    string getSpeed();
    void setSpeed(string);

};

#endif //PRACTICE_1_TEAMDRIVERB_H

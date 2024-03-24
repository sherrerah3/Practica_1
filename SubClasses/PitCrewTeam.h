
#ifndef PRACTICE_1_PITCREWTEAM_H
#define PRACTICE_1_PITCREWTEAM_H

#include "../ParentClasses/F1Team.h"

class PitCrewTeam : public F1Team{
private:
    // Atributos
    string name;
    static int availableHSpots;
    bool isHelpingA;
    bool isHelpingB;

    // Métodos privados

public:
    // Constructor
    PitCrewTeam(string, bool, bool);

    // Métodos públicos
    virtual void performMasterTask();
    virtual void lineUp();
    void crouch();
    void approachCar();
    void standUp();

    // Getters & Setters
    string getName();
    void setName(string);
    string getRole();
    void setRole(string);
    int getAvailableHSpots();
    void setAvailableHSpots(int);
    bool getIsHelpingA();
    void setIsHelpingA(bool);
    bool getIsHelpingB();
    void setIsHelpingB(bool);
};

#endif //PRACTICE_1_PITCREWTEAM_H


#ifndef PRACTICE_1_REARJACK_H
#define PRACTICE_1_REARJACK_H

#include "../SubClasses/PitCrewTeam.h"
#include "../SubClasses/TeamDriverB.h"

class RearJack : public PitCrewTeam, public TeamDriverB{
private:
    //Atributos
    string jackType;
    float timeToRemoveJack;
    string jackPressureBack;


public:
    // Constructor
    RearJack(string, bool, bool, string, float, string);


    //Metodos
    void bringRearJack();
    void fitJackIntoLight();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    string getJackType();
    void setJackType(string);
    float getTimeToRemoveJack();
    void setTimeToRemoveJack(float);
    string getJackPressureBack();
    void setJackPressureBack(string);


};

#endif //PRACTICE_1_REARJACK_H

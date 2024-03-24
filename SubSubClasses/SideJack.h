
#ifndef PRACTICE_1_SIDEJACK_H
#define PRACTICE_1_SIDEJACK_H

#include "../SubClasses/PitCrewTeam.h"

class SideJack : public PitCrewTeam{
private:
    //Atributos
    string jackColor;
    string stabilizationAbility;
    string carCondition;

public:
    // Constructor
    SideJack(string, bool, bool, string, string, string);

    // Metodos
    void checkSpoiler();
    void changeSpoiler();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    string getJackColor();
    void setJackColor(string);
    string getStabilizationAbility();
    void setStabilizationAbility(string);
    string getCarCondition();
    void setCarCondition(string);


};


#endif //PRACTICE_1_SIDEJACK_H


#ifndef PRACTICE_1_TYREOFF_H
#define PRACTICE_1_TYREOFF_H

#include "../SubClasses/PitCrewTeam.h"
#include "../SubClasses/TeamDriverA.h"

class TyreOff : public PitCrewTeam, public TeamDriverA{
private:
    //Atributos
    float timeRemoveTyre;
    string typeGloveRemoveTyre;
    string wearTyre;

public:
    // Constructor
    TyreOff(string, bool, bool, float, string, string);

    //Metodos
    void pickUpTyre();
    void takeTyreAway();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    int getTimeRemoveTyre();
    void setTimeRemoveTyre(int);
    string getTypeGloveRemoveTyre();
    void setTypeGloveRemoveTyre(string);
    string getWearTyre();
    void setWearTyre(string);



};

#endif //PRACTICE_1_TYREOFF_H

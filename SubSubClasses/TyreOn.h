
#ifndef PRACTICE_1_TYREON_H
#define PRACTICE_1_TYREON_H

#include "../SubClasses/PitCrewTeam.h"
#include "../SubClasses/TeamDriverB.h"

class TyreOn : public PitCrewTeam, public TeamDriverB {
private:
    //Atributos
    float timePutTyre;
    string typeTyre;
    string typeGlovePutTyre;

public:
    // Constructor
    TyreOn(string, bool, bool, float, string, string);

    //Metodos
    void bringTyre();
    void holdTyre();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    int getTimePutTyre();
    void setTimePutTyre(int);
    string getTypeTyre();
    void setTypeTyre(string);
    string getTypeGlovePutTyre();
    void setTypeGlovePutTyre(string);


};


#endif //PRACTICE_1_TYREON_H

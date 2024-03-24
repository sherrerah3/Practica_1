
#ifndef PRACTICE_1_TYREGUNNER_H
#define PRACTICE_1_TYREGUNNER_H

#include "../SubClasses/PitCrewTeam.h"
#include "../SubClasses/TeamDriverA.h"

class TyreGunner : public PitCrewTeam, public TeamDriverA {
private:
    //Atributos
    string gunType;
    string nutType;
    string gunPower;

public:
    // Constructor para ver equipo
    TyreGunner(string, bool, bool, string, string, string);

    //Metodos
    void loosenTyre();
    void tightenTyre();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    string getGunType();
    void setGunType(string);
    string getNutType();
    void setNutType(string);
    string getGunPower();
    void setGunPower(string);

};

#endif //PRACTICE_1_TYREGUNNER_H

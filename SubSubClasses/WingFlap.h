
#ifndef PRACTICE_1_WINGFLAP_H
#define PRACTICE_1_WINGFLAP_H

#include "../SubClasses/PitCrewTeam.h"

class WingFlap : public PitCrewTeam{
private:
    //Atributos
    bool goodFlapsState;
    bool changesNeeded;
    string flapsType;

public:
    // Constructor
    WingFlap(string, bool, bool, bool, bool, string);


    //Metodos
    void receiveDriverMessage();
    void sendDriverMessage();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    bool getGoodFlapsState();
    void setGoodFlapsState(bool);
    bool getChangesNeeded();
    void setChangesNeeded(bool);
    string getFlapsType();
    void setFlapsType(string);

};

#endif //PRACTICE_1_WINGFLAP_H

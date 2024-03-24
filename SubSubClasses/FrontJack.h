
#ifndef PRACTICE_1_FRONTJACK_H
#define PRACTICE_1_FRONTJACK_H

#include "../SubClasses/PitCrewTeam.h"
#include "../SubClasses/TeamDriverB.h"

class FrontJack : public PitCrewTeam, public TeamDriverB{
private:
    //Atributos
    string jackSize;
    string quantityToBeLifted;
    string jackPressureFront;


public:
    // Constructor
    FrontJack(string, bool, bool, string, string, string);

    // Metodos
    void bringFrontJack();
    void goBack();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    string getJackSize();
    void setJackSize(string);
    string getQuantityToBeLifted();
    void setQuantityToBeLifted(string);
    string getJackPressureFront();
    void setJackPressureFront(string);

};

#endif //PRACTICE_1_FRONTJACK_H

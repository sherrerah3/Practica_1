
#ifndef PRACTICE_1_LOLLIPOPMAN_H
#define PRACTICE_1_LOLLIPOPMAN_H

#include "../SubClasses/PitCrewTeam.h"
#include "../SubClasses/TeamDriverA.h"

class LollipopMan : public PitCrewTeam, public TeamDriverA{
private:
    //Atributos
    string ledLightStickColor; //Por ejemplo verde para indicar ok y rojo para no
    string glassesColor;
    string ledLightStickIntensity; //alta, media o baja


public:
    // Constructor
    LollipopMan(string, bool, bool, string, string, string);


    //Metodos
    void reportTrackIssues();
    void reportSafeTrackSpace();
    void performMasterTask() override;
    using PitCrewTeam::getName;

    // Getters and Setters
    string getLedLightStickColor();
    void setLedLightStickColor(string);
    string getGlassesColor();
    void setGlassesColor(string);
    string getLedLightStickIntensity();
    void setLedLightStickIntensity(string);


};


#endif //PRACTICE_1_LOLLIPOPMAN_H

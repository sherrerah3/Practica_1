#include "SubSubClasses/TyreGunner.h"
#include "SubSubClasses/TyreOn.h"
#include "SubSubClasses/TyreOff.h"
#include "SubSubClasses/FrontJack.h"
#include "SubSubClasses/RearJack.h"
#include "SubSubClasses/SideJack.h"
#include "SubSubClasses/WingFlap.h"
#include "SubSubClasses/LollipopMan.h"

void meetTheTeam(TeamDriverA driverA, TeamDriverB driverB, TyreGunner tyreGunner1, TyreGunner tyreGunner2, TyreGunner tyreGunner3, TyreGunner tyreGunner4, TyreOn tyreOn1, TyreOn tyreOn2, TyreOn tyreOn3, TyreOn tyreOn4, TyreOff tyreOff1, TyreOff tyreOff2, TyreOff tyreOff3, TyreOff tyreOff4, FrontJack frontJack1, FrontJack frontJack2, RearJack rearJack1, RearJack rearJack2, SideJack sideJack1, SideJack sideJack2, WingFlap wingFlap1, WingFlap wingFlap2, LollipopMan lollipopMan) {
    cout << "=============== Meet the Team! ===============" << endl;
    cout << "1. The Drivers" << endl;
    cout << "2. The Tyre Gunners" << endl;
    cout << "3. The Tyre-On Crew" << endl;
    cout << "4. The Tyre-Off Crew" << endl;
    cout << "5. The Front-Jack Crew" << endl;
    cout << "6. The Rear-Jack Crew" << endl;
    cout << "7. The Side-Jack Crew" << endl;
    cout << "8. The Wing-Flap Crew" << endl;
    cout << "9. The Lollipop Man!" << endl;
    cout << "10. Return to Menu!" << endl;
    cout << "Option: ";

    int option;
    cin >> option;
    cin.ignore();

    if (option == 1) {
        cout << "\n";
        cout << "Driver A: " << driverA.getName() << endl;
        cout << "Driver B: " << driverB.getName() << endl;
    }
    else if (option == 2) {
        cout << "\n";
        cout << "Tyre Gunner member 1:" << endl;
        cout << "    Name: " << tyreGunner1.getName() << endl;
        cout << "    Gun Type: " << tyreGunner1.getGunType() << endl;
        cout << "    Nut Type: " << tyreGunner1.getNutType() << endl;
        cout << "    Gun Power: " << tyreGunner1.getGunPower() << endl;

        cout << "\nTyre Gunner member 2:" << endl;
        cout << "    Name: " << tyreGunner2.getName() << endl;
        cout << "    Gun Type: " << tyreGunner2.getGunType() << endl;
        cout << "    Nut Type: " << tyreGunner2.getNutType() << endl;
        cout << "    Gun Power: " << tyreGunner2.getGunPower() << endl;

        cout << "\nTyre Gunner member 3:" << endl;
        cout << "    Name: " << tyreGunner3.getName() << endl;
        cout << "    Gun Type: " << tyreGunner3.getGunType() << endl;
        cout << "    Nut Type: " << tyreGunner3.getNutType() << endl;
        cout << "    Gun Power: " << tyreGunner3.getGunPower() << endl;

        cout << "\nTyre Gunner member 4:" << endl;
        cout << "    Name: " << tyreGunner4.getName() << endl;
        cout << "    Gun Type: " << tyreGunner4.getGunType() << endl;
        cout << "    Nut Type: " << tyreGunner4.getNutType() << endl;
        cout << "    Gun Power: " << tyreGunner4.getGunPower() << endl;

    }
    else if (option == 3) {
        cout << "\n";
        cout << "Tyre-On Crew member 1:" << endl;
        cout << "    Name: " << tyreOn1.getName() << endl;
        cout << "    Average time required to Change A Tyre: " << tyreOn1.getTimePutTyre() << endl;
        cout << "    Type of tyres used: " << tyreOn1.getTypeTyre() << endl;
        cout << "    Gloves used to change tyres " << tyreOn1.getTypeGlovePutTyre() << endl;

        cout << "\nTyre-On Crew member 2:" << endl;
        cout << "    Name: " << tyreOn2.getName() << endl;
        cout << "    Average time required to Change A Tyre: " << tyreOn2.getTimePutTyre() << endl;
        cout << "    Type of tyres used: " << tyreOn2.getTypeTyre() << endl;
        cout << "    Gloves used to change tyres " << tyreOn2.getTypeGlovePutTyre() << endl;

        cout << "\nTyre-On Crew member 3:" << endl;
        cout << "    Name: " << tyreOn3.getName() << endl;
        cout << "    Average time required to Change A Tyre: " << tyreOn3.getTimePutTyre() << endl;
        cout << "    Type of tyres used: " << tyreOn3.getTypeTyre() << endl;
        cout << "    Gloves used to change tyres " << tyreOn3.getTypeGlovePutTyre() << endl;

        cout << "\nTyre-On Crew member 4:" << endl;
        cout << "    Name: " << tyreOn4.getName() << endl;
        cout << "    Average time required to Change A Tyre: " << tyreOn4.getTimePutTyre() << endl;
        cout << "    Type of tyres used: " << tyreOn4.getTypeTyre() << endl;
        cout << "    Gloves used to change tyres: " << tyreOn4.getTypeGlovePutTyre() << endl;

    }
    else if (option == 4) {
        cout << "\n";
        cout << "Tyre-Off Crew member 1:" << endl;
        cout << "    Name: " << tyreOff1.getName() << endl;
        cout << "    Average Time Required to Remove A Tyre: " << tyreOff1.getTimeRemoveTyre() << endl;
        cout << "    Type Gloves to Remove Tyre: " << tyreOff1.getTypeGloveRemoveTyre() << endl;

        cout << "\nTyre-Off Crew member 2:" << endl;
        cout << "    Name: " << tyreOff2.getName() << endl;
        cout << "    Average Time Required to Remove A Tyre: " << tyreOff2.getTimeRemoveTyre() << endl;
        cout << "    Type Gloves to Remove Tyre: " << tyreOff2.getTypeGloveRemoveTyre() << endl;

        cout << "\nTyre-Off Crew member 3:" << endl;
        cout << "    Name: " << tyreOff3.getName() << endl;
        cout << "    Average Time Required to Remove A Tyre: " << tyreOff3.getTimeRemoveTyre() << endl;
        cout << "    Type Gloves to Remove A Tyre: " << tyreOff3.getTypeGloveRemoveTyre() << endl;

        cout << "\nTyre-Off Crew member 4:" << endl;
        cout << "    Name: " << tyreOff4.getName() << endl;
        cout << "    Average Time Required to Remove A Tyre: " << tyreOff4.getTimeRemoveTyre() << endl;
        cout << "    Type Gloves to Remove A Tyre: " << tyreOff4.getTypeGloveRemoveTyre() << endl;
    }
    else if (option == 5) {
        cout << "\n";
        cout << "Front Jack Crew member 1:" << endl;
        cout << "    Name: " << frontJack1.getName() << endl;
        cout << "    Jack Size: " << frontJack1.getJackSize() << endl;
        cout << "    Jack Pressure Front: " << frontJack1.getJackPressureFront() << endl;

        cout << "\nFront Jack Crew member 2:" << endl;
        cout << "    Name: " << frontJack2.getName() << endl;
        cout << "    Jack Size: " << frontJack2.getJackSize() << endl;
        cout << "    Jack Pressure Front: " << frontJack2.getJackPressureFront() << endl;
    }
    else if (option == 6) {
        cout << "\n";
        cout << "Rear Jack Crew member 1:" << endl;
        cout << "    Name: " << rearJack1.getName() << endl;
        cout << "    Jack Type: " << rearJack1.getJackType() << endl;
        cout << "    Average Time Required to Remove Jack: " << rearJack1.getTimeToRemoveJack() << endl;
        cout << "    Jack Pressure Back: " << rearJack1.getJackPressureBack() << endl;

        cout << "\nRear Jack Crew member 2:" << endl;
        cout << "    Name: " << rearJack2.getName() << endl;
        cout << "    Jack Type: " << rearJack2.getJackType() << endl;
        cout << "    Average Time Required to Remove Jack: " << rearJack2.getTimeToRemoveJack() << endl;
        cout << "    Jack Pressure Back: " << rearJack2.getJackPressureBack() << endl;
    }
    else if (option == 7) {
        cout << "\n";
        cout << "Side Jack Crew member 1:" << endl;
        cout << "    Name: " << sideJack1.getName() << endl;
        cout << "    Jack Color: " << sideJack1.getJackColor() << endl;

        cout << "\nSide Jack Crew member 2:" << endl;
        cout << "    Name: " << sideJack2.getName() << endl;
        cout << "    Jack Color: " << sideJack2.getJackColor() << endl;
    }
    else if (option == 8) {
        cout << "\n";
        cout << "Wing Flap Crew member 1: " << wingFlap1.getName() << endl;
        cout << "Wing Flap Crew member 2: " << wingFlap2.getName() << endl;
        cout << "They have a bunch of functions they perform mid-race..." << endl;
    }
    else if (option == 9) {
        cout << "\n";
        cout << "Lollipop Man:" << endl;
        cout << "    Name: " << lollipopMan.getName() << endl;
        cout << "    Glasses Color: " << lollipopMan.getGlassesColor() << endl;
        cout << "    Led Light Stick Color: " <<  lollipopMan.getLedLightStickColor() << endl;
    }
    else if (option == 10) {
        return;
    }
    cout << "\n";
    cout << "Press Enter to continue...";
    cin.ignore();
}

void simulatePitStop(TeamDriverA driverA, TeamDriverB driverB, TyreGunner tyreGunner1, TyreGunner tyreGunner2, TyreGunner tyreGunner3, TyreGunner tyreGunner4, TyreOn tyreOn1, TyreOn tyreOn2, TyreOn tyreOn3, TyreOn tyreOn4, TyreOff tyreOff1, TyreOff tyreOff2, TyreOff tyreOff3, TyreOff tyreOff4, FrontJack frontJack1, FrontJack frontJack2, RearJack rearJack1, RearJack rearJack2, SideJack sideJack1, SideJack sideJack2, WingFlap wingFlap1, WingFlap wingFlap2, LollipopMan lollipopMan) {
// Start race
    cout << "\n=============== THE RACE IS ABOUT TO BEGING ===============" << endl;
    cout << "\n    3333\n"
            "        33\n"
            "      3333\n"
            "        33\n"
            "    3333" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "\n    2222\n"
            "        22\n"
            "       22\n"
            "    22\n"
            "    222222" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "\n    1111\n"
            "      11\n"
            "      11\n"
            "      11\n"
            "    111111" << endl;
    cout << "\n";
    cout << "Press Enter to continue...";
    cin.ignore();

// Story PT 1
    driverA.setSpeed("335 km/h");
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "\n";
    cout << "\n=============== THE SIMULATION HAS BEGUN ===============" << endl;
    cout << driverA.getName() << " is driving at " << driverA.getSpeed() << " and has drinked water..." << endl;
    driverA.setWaterLevel("50%");
    cout << "the water reserve of " << driverA.getName() << " is now " << driverA.getWaterLevel() << " empty" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "\n";
    cout << driverA.getName() << " needs to maneuver a pit stop..." << endl;

    driverA.setSpeed("70 km/h");
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "\n";
    cout << "Now " << driverA.getName() << " is driving at " << driverA.getSpeed() << ". He really needs the pit stop!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "\n";

    cout << " The driver has alerted he will soon arrive the pit stop!" << endl;
    cout << "\n";
    cout << "Press Enter to continue...";
    cin.ignore();

// Story PT 2
    vector<PitCrewTeam*> crew;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&tyreGunner1);
    crew.push_back(&tyreGunner2);
    crew.push_back(&tyreGunner3);
    crew.push_back(&tyreGunner4);
    cout << "\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&tyreOn1);
    crew.push_back(&tyreOn2);
    crew.push_back(&tyreOn3);
    crew.push_back(&tyreOn4);
    cout << "\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&tyreOff1);
    crew.push_back(&tyreOff2);
    crew.push_back(&tyreOff3);
    crew.push_back(&tyreOff4);
    cout << "\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&frontJack1);
    crew.push_back(&frontJack2);
    cout << "\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&rearJack1);
    crew.push_back(&rearJack2);
    cout << "\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&sideJack1);
    crew.push_back(&sideJack2);
    cout << "\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&wingFlap1);
    crew.push_back(&wingFlap2);
    cout << "\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    crew.push_back(&lollipopMan);
    cout << "\n" << endl;
    cout << "\n" << endl;

    driverA.brakePitStopA(crew);

    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "\n";
    cout << "The driver is now in conditions to continue the race." << endl;
    cout << "Press Enter to continue...";
    cin.get();
}

int main() {
    // Print F1 Openning Titles and aesthetics
    cout << "F1 Presents...\n" << endl;

    // Creating a F1Team object
    F1Team team("Mercedes-AMG Petronas", "Germany and UK", 2010);

    // Using setters to assign championships, drivers and crew's info into F1Team object
    // The drivers and crew's info is given by a matrix using the following format: {row of names, row of id's}
    vector<vector<string>> drivers = {{"Lewis Hamilton", "George Russell"}, {"15","16"}};
    vector<vector<string>> crew = {{"Ron Meadows", "James Vowles", "Pete Bonnington", "Lee Stevenson", "Tony Ross", "Marcus Dudley", "Dom Riefstahl", "Simon Cole", "Jonathan Wheatley", "Michael Collier", "Steve Russell", "James Pullar", "Dan Taylor", "Matt Deane", "Michael Scrimgour", "Stephen Lord", "Andy Cowell", "Mark Ellis", "David Coleman", "Adam Rowlinson", "Simon Andrews" }, {"T8xA1","T8xA2", "T8xA3", "T8xA4", "T8xB1", "T8xB2", "T8xB3", "T8xB4", "T8xC1", "T8xC2", "T8xC3", "T8xC4", "T8xD1", "T8xD2", "T8xE1", "T8xE2", "T8xF1", "T8xF2", "T8xG1", "T8xG2", "T8xH1"}};
    team.setInfoDrivers(drivers);
    team.setInfoCrew(crew);
    team.setChampionships(17);

    // Printing the team's openning titles
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Team 1: " << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    team.accesPrintTeamName();
    this_thread::sleep_for(chrono::milliseconds(1500));
    team.accesPrintCountry();
    this_thread::sleep_for(chrono::milliseconds(1500));
    team.printDrivers();
    this_thread::sleep_for(chrono::milliseconds(1500));

    // Print additional information (crew, foundation year, championships)
    cout << "\n=============== ADDITIONAL INFORMATION ===============" << endl;
    cout << "A) Foundation year of " << team.getTeamName() << ": " << team.getFoundationYear() << "." << endl;
    cout << "B) The team has " << team.getChampionships() << " championships." << endl;
    cout << "C) DriverA: " << team.getInfoDrivers()[0][0] << " || Pilot ID: " << team.getInfoDrivers()[1][0] << endl;
    cout << "D) DriverB: " << team.getInfoDrivers()[0][1] << " || Pilot ID: " << team.getInfoDrivers()[1][1] << endl;
    cout << "E) The crew team is conformed by: " << endl;
    team.printCrew();
    cout << "\n";

    // Creating Driver A and Driver B of the given Team
    TeamDriverA driverA(team.getInfoDrivers()[0][0]);
    TeamDriverB driverB(team.getInfoDrivers()[0][1]);

    // Creating the 21 crew people
    // The constructer has the following format: (name, isHelpingA, isHelpingB)
    // TyreGunner hereda de A
    TyreGunner tyreGunner1(team.getInfoCrew()[0][0], true, false, "pneumatic", "19mm", "0.34 Nm");
    TyreGunner tyreGunner2(team.getInfoCrew()[0][1], false, false, "electric", "19mm", "0.34 Nm");
    TyreGunner tyreGunner3(team.getInfoCrew()[0][2], false, false, "electric", "21mm", "0.28 Nm");
    TyreGunner tyreGunner4(team.getInfoCrew()[0][3], false, false, "manual", "21mm", "0.28 Nm");

    // TyreOn hereda de B
    TyreOn tyreOn1(team.getInfoCrew()[0][4], false, false, 1, "Dry", "disposable");
    TyreOn tyreOn2(team.getInfoCrew()[0][5], false, false, 1, "Dry", "mechanical");
    TyreOn tyreOn3(team.getInfoCrew()[0][6], false, false, 1.5, "Intermediate ", "cut-resistant ");
    TyreOn tyreOn4(team.getInfoCrew()[0][7], false, true, 1.5, "Intermediate ", "disposable");

    // TyreOff hereda de A
    TyreOff tyreOff1(team.getInfoCrew()[0][8], false, false, 1.8, "disposable" , "High" );
    TyreOff tyreOff2(team.getInfoCrew()[0][9], true, false, 1.7, "mechanical" , "High" );
    TyreOff tyreOff3(team.getInfoCrew()[0][10], true, false, 1.8, "disposable" , "low");
    TyreOff tyreOff4(team.getInfoCrew()[0][11], true, false, 1.6, "mechanical" , "low");

    // FrontJack y RearJack heredan de B
    FrontJack frontJack1(team.getInfoCrew()[0][12], false, true, "big" , "800" ,"150 Nm");
    FrontJack frontJack2(team.getInfoCrew()[0][13], false, true, "big" , "800" ,"150 Nm");
    RearJack rearJack1(team.getInfoCrew()[0][14], false, true, "wheel" , 1.5 , "140 Nm");
    RearJack rearJack2(team.getInfoCrew()[0][15], false, true, "hidraulic" , 1.2 , "140 Nm");

    // Estas clases no heredan de ninguno
    SideJack sideJack1(team.getInfoCrew()[0][16], false, false, "red", "high", "good");
    SideJack sideJack2(team.getInfoCrew()[0][17], false, false, "blue", "moderate", "good");
    WingFlap wingFlap1(team.getInfoCrew()[0][18], false, false, true, false, "plain");
    WingFlap wingFlap2(team.getInfoCrew()[0][19], false, false, true, false, "split");

    // LollipopMan hereda de A
    LollipopMan lollipopMan(team.getInfoCrew()[0][20], true, false, "green", "light blue", "high");

    // Force a break for User and show menu of stuff the program can and cannot do
    cout << "Press Enter to continue...";
    cin.get();
    while (true) {
        for (int i = 0; i < 200; ++i) {
            std::cout << "\n";
        }
        cout << "\n=============== SELECT ONE OPTION ===============" << endl;
        cout << "1. Meet Mercedes-AMG Petronas people" << endl;
        cout << "2. Simulate a Pit Stop" << endl;
        cout << "3. Exit program" << endl;
        cout << "Option: ";

        int option;
        cin >> option;
        cin.ignore();

        if (option == 1) {
            for (int i = 0; i < 200; ++i) {
                std::cout << "\n";
            }
            meetTheTeam(driverA, driverB, tyreGunner1, tyreGunner2, tyreGunner3, tyreGunner4, tyreOn1, tyreOn2, tyreOn3, tyreOn4, tyreOff1, tyreOff2, tyreOff3, tyreOff4, frontJack1, frontJack2, rearJack1, rearJack2, sideJack1, sideJack2, wingFlap1, wingFlap2, lollipopMan);
        }
        else if (option == 2) {
            for (int i = 0; i < 200; ++i) {
                std::cout << "\n";
            }
            simulatePitStop(driverA, driverB, tyreGunner1, tyreGunner2, tyreGunner3, tyreGunner4, tyreOn1, tyreOn2, tyreOn3, tyreOn4, tyreOff1, tyreOff2, tyreOff3, tyreOff4, frontJack1, frontJack2, rearJack1, rearJack2, sideJack1, sideJack2, wingFlap1, wingFlap2, lollipopMan);
        }
        else if (option == 3) {
            break;
        }
    }
    return 0;
}
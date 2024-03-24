cmake_minimum_required(VERSION 3.27)
project(Practice_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(Practice_1 main.cpp
        ParentClasses/F1Team.cpp
        ParentClasses/F1Team.h
        SubClasses/TeamDriverA.cpp
        SubClasses/TeamDriverA.h
        SubClasses/TeamDriverB.cpp
        SubClasses/TeamDriverB.h
        SubClasses/PitCrewTeam.cpp
        SubClasses/PitCrewTeam.h
        SubSubClasses/FrontJack.cpp
        SubSubClasses/FrontJack.h
        SubSubClasses/LollipopMan.cpp
        SubSubClasses/LollipopMan.h
        SubSubClasses/RearJack.cpp
        SubSubClasses/RearJack.h
        SubSubClasses/SideJack.cpp
        SubSubClasses/SideJack.h
        SubSubClasses/TyreGunner.cpp
        SubSubClasses/TyreGunner.h
        SubSubClasses/TyreOff.cpp
        SubSubClasses/TyreOff.h
        SubSubClasses/TyreOn.cpp
        SubSubClasses/TyreOn.h
        SubSubClasses/WingFlap.cpp
        SubSubClasses/WingFlap.h)

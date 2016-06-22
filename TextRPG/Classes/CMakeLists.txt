PROJECT(textRPG)

CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

add_compile_options("$<$<CONFIG:DEBUG>:-Wall>")

SET(SRC
    Weapon.cpp
    Character.cpp
    Robber.cpp
    Warrior.cpp
    Wizard.cpp
    )

SET(HDR
    Weapon.h
    Character.h
    Robber.h
    Warrior.h
    Wizard.h
    )

ADD_EXECUTABLE(textRPG main.cpp ${SRC} ${HDR})
target_compile_features(textRPG PRIVATE cxx_range_for)

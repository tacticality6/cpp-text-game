#include <iostream>

#include "character.hh"
#include "equipment.hh"

#ifndef PLAYER_HH
#define PLAYER_HH

class Player : public Character
{
private:
    std::vector<Equipment> equipment;

    void die()
    {
        std::cerr << "Player has died";
    }
};

#endif
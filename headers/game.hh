#include <iostream>

#include "entity.hh"

#include "room.hh"
#include "gameState.hh"

#ifndef GAME_HH
#define GAME_HH

class Game {
private:

public:
    GameExitState start();
    GameExitState load();
    GameExitState runGame();
};

#endif
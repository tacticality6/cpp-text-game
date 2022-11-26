#include <iostream>

#include "entity.hh"

#include "room.hh"
#include "gameExitState.hh"
#include "player.hh"

#ifndef GAME_HH
#define GAME_HH

class Game {
private:
    std::vector<Room*> roomList;
    Player* player;
    Room* currentRoom;
public:
    Game()
    {
        player = nullptr;
        currentRoom = nullptr;
    }
    

    GameExitState start(std::vector<Room*> roomList, Player* player, Room* startingRoom);
    GameExitState load();
    GameExitState runGame();
};

#endif
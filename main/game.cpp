

#include "../headers/game.hh"

GameExitState Game::start(std::vector<Room*> roomList, Player* player, Room* startingRoom)
{
    //set variables
    this->roomList = roomList;
    this->player = player;
    this->currentRoom = startingRoom;

    //main game
    return runGame();
}

GameExitState Game::load()
{
    //do stuff

    //main game
    return runGame();
}
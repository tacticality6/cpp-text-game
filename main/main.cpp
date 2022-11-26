#include <iostream>
#include <exception>

#include "../headers/entity.hh"
#include "../headers/item.hh"
#include "../headers/room.hh"
#include "../headers/game.hh"
#include "../headers/gameExitState.hh"

int main() 
{
    //variable definitions
    //items
    Item testItem {"TestItem", "a test Item", 0b00000000};
    //commands
    //...
    //Rooms
    Room testRoom {"TestRoom", "a test room, for testing"};

    //Room list
    std::vector<Room*> roomList{&testRoom};

    //player definition
    Player player;

    //starting room
    Room* startingRoom{&testRoom};


    //Game state
    //determine newGame/loadGame
    bool load {false};
    

    //begin
    Game game{};
    GameExitState status {gameExitFailure};
    try
    {
        if (load)
        {
            status = game.start(roomList, &player, startingRoom);
        } else
        {
            status = game.load();
        }
    } catch (const std::exception& e)
    {
        std::cerr << stateText(gameExitFailure) << std::endl;
        std::cerr << e.what() << std::endl;

        return 1;
    }
    std::cout << stateText(status) << std::endl;

    return 0;
}
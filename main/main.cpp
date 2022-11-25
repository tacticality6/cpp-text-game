#include <iostream>
#include <exception>

#include "../headers/entity.hh"
#include "../headers/item.hh"
#include "../headers/room.hh"
#include "../headers/game.hh"
#include "../headers/gameState.hh"

int main() 
{
    //variable definitions
    Room testRoom {"TestRoom", "a test room, for testing"};
    Item testItem {"TestItem", "a test Item", 0b00000000};


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
            status = game.start();
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
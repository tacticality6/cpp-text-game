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



    //Game state
    //determine newGame/loadGame
    bool load {false};
    

    //begin
    Game game{};
    GameState status {defaultState};
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
        std::cerr << stateText(unexpectedError) << std::endl;
        std::cerr << e.what() << std::endl;

        return 1;
    }
    std::cout << stateText(status) << std::endl;

    return 0;
}
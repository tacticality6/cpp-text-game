#include <iostream>

#include "../headers/game.hh"

GameExitState Game::runGame()
{
    int testvar;
    //gaming time
    std::cout << "test" << std::endl;
    std::cin >> testvar;


    //exit the game
    return gameExitSuccess;
}
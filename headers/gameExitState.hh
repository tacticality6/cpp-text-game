#include <string>

#ifndef GAMESTATE_HH
#define GAMESTATE_HH

enum GameExitState
{
    gameExitSuccess,
    gameExitFailure,
};

std::string stateText(GameExitState state);

#endif
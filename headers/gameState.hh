#include <string>

#ifndef GAMESTATE_HH
#define GAMESTATE_HH

enum GameState
{
    gameExitSuccess,
    gameExitFailure,
    unexpectedError,
    defaultState,
};

std::string stateText(GameState state);

#endif
#include <string>

#include "../headers/gameState.hh"

std::string stateText(GameState state)
{
    switch (state)
    {
        case gameExitSuccess: return "GameExitSuccess";
        case gameExitFailure: return "GameExitFailure";
        case unexpectedError: return "UnexpectedError";
        case defaultState:    
        default:              return "DefaultStateError";
    }
}
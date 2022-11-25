#include <string>

#include "../headers/gameState.hh"

std::string stateText(GameExitState state)
{
    switch (state)
    {
        case gameExitSuccess: return "GameExitSuccess";
        case gameExitFailure: return "GameExitFailure";
        default:              return "UnexpectedError";
    }
}
#include <string>

#include "../headers/gameExitState.hh"

std::string stateText(GameExitState state)
{
    switch (state)
    {
        case gameExitSuccess: return "GameExitSuccess";
        case gameExitFailure: return "GameExitFailure";
        default:              return "UnexpectedError";
    }
}
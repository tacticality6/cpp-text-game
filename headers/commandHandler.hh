#include <string>
#include <vector>

#include "command.hh"
#include "player.hh"
#include "room.hh"

#ifndef COMMANDHANDLER_HH
#define COMMANDHANDLER_HH

class CommandHandler
{
private:
    std::vector<Command> commandList;

public:
    //constructors
    CommandHandler(std::vector<Command> commandList)
    {
        this->commandList = commandList;
    }

    void addCommands(const Command& command);
    void addCommands(const std::vector<Command>& commandList);

    void handle(Player& player, Room& currentRoom, std::string cmnd);
};

#endif
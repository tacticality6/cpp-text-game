

#include "../headers/commandHandler.hh"

void CommandHandler::addCommands(const Command& command)
{
    commandList.push_back(command);
}

void CommandHandler::addCommands(const std::vector<Command>& commandList)
{
    this->commandList.insert(this->commandList.end(), commandList.begin(), commandList.end() );
}

void CommandHandler::handle(Player& player, Room& currentRoom, std::string cmnd)
{

}
#include <string>
#include <vector>

#include "entity.hh"

#ifndef COMMAND_HH
#define COMMAND_HH

using f_ptr = void (*)(std::string, std::vector<Entity*>);

class Command
{
private:
    std::vector<std::string> aliases;
    f_ptr method;

public:
    //getters and setters
    std::vector<std::string> getAliases() { return aliases; }
    f_ptr                    getMethod() { return method; }
    void                     setAliases(const std::vector<std::string>& aliases) { this->aliases = aliases; }
    void                     setMethod(const f_ptr& method) { this->method = method; }

    //constructors
    Command() = delete;
    Command(const std::vector<std::string>& aliases, const f_ptr method)
    {
        this->aliases = aliases;
        this->method = method;
    }

    //methods
    void execute(const std::string& arg1, const std::vector<Entity*>& arg2)
    {
        method(arg1, arg2);
    }    

};

#endif
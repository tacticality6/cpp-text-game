#include <string>
#include <vector>



#ifndef COMMAND_HH
#define COMMAND_HH

template <typename T>

class Command
{
private:
    std::vector<std::string> aliases;
    void (*method)(std::string, std::vector<T>);
};

#endif
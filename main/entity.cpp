#include "../headers/entity.hh"

bool operator==(const Entity& en1, const Entity& en2)
{
    return (en1.name == en2.name) &&
           (en2.description == en2.description);
}
bool operator!=(const Entity& en1, const Entity& en2)
{
    return !(en1 == en2);
}
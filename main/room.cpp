/*TODO: Error Handling
    -removeEntity(int) | in range |
    -removeEntity(Entity) | Entity in room |
    -moveEntity() | Entity in room |
*/
#include <cassert>

#include "../headers/room.hh"
#include "../headers/entity.hh"

//check if entity is in the room
bool Room::inRoom(const Entity*& entity) const
{
    for (int i{0}; i < contents.size(); i++) 
    {
        if (contents[i] == entity)
        {
            return true;
        }
    }
    
    return false;
}

//add an entity to the room
void Room::addEntity(const Entity* &en)
{
    contents.push_back(const_cast<Entity*>(en));
}

//remove entities from the room
//by index
void Room::removeEntity(int i)
{
    contents.erase(contents.begin()+i);
}
//by value
void Room::removeEntity(const Entity*& entity)
{
    for (int i{0}; i < contents.size(); i++) 
    {
        if (contents[i] == entity) {
            contents.erase(contents.begin()+i);
        }
    }
}

//move an entity from 1 room to another
void Room::moveEntity(Room& rm, const Entity*& en)
{
    //add the entity to the new room

    rm.addEntity(en);
    //remove it from the current room
    this->removeEntity(en);
}

//check if rooms are equivalent
bool operator==(const Room& rm1, const Room& rm2)
{
    return (rm1.name == rm2.name) && 
        (rm1.description == rm2.description) && 
        (rm1.contents == rm2.contents) &&
        (rm1.neighbours == rm2.neighbours);
}
bool operator!=(const Room& rm1, const Room& rm2)
{
    return !(rm1 == rm2);
}
#include <string>
#include <vector>

#include "entity.hh"

#ifndef ROOM_HH
#define ROOM_HH

class Room 
{
protected:
    std::string name;
    std::string description;
    std::vector<Entity*> contents;
    std::vector<Room> neighbours;

public:
    //getters & setters (fully defined)
    const std::string&          getName() const { return name; }
    const std::string&          getDescription() const { return description; }
    const std::vector<Entity*>& getContents() const { return contents; }
    const std::vector<Room>&    getNeighbours() const { return neighbours; }
    void                        setName(const std::string& name) { this->name = name; }
    void                        setDescription(const std::string& description) { this->description = description; }
    void                        setContents(const std::vector<Entity*>& contents) { this->contents = contents; }
    void                        setNeighbours(const std::vector<Room>& neighbours) { this->neighbours = neighbours; }


    //Constructors (fully defined)
    Room() 
    {
        this->name = "DEFAULT ROOM";
        this->description = "EMPTY DESCRIPTION";
    }
    Room(const std::string& name)
    {
        this->name = name;
        this->description = "EMPTY DESCRIPTION";
    }
    Room(const std::string& name, const std::string& description)
    {
        this->name = name;
        this->description = description;
    }
    Room(const std::string& name, const std::string& description, const std::vector<Entity*> contents)
    {
        this->name = name;
        this->description = description;
        this->contents = contents;
    }


    //methods
    //checks if item is in room
    bool inRoom(const Entity*& entity) const;
    //adds an enitity to the room
    void addEntity(const Entity*& entity);
    //remove an entity from the room by index or value
    void removeEntity(int i);
    void removeEntity(const Entity*& entity);
    //move an entity from this room to another
    void moveEntity(Room& rm, const Entity*& entity);

    
    //friend methods for operator overloading
    friend bool operator==(const Room& rm1, const Room& rm2);
    friend bool operator!=(const Room& rm1, const Room& rm2);
};

#endif
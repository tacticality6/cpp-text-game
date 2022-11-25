#include <cstdint>
#include <string>

#include "entity.hh"

#ifndef ITEM_HH
#define ITEM_HH

class Item : public Entity
{
private:
    std::uint8_t properties;

public:
    //constructors
    Item()
    : Entity()
    { properties = 0b00000000; }

    Item(const std::string& name)
    : Entity(name)
    { properties = 0b00000000; }

    Item(const std::string& name, const std::string description)
    : Entity(name, description)
    { properties = 0b00000000; }

    Item(const std::string& name, const std::string& description, const std::uint8_t properties)
    : Entity(name, description)
    { this->properties = properties; }


    //properties enum, for bitmasking
    enum Property : std::uint8_t
    {
        visible    = 0b00000001,
        pickable   = 0b00000010,
        breakable  = 0b00000100,
        unlockable = 0b00001000,

    };

    //getters & setters
    std::uint8_t getProperties() const { return properties; }
    void         setProperties(std::uint8_t properties) { this->properties = properties; }


    //property manip methods
    bool hasProperty(Property p) const;
    void enable(Property p);
    void disable(Property p);
    void toggle(Property p);
    void set(Property p, bool val);
};

#endif
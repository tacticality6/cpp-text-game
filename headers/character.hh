#include <string>
#include <vector>

#include "entity.hh"
#include "item.hh"
#include "stats.hh"
#include "action.hh"

#ifndef CHARACTER_HH
#define CHARACTER_HH

class Character : public Entity
{
private:
    Stats baseStats;
    Stats stats;
    std::vector<Item> inventory;
    std::vector<Action> actions;

    virtual void die()
    {

    }

protected:
    Character()
    : Entity()
    {
        baseStats = {10, 10, 10, 10, 10, 10, 10};
        stats = baseStats;
    }
    Character(const std::string& name)
    : Entity(name)
    {
        baseStats = {10, 10, 10, 10, 10, 10, 10};
        stats = baseStats;
    }
    Character(const std::string& name, const std::string& description)
    : Entity(name, description)
    {
        baseStats = {10, 10, 10, 10, 10, 10, 10};
        stats = baseStats;
    }
    Character(const std::string& name, const std::string& description, const Stats& baseStats)
    : Entity(name, description)
    {
        this->baseStats = baseStats;
        stats = this->baseStats;
    }

public:
    //getters & setters
    const Stats&               getStats() const { return baseStats; }
    const std::vector<Item>&   getInventory() const { return inventory; }
    const std::vector<Action>& getActions() const { return actions; }
    void                       setInventory(const std::vector<Item>& inventory) { this->inventory = inventory; }
    void                       setAction(const std::vector<Action>& actions) { this->actions = actions; }
    //set stats is a little different
    void setStats(const Stats& stats);


    //other hp methods
    
    //change the characters hp
    void changeHP(int num);
    void damage(int num);
    void heal(int num);


};

#endif
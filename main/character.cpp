#include <cassert>

#include "../headers/character.hh"

void Character::setStats(const Stats& stats) 
{ 
    this->baseStats = stats;
    this->stats = baseStats;

    if (this->stats.HP == 0)
    {
        die();
    }
}

void Character::changeHP(int num)
{
    stats.HP += num;

    if (stats.HP == 0)
    {
        die();
    }
}

void Character::damage(int num)
{
    assert(num >= 0);
    changeHP(num * -1);
}
void Character::heal(int num)
{
    assert(num >= 0);
    changeHP(num);
}
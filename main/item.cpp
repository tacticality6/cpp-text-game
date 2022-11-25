

#include "../headers/item.hh"

//property manip methods
bool Item::hasProperty(Property p) const { return properties & p; }

void Item::enable(Property p) { properties = properties | p; }
void Item::disable(Property p) { properties = properties & ~p; }
void Item::toggle(Property p) { properties = properties ^ p; }

void Item::set(Property p, bool val)
{
    if (val)
        this->enable(p);
    else
        this->disable(p);
}
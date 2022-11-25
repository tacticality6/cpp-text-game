#ifndef ENTITY_HH
#define ENTITY_HH

class Entity 
{
private:
    std::string name;
    std::string description;
//constructors are protected, as entity shouldn't be instantiated
protected:
    Entity()
    {
        name = "DEFAULT NAME";
        description = "DEFAULT DESCRIPTION";
    }
    Entity(const std::string& name)
    {
        this->name = name;
        description = "DEFAULT DESCRIPTION";
    }
    Entity(const std::string& name, const std::string& description)
    {
        this->name = name;
        this->description = description;
    }
public:
    //getters & setters
    const std::string& getName() const { return this->name; }
    const std::string& getDescription() const { return this->description; }
    void               setName(const std::string& name) { this->name = name; }
    void               setDescription(const std::string& description) { this->description = description; }

    //forward definitions
    friend bool operator==(const Entity& en1, const Entity& en2);
    friend bool operator==(const Entity& en1, const Entity& en2);

};

#endif
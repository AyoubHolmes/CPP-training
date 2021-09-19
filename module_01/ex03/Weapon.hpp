#ifndef WEAPON_HPP

# include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(/* args */);
    const std::string& getType();
    void  setType(std::string str);
    ~Weapon();
};

#endif // !WEAPON_HPP
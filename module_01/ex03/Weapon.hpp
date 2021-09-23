#ifndef WEAPON_HPP

# include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(/* args */);
    Weapon(std::string str);
    const std::string& getType();
    void  setType(std::string str);
    std::string  getType(std::string str);

    ~Weapon();
};

#endif // !WEAPON_HPP
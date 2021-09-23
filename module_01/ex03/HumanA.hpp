#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon weapon;
public:
    HumanA(Weapon);
    HumanA(std::string, Weapon);
    std::string getName();
    void setName(std::string);
    Weapon getWeapon();
    void setWeapon(Weapon);
    void attack();
    ~HumanA();
};

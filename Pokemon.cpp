#include "Pokemon.hpp"
#include <iostream>
#include "PokemonType.hpp"
using namespace std;

// Default constructor
Pokemon::Pokemon()
{
    name = "Unknown"; type = PokemonType::NORMAL; health = 50,maxHealth=100;
}


// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower)
    : name(p_name), type(p_type), health(p_health), attackPower(p_attackPower)

{
}

void Pokemon::takeDamage(int damage) {
    health -= damage;
    if (health < 0)
    {
        health = 0;
    }
}

bool Pokemon::isFainted() const
{
    return health <= 0; // Return true if HP is 0 or less
}
void Pokemon::attack(Pokemon & target) 
{
    int damage = attackPower;
    cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
    target.takeDamage(attackPower);
}
void Pokemon::heal() {
    health = maxHealth; // Restore health to full
}

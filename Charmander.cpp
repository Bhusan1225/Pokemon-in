#include "Charmander.hpp"
#include "PokemonType.hpp"
#include <iostream>

Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

void Charmander::flameThrower(Pokemon* target)
{
    cout << name << " uses Flame Thrower on " << target->name << "!\n";
    target->takeDamage(20);
}
#include "Charmander.hpp"
#include "PokemonType.hpp"
#include <iostream>

Charmander::Charmander()
{

	name = "Charmander", 
    type = PokemonType::FIRE; 
    maxHealth = 100;
    attackPower = 35;
	
}

void Charmander::flameThrower(Pokemon& target)
{
    cout << name << " uses Flame Thrower on " << target.name << "!\n";
    target.takeDamage(20);
}
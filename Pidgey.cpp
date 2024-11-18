#include "Pidgey.hpp"
#include "PokemonType.hpp"
#include <iostream>


using namespace std;

Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}

void Pidgey::wingAttack(Pokemon& target) 
{
   cout << name << " uses Wing Attack on " << target.name << "!\n";
   target.takeDamage(20);
}
    
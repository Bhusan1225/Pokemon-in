#include "Pikachu.hpp"
#include "PokemonType.hpp"
#include <iostream>



using namespace std;

Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}

void Pikachu::thunderShock(Pokemon* target) 
{
            cout << name << " uses Thunder Shock on " << target->name << "!\n";
            target->takeDamage(20);
}
 

#include "Pidgey.hpp"
#include "PokemonType.hpp"
#include <iostream>


using namespace std;

Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}


  
void Pidgey::attack(Pokemon* target) {
    wingAttack(target);
}

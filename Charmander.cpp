#include "Charmander.hpp"
#include "PokemonType.hpp"
#include <iostream>

Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}


void Charmander::attack(Pokemon* target) {
    flameThrower(target);
}

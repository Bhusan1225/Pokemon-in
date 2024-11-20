#include "Squirtle.hpp"
#include "PokemonType.hpp"
#include <iostream>


using namespace std;

Squirtle::Squirtle() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

void Squirtle::attack(Pokemon* target) {
            waterSplash(target);
        }
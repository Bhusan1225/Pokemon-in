#include "Caterpie.hpp"
#include "PokemonType.hpp"
#include <iostream>
using namespace std;

 Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

void Caterpie::attack(Pokemon* target){
    bugBite(target);
}
   
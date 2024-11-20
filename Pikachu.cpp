#include "Pikachu.hpp"
#include "PokemonType.hpp"
#include <iostream>



using namespace std;

Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}


 
void Pikachu::attack(Pokemon* target) {
    thunderShock(target);
}
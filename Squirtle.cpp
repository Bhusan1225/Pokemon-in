#include "Squirtle.hpp"
#include "PokemonType.hpp"
#include <iostream>


using namespace std;

        Squirtle::Squirtle() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Squirtle::waterSplash(Pokemon& target) {
            cout << name << " uses Water splash on " << target.name << "!\n";
            target.takeDamage(20);
        }
       
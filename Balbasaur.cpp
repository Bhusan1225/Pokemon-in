#include "Balbasaur.hpp"
#include "PokemonType.hpp"
#include <iostream>


        using namespace std;

        Balbasaur::Balbasaur() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Balbasaur::vineWhip(Pokemon& target) {
            cout << name << " uses vine Whip on " << target.name << "!\n";
            target.takeDamage(20);
        }
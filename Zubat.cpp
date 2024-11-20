#include "Zubat.hpp"
#include "PokemonType.hpp"
#include <iostream>



        using namespace std;

        Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}

        void Zubat::attack(Pokemon* target) {
            supersonic(target);
        }
    

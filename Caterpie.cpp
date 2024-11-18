#include "Caterpie.hpp"
#include "PokemonType.hpp"
#include <iostream>



            using namespace std;

            Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

            void Caterpie::bugBite(Pokemon& target) {
                cout << name << " uses Bug Bite on " << target.name << "!\n";
                target.takeDamage(20);
            }
   
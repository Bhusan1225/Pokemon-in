#include "Zubat.hpp"
#include "PokemonType.hpp"
#include "Move.hpp"
#include <iostream>



        using namespace std;

        Zubat::Zubat()
            : Pokemon("Zubat", PokemonType::POISON, 85, {
                Move("BITE", 18),
                Move("LEECH LIFE", 10)
                }) {
        }

        void Zubat::attack(Move selectedMove, Pokemon* target)
        {
            // Call the base class method from child class.
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "LEECH LIFE")
            {
                // Restore 50% of the damage dealt
                this->health += selectedMove.power * 0.5;

                // Ensure health does not exceed maxHealth
                if (this->health > this->maxHealth)
                    this->health = this->maxHealth;

                cout << "... and regained health!\n";
            }
        }

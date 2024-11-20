#pragma once
#include "Pokemon.hpp"



        class Balbasaur : public Pokemon {
            

        public:
            Balbasaur();
            void attack(Pokemon* target) override;
        };


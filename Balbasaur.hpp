#pragma once
#include "Pokemon.hpp"

class Bulbasaur : public Pokemon {
public:
    Bulbasaur();
    void attack(Move selectedMove, Pokemon* target) override;
};

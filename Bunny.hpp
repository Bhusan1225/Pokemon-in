#pragma once
#include "Pokemon.hpp"

class Bunny : public Pokemon {
public:
    Bunny();
    void attack(Move selectedMove, Pokemon* target) override;
};
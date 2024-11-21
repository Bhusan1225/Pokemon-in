#pragma once
#include "Pokemon.hpp"

class Caterpie : public Pokemon {
public:
    Caterpie();
    void attack(Move selectedMove, Pokemon* target) override;
};
   
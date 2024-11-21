#pragma once
#include "Pokemon.hpp"


class Charmander : public Pokemon {
public:
    Charmander();
    void attack(Move selectedMove, Pokemon* target) override;
};


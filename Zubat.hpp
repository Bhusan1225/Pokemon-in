#pragma once
#include "Pokemon.hpp"


class Zubat : public Pokemon {
public:
    Zubat();
    void attack(Move selectedMove, Pokemon* target) override;
};

    

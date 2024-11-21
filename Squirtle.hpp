#pragma once
#include "Pokemon.hpp"


class Squirtle : public Pokemon {
public:
    Squirtle();
    void attack(Move selectedMove, Pokemon* target) override;
 
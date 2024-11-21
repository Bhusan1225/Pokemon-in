#pragma once
#include "Pokemon.hpp"


class Pidgey : public Pokemon {
public:
    Pidgey();
    void attack(Move selectedMove, Pokemon* target) override;
};
    
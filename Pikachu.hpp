#pragma once
#include "Pokemon.hpp";
using namespace std;

class Pikachu : public Pokemon 
{
    public:
    Pikachu();
    void attack(Pokemon* target) override;
};
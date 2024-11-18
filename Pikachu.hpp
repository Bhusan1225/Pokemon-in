#pragma once
#include "Pokemon.hpp";
using namespace std;

class Pikachu : public Pokemon 
{
public:
    Pikachu();
    void thunderShock(Pokemon& target);
};
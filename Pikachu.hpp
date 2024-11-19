#pragma once
#include "Pokemon.hpp";
using namespace std;

class Pikachu : public Pokemon 
{
private:
    void thunderShock(Pokemon& target);

public:
    Pikachu();
};
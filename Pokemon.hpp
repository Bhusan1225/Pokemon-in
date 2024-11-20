#pragma once
#include <string>
using namespace std;

enum class PokemonType;

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;

    Pokemon();
    Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
    Pokemon(const Pokemon* other);

    bool isFainted() const;
    void heal();
    virtual void attack(Pokemon* target) = 0;
    void takeDamage(int damage);
};
#include <string>
using namespace std;
enum PokemonType;//forward declaration 

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHeath;
    int attackPower


    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health);


    void takeDamage(int damage);
    bool isFainted()const;

    void attack();
    void heal(); //Method to restore HP to max
};
#include <iostream>
using namespace std;



class Pokemon 
{
public:
    string name;
    PokemonType type;
    int health;

    // Created 2 constructors
    Pokemon() {

    }

    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }


    void attack() { cout << name << "attacks with a powerful move!\n"; }
};


int main() {
    string player_name;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "       <<<<Welcome to the world of Pokemon!>>>>" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    cout << "Professor Oak: My name is Oak. People call me the Pokemon "
        "Professor!\n";
    cout << "Professor Oak: But enough about me. Let's talk about you!\n";
    cout << "Enter your name: ";
    cout << "Professor Oak: First, tell me, what’s your name?\n";
    cin >> player_name;

    cout << "Professor Oak: Ah, " << player_name
        << "! What a fantastic name!\n";
   
    cout << "In this land of adventure, amazing creatures\nawait your discovery.\n";
    cout << "=======================================================\n";
    cout << "As a Pokémon Trainer, your journey will be \nfilled with thrilling battles, new friendships,\nand countless challenges.\n";

    cout << "=======================================================\n";
    cout << "Each choice you make shapes your path—catch Pokémon,\ntrain hard, and become the very best!Are you ready\nto step into the tall grass and begin your journey?\nYour adventure starts now!Let’s catch 'em all!\n";
    cout << "=======================================================\n";

    cout << "Professor Oak: You must be eager to start your adventure. But "
        "first, you’ll need a Pokemon of your own!\n";


    return 0;
}
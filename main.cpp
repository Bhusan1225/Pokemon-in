#include <iostream>
using namespace std;



enum class PokemonChoice 
{ 
    Charmander, 
    Bulbasaur ,
    Squirtle,
    Pikachu

};

enum class PokemonType
{
    fireType,
    grassType,
    waterType,
    currentType
    

};




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

class Player
{
    string Name;
    int health;
    Pokemon p_chosenPokemon;

    void choosePokemon(int choice)
    {
        //pokemon choice logic 
        //copy paste from main function- Feature_1_Pokemon_Selection branch
        switch (choice) {
        case 1:
            chosen_pokemon = PokemonChoice::Charmander;
            chosen_pokemonType = PokemonType::fireType;
            break;
        case 2:
            chosen_pokemon = PokemonChoice::Bulbasaur;
            chosen_pokemonType = PokemonType::grassType;
            break;
        case 3:
            chosen_pokemon = PokemonChoice::Squirtle;
            chosen_pokemonType = PokemonType::waterType;
            break;
        default:
            chosen_pokemon = PokemonChoice::Pikachu;
            chosen_pokemonType = PokemonType::currentType;
            break;
        }


        switch (chosen_pokemon) {
        case PokemonChoice::Charmander:

            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;

        case PokemonChoice::Bulbasaur:

            cout << "Professor Oak: A fine choice! Bulbasaur is always ready to "
                "grow on you!\n";
            break;

        case PokemonChoice::Squirtle:

            cout << "Professor Oak: Splendid! Squirtle will keep you cool under "
                "pressure!\n";
            break;

        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose "
                "for you...\n";
            chosen_pokemon = PokemonChoice::Pikachu;
            cout << "Professor Oak: Just kidding! Let's go with Pikachu, the "
                "surprise guest!\n";
            break;
        }
    }
};


int main() {
  
    string player_name;
    PokemonChoice chosen_pokemon = PokemonChoice::Pikachu;
    PokemonType chosen_pokemonType = PokemonType::currentType;

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


   
    cout << "Hyyyyyyyyy.... I am Professor Oak.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

     int choice;
    cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
    cin >> choice;

    // Map the integer choice to the corresponding enum value
   /* switch(choice) {
        case 1:
            chosen_pokemon = PokemonChoice::Charmander;
            chosen_pokemonType = PokemonType::fireType;
            break;
        case 2:
            chosen_pokemon = PokemonChoice::Bulbasaur;
            chosen_pokemonType = PokemonType::grassType;
            break;
        case 3:
            chosen_pokemon = PokemonChoice::Squirtle;
            chosen_pokemonType = PokemonType::waterType;
            break;
        default:
            chosen_pokemon = PokemonChoice::Pikachu;
            chosen_pokemonType = PokemonType::currentType;
            break;
    }


    switch (chosen_pokemon) {
    case PokemonChoice::Charmander:
        
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;

    case PokemonChoice::Bulbasaur:
        
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to "
            "grow on you!\n";
        break;

    case PokemonChoice::Squirtle:
        
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under "
            "pressure!\n";
        break;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose "
            "for you...\n";
        chosen_pokemon = PokemonChoice::Pikachu;
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the "
            "surprise guest!\n";
        break;
    }*/

    // Concluding the first chapter
    cout << "Professor Oak: " << (chosen_pokemon == PokemonChoice::Charmander ? "Charmander" : chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : chosen_pokemon == PokemonChoice::Squirtle ? " Squirtle":"Pikachu")
        << " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
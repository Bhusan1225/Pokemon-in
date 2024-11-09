#include <iostream>
using namespace std;


enum class PokemonChoice 
{ 
    Charmander, 
    Bulbasaur ,
    Squirtle,
    Pikachu

};

int main() {
    string player_name;
    PokemonChoice chosen_pokemon = PokemonChoice::Pikachu;
    


    cout << "Enter your name: ";
    cin >> player_name;

    cout << "        Bonjour<<<<        " << player_name << "       >>>>Bonjour\n\n\n\n";


    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "       <<<<Welcome to the world of Pokemon!>>>>" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";


    cout << "In this land of adventure, amazing creatures\nawait your discovery.\n";
    cout << "=======================================================\n";
    cout << "As a Pokémon Trainer, your journey will be \nfilled with thrilling battles, new friendships,\nand countless challenges.\n";

    cout << "=======================================================\n";
    cout << "Each choice you make shapes your path—catch Pokémon,\ntrain hard, and become the very best!Are you ready\nto step into the tall grass and begin your journey?\nYour adventure starts now!Let’s catch 'em all!\n";
    cout << "=======================================================\n";


   
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
    switch(choice) {
        case 1:
            chosen_pokemon = PokemonChoice::Charmander;
            
            break;
        case 2:
            chosen_pokemon = PokemonChoice::Bulbasaur;
            
            break;
        case 3:
            chosen_pokemon = PokemonChoice::Squirtle;
            
            break;
        default:
            chosen_pokemon = PokemonChoice::Pikachu;
            
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

    // Concluding the first chapter
    cout << "Professor Oak: " << (chosen_pokemon == PokemonChoice::Charmander ? "Charmander" : chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : chosen_pokemon == PokemonChoice::Squirtle ? " Squirtle":"Pikachu")
        << " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
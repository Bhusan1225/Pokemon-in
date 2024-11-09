#include <iostream>
using namespace std;


//switch statement
int firstPokemonSelectionS()
{
    cout << "Hyyyyyyyyy.... I am Professor Oak.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;
    string chosen_pokemon;


    switch (choice) {
    case 1:
        chosen_pokemon = "Charmander";
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;

    case 2:
        chosen_pokemon = "Bulbasaur";
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to "
            "grow on you!\n";
        break;

    case 3:
        chosen_pokemon = "Squirtle";
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under "
            "pressure!\n";
        break;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose "
            "for you...\n";
        chosen_pokemon = "Pikachu"; // Default if no valid choice is made
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the "
            "surprise guest!\n";
        break;
    }

    // Concluding the first chapter
    cout << "Professor Oak: " << chosen_pokemon << " and you,\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore "
        "the vast world of Pokemon!\n";

    return 0;
}




int main() {
    string player_name;

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


   
    firstPokemonSelectionS();

    return 0;
}
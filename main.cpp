#include <iostream>
using namespace std;


int selectPokemon()
{
    cout << "Hyyyyyyyyy.... I am Professor Oak.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;


    if (choice == 1)
    {
        cout << "You choose Bulbasaur\n";
    }
    else if (choice == 2)
    {
        cout << " HMM, You choose Charmander\n";
    }
    else if (choice == 3)
    {
        cout << "WOW, You have a great choice,Squirtle";
    }
    else 
    {
        cout << "Sorry, there are only 3 options\nTry again...";
    }

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


    selectPokemon();

    return 0;
}
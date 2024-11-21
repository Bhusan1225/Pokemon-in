#include "iostream"
#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "Pikachu.hpp"
#include "Utility.hpp"
#include "Bulbasaur.hpp"
#include "Charmander.hpp"
#include "Squirtle.hpp"
using namespace std;

Player::Player() {
    name = "Trainer";
}

Player::Player(std::string p_name) {
    name = p_name;
}

void Player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice) {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = new Charmander();
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = new Bulbasaur();
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = new Squirtle();
        break;
    default:
        chosenPokemon = new Pikachu();
        break;
    }
    std::cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
    Utility::waitForEnter(); // Wait for user to press Enter before
    // proceeding
}
  

#pragma once
#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "iostream"
using namespace std;

Player::Player() {
    name = "Trainer";
    
}

Player::Player(string p_name, Pokemon* p_chosenPokemon) {
    name = p_name;
   }

void Player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice) {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = new Charmander();
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = new Balbasaur();
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = new Squirtle(); 
        break;
    default:
        chosenPokemon = new Pikachu();  
        break;
    }
    cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
    Utility::waitForEnter(); // Wait for user to press Enter before proceeding
}
#include "Game.hpp"
#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>


void battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
	cout << "A wild " << wildPokemon.name << " appeared!\\n";

	while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
		playerPokemon.attack(wildPokemon); // Player attacks first

		if (!wildPokemon.isFainted()) {
			wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
		}
	}

	if (playerPokemon.isFainted()) {
		cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
	}
	else {
		cout << "You defeated the wild " << wildPokemon.name << "!\\n";
	}
}

int main() {

	// Continue with the main flow of the game
	ProfessorOak professor("Professor Oak");
	Player player;

	// Greet the player and offer Pokemon choices
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	// Explain the main quest
	professor.explainMainQuest(player);

	// Start the main game loop
	Game game;
	game.gameLoop(player);

	return 0;
}
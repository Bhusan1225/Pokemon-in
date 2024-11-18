#include "Game.hpp"
#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>

int main() {

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "                    Pokémon Nexus                  " << endl;
	cout << "        Unite the Worlds, Unleash the Legends." << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	// Continue with the main flow of the games
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

	//checking branch main 

	return 0;
}
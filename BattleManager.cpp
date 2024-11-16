//i do it by my own

#include "BattleManager.hpp"
#include "Utility.hpp"// added here by from main by my own
#include <iostream>
using namespace std;



void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) 
{
	battleState.playerPokemon = &player.chosenPokemon;
	battleState.wildPokemon = &wildPokemon;
	battleState.playerTurn = true;  // Player starts first
	battleState.battleOngoing = true;
    cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle() {
    while (battleState.battleOngoing) {
        if (battleState.playerTurn) {
            // Player's turn to attack
            battleState.playerPokemon->attack(*battleState.wildPokemon);
        }
        else {
            // Wild Pokémon's turn to attack
            battleState.wildPokemon->attack(*battleState.playerPokemon);
        }

        // Update the battle state after the turn
        updateBattleState();

        // Switch turns
        battleState.playerTurn = !battleState.playerTurn;

        Utility::waitForEnter();
    }

    handleBattleOutcome();
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) 
{
	if (playerWon == true)
	{
		cout << player.chosenPokemon.name << "is victorious! Keep an eye on your Pokémon's health.\n";

	}
	else {
		cout << "Oh no!" << player.chosenPokemon.name << "fainted! You need to visit the PokeCenter.\n";

		Utility::waitForEnter();
		cout << "Game Over.\n";
	}
}

void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
}
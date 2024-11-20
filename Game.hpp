#pragma once
#include "Grass.hpp"

class Player;

class Game {
private:
	Grass forestGrass;
	Pokemon* wildPokemon;
public:
	Game();
	~Game();
	void gameLoop(Player* player);
	void visitPokeCenter(Player* player);
};
#pragma once
#include "BattleState.hpp"
class Player;
class Pokemon;

class BattleManager {
public:
    void startBattle(Player* player, Pokemon* wildPokemon);
    static void stopBattle();
private:
    static BattleState battleState;

    void battle();
    void handleBattleOutcome();
    void updateBattleState();
};
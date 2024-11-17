// BattleManager.hpp
#include "BattleState.hpp"
class Player;
class Pokemon;

class BattleManager {

public:
    void startBattle(Player& player, Pokemon& wildPokemon);//This is the method that kicks off the battle.

private:
    BattleState battleState;

    void battle();//in this methord actual battle happens.
    
    void handleBattleOutcome();//once the battle is over, this method is called to figure out what happens next. 

    void updateBattleState(); // Method to update the battle state after each turn
};

#include <vector>
struct Grass;
class Pokemon;

using namespace N_battle {

    class WildEncounterManager {
    public:
        WildEncounterManager();
        Pokemon getRandomPokemonFromGrass(const Grass& grass);
    };
}

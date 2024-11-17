// grass.hpp
#pragma once
#include<string>
#include<vector>
using namespace std;

struct Grass {
    string environmentType;  // Example: "Forest", "Cave", "Riverbank"
    vector<Pokemon> wildPokemonList;  // List of wild Pok�mon that live in this grass
    int encounterRate;  // Likelihood of encountering a wild Pok�mon, out of 100
};



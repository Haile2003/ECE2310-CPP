//RPG.H
#ifndef GAME_H
#define GAME_H

#include <string>
#include <set>
#include <vector>
#include "RPG.h" 

class Game {
public:
    //constructors
    Game();

    //Detructors
    ~Game();

    // Member Functions
    void generatePlayers(int n);
    int selectPlayer();
    void endRound(RPG* winner, RPG* loser, int loserIndex);
    void battleRound();
    void gameLoop();
    void printFinalResults();

private:
    std::vector<RPG*> players;
    std::set<int> live_players;

};

#endif

//main.cpp
#include <iostream>
#include "RPG.h"
#include "Game.h"

using namespace std;

int main()
{
    // Coding assignment 3
    /*
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

    // PRINT the same for p2
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

    // CALL setHitsTaken(new_hit) on either p1 and p2
    p2.setHitsTaken(3);
    // PRINT OUT the hits_taken
    cout << "\n" << p2.getName() << " hits taken " << p2.getHitsTaken();
    
    cout << "\n0 is dead, 1 is alive\n";
    // CALL isAlive() on both p1 and p2

    cout << p1.getName() << " " << p1.isAlive() << " ";
    cout << p2.getName() << " " << p2.isAlive() << endl;
    
    */

    //coding Assignment 4
    // Create a Game object
    Game game;

    // Create num_players as an int and set it to 10
    int num_players = 10;

    // Call generatePlayers(...) with num_players as the parameter
    game.generatePlayers(num_players);

    // Call gameLoop()
    game.gameLoop();

    // Call printFinalResults()
    game.printFinalResults();
    return 0;
}

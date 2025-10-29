//RPG.H
#ifndef RPG_H
#define RPG_H

#include <string>
using namespace std;
const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;

class RPG {
public:
    //constructors
    RPG();
    RPG(string name, int hits_taken, float luck, float exp, int level);

    //mutators
    bool isAlive() const;
    void setHitsTaken(int new_hits);

    //New Mutators (Coding assignment 4)
    void setName(string name);
    void updateExpLevel();
    void attack( RPG * opponent);
    void printStats();
    //Detructors (Coding assignment 4)
    ~RPG();
    //accessors
    string getName() const;
    int getHitsTaken()const;
    float getLuck() const;
    float getExp() const;
    int getLevel() const;
    //COMPLETE THE REST

private:
    string _name;
    int _hits_taken;
    float _luck;
    int _level;
    float _exp;
};

#endif

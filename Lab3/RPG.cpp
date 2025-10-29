//RPG.cpp
#include "RPG.h"
#include <cstdio>
#include <random>
using namespace std;

/**
 * @brief Construct a new RPG::RPG object
 * 
 */
RPG::RPG(){
    this->_name = "NPC";
    this->_hits_taken = 0;
    this->_luck = 0.1;
    this->_exp = 50.0;
    this->_level = 1;
} 

/**
 * @brief Construct a new RPG::RPG object
 * 
 * @param name 
 * @param hits_taken 
 * @param luck 
 * @param exp 
 * @param level 
 */
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    _name = name;
    _hits_taken = hits_taken;
    _luck = luck;
    _exp = exp;
    _level = level;
}

/**
 * @brief Accessor to get player name
 * 
 * @return string 
 */
string RPG::getName() const {
    return _name;
}

/**
 * @brief acessor to get _hits_taken
 * 
 * @return int 
 */
int RPG::getHitsTaken() const {
    return _hits_taken;
}

/**
 * @brief Accessor to get Luck point
 * 
 * @return float 
 */
float RPG::getLuck() const {
    return _luck;
}

/**
 * @brief Accessor to get experience point
 * 
 * @return float 
 */
float RPG::getExp() const {
    return _exp;
}

/**
 * @brief Accessor to get level point
 * 
 * @return int 
 */
int RPG::getLevel() const {
    return _level;
}

/**
 * @brief sets hits_taken to new_hits
 * 
 * @param new_hits new value for _hits_taken
 */
void RPG::setHitsTaken(int new_hits){
    _hits_taken = new_hits;
}

/**
 * @brief returns whether hits_taken is less than MAX_HITS_TAKEN
 * In other words, a player is alive as long as they have not been hit MAX_HITS_TAKEN times.
 * @return true : player is alive 
 * @return false : player is unalive
 */
bool RPG::isAlive() const{
    return (_hits_taken < MAX_HITS_TAKEN);
}

/**
 * @brief updates name
 * 
 * @param name 
 */
void RPG::setName(string name){
    _name = name;
}

/**
 * @brief increase RPG's experience by 50
        After updating, if RPG's experience is >= 100.0, 
        increase RPG's level by 1, reset their experience to 0,
        and increase their luck by 0.1
 * 
 */
void RPG::updateExpLevel(){
    _exp += 50;
    if (_exp >= 100.0){
        _level += 1;
        _exp = 0;
        _luck = 0.1;
    }
}

/**
 * @brief  Hits or misses the opponent at random. Luck is a form of defense.
 *         The higher the opponent's luck, the more likely the attack will miss.
 *         If the attack is a hit, opponent's hits taken should increment by 1.
 *         Add last couple of lines to complete
 *
 * @param opponent: RPG *
 */

void RPG::attack(RPG * opponent){
    random_device rd;
    mt19937 gen(rd()); // seed with random
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num =  dis(gen);
    //Create a bool called hit
    bool hit = false;
    // hit is true if random_num > HIT_FACTOR * opponent's luck
    if(random_num > HIT_FACTOR * (opponent->getLuck())){
        hit = true;
    }
    //if hit is true, call updateHitsTaken() to increase opponent's hits_taken
    if (hit){
        
        int opponent_hits_taken = opponent->getHitsTaken();
        opponent_hits_taken += 1;
        opponent->setHitsTaken(opponent_hits_taken);
    
    }
}

/**
 * @brief Prints in the format:
 * "Name: NPC_X   Hits Taken: X   Luck: 0.X00000   Exp: X0.000000   Level: X   Status: Alive or Dead"
 */
void RPG::printStats(){
    printf("Name: %s  Hits Taken: %i  Luck: %.5f   Exp: %.6f   Level: %d   Staus: %s\n", this->getName().c_str(), this->getHitsTaken(), this->getLuck(), this->getExp(), this->getLevel(), this->isAlive() ? "Alive": "Dead");
}

/**
 * @brief Destroy the RPG::RPG object
 *        Already completed
 */
RPG::~RPG()
{}


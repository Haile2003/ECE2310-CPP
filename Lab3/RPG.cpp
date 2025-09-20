//RPG.cpp
#include <iostream>
#include "RPG.h"
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
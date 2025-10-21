// PET.h
#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class PET {
public:
    PET();
    PET(string name, int age, string owner, bool isHouseTrained);
    void setIsHouseTrained();
    void updateName(string name);
    void updateAge(int age);
    void updateOwner(string adopter);
    string getName();
    int getAge();
    string getOwner();
    bool getIsHouseTrained();

private:
    string name;
    int age;
    string owner;
    bool isHouseTrained;
};

#endif

//main.cpp
#include <iostream>
#include "Pet.h"

using namespace std;

int main() {
    PET p1;
    PET p2("Scooby", 10, "Shaggy", false);

    printf("Current Characteristics, p1.getName(): %s\n", p1.getName().c_str());
    printf("Name: %s Age: %i Owner: %s isHouseTrained: %d\n",
        p1.getName().c_str(), p1.getAge(), p1.getOwner().c_str(), p1.getIsHouseTrained());

    printf("Current Characteristics, p2.getName(): %s\n", p2.getName().c_str());
    printf("Name: %s Age: %i Owner: %s isHouseTrained: %d\n",
        p2.getName().c_str(), p2.getAge(), p2.getOwner().c_str(), p2.getIsHouseTrained());

    p2.updateAge(11);
    p2.updateName("Scooby-Doo");
    p2.updateOwner("Bob");
    p2.setIsHouseTrained();

    printf("Updated Characteristics, p2.getName(): %s\n", p2.getName().c_str());
    printf("Name: %s Age: %i Owner: %s isHouseTrained: %d\n",
        p2.getName().c_str(), p2.getAge(), p2.getOwner().c_str(), p2.getIsHouseTrained());

    return 0;
}

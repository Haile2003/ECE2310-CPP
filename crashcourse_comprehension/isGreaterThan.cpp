#include <iostream>
#include <cstdlib>
using namespace std;

bool isGreaterThan(double x, double y);

int main(){
    double x;
    double y;
    cout << "Enter First decimal number: ";
    cin >> x;
    cout << "Enter Second decimal number ";
    cin >> y;
    
    if (isGreaterThan(x,y)){
        cout << "Your first number is greater than second number" << endl;
    }
    else{
        cout << "Your second number is greater than first number" << endl;
    }

    return 0;
}

bool isGreaterThan(double x, double y)
{
    if (x>y){
        return true;
    }
    else{
        return false;
    }
}

/** isGreatherThan
* @brief returns whether x is greater than y
*
* @param x : (double)
* @param y : (int)
* @return true : x is greater than y
* @return false : x is less than or equal to y
*/
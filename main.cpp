#include "FieldGoal.h"

#include <iostream>
using namespace std;

;

int main() {

    cout << "Do you want to play basketball?"<<endl;
    cout << "We will calculate your field goal percentage and compare it to the top players in the NBA "<<endl;
    cout << "You will enter in the amount of shots you took, and how many you actually made"<<endl;



    FieldGoal b;
    cout << "Enter two integers separated by a space: "<<endl;
    while (!(cin >> b)) {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Try again. Two integers, please: ";
    }
    cout << b << endl;
    cout <<"Your percentage is: "<<b.getPercent()*100<<"%"<<endl;
    cout <<"-------------------------------------------------------"<<endl;
    cout <<"Here is how you compare to others in the NBA right now:"<<endl;
    cout <<"James Harden: 44.9"<<endl;
    cout <<"Giannis Antetokounmpo: 54.1"<<endl;
    cout <<"Stephen Curry: 49.3"<<endl;
    cout <<"Anthony Davis: 54.2"<<endl;
    cout <<"Lebron James: 54.3"<<endl;


    return 0;
}


//
// Created by might on 2/6/2018.
//

#include "FieldGoal.h"

#include <iostream>
using namespace std;

;

int main() {
    cout << "Testing" << endl;


    //should print 1/10
    FieldGoal a(1, 10);
    cout << a << endl;

    //should print 4/4
    FieldGoal b(4, 2);
    cout << b << endl;

    //error, does not print anything
    FieldGoal c(-3);

    //error, does not print anything
    FieldGoal d(-3,5);

    //error, does not print anything
    FieldGoal e(2,'abc');



    return 0;
}


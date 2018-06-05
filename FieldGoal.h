//
// Created by might on 2/6/2018.
//

#ifndef PROJECT2_FIELDGOAL_H
#define PROJECT2_FIELDGOAL_H

#include <iostream>
using namespace std;

//Field Goal Class
class FieldGoal{
private:
    int FGA; //Field Goals attempted
    int FGM; //Field Goals Made

public:
    /**
    * Default Constructor
    * Requires: Nothing
    * Modifies: FGA and FGM
    * Effects: sets the FG% to 0/0
    */
    FieldGoal();

    /**
    *  Non-Default Constructor
    * Requires: nothing
    * Modifies: FGA and FGM
    * Effects: sets the field goals attempted at/at
    */
    FieldGoal(int at);

    /**
    *  Non-Default Constructor
    * Requires: nothing
    * Modifies: FGA and FGM
    * Effects: sets the field goals attempted at/md
    */
    FieldGoal(int at, int md);

    /**
    *   Desstructor
    * Requires: nothing
    * Modifies: nothing
    * Effects: nothing
    */
    ~FieldGoal();

    /**
     * FGA Setter
     * Requires: nothing
     * Modifies: FGA
     * Effects: sets FGA to at
    */
    void setFGA(int at);

    /**
     * FGM Setter
     * Requires: nothing
     * Modifies: FGM
     * Effects: sets FGM to md
    */
    void setFGM(int md);

    /**
     * FGA Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns FGA
    */
    int getFGA() const;

    /**
     * FGM Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns FGM
    */
    int getFGM() const;

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns FG as Percent
    */
    double getPercent() const;

    /**
     * Overloaded Operator (binary)
     * Friend of the class (not a member)
     * Requires: nothing
     * Modifies: nothing
     * Effects: prints the fg to the ostream
    */
    friend ostream& operator << (ostream& outs,
                                 const FieldGoal &f);

    /**
     * Overloaded Operator (binary)
     * Friend of the class (not a member)
     * Requires: nothing
     * Modifies: nothing
     * Effects: read the Fg in from the istream
    */
    friend istream& operator >> (istream& ins,
                                 FieldGoal &f);

    /**
     * Overloaded Operator (unary)
     * Member of the class (not a friend)
     * Requires: nothing
     * Modifies: nothing
     * Effects: prints the Fg to the ostream
    */
    FieldGoal& operator *= (const FieldGoal &f);


};
#endif //PROJECT2_FIELDGOAL_H

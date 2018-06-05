//
// Created by might on 2/6/2018.
//

#include "FieldGoal.h"


FieldGoal::FieldGoal() {
    FGA=1;
    FGM=1;
}

FieldGoal::FieldGoal(int at) {
    FGA=at;
    FGM=at;
}

FieldGoal::FieldGoal(int at, int md) {
    FGA=at;
    if (md > FGA){
        FGM=at;
    }else{
        setFGM(md);
    }

}

FieldGoal::~FieldGoal() {
    //do nothing
}

void FieldGoal::setFGA(int at) {
    FGA=at;
}

void FieldGoal::setFGM(int md) {
    FGM=md;
}

int FieldGoal::getFGA() const {
    return FGA;
}

int FieldGoal::getFGM() const {
    return FGM;
}

double FieldGoal::getPercent() const {
    return double(FGM)/FGA;
}

ostream& operator << (ostream& outs,
                      const FieldGoal &f) {
    outs << f.FGM << "/" << f.FGA << " = "
         << f.getPercent()*100<<"%";
    return outs;
}

istream& operator >> (istream& ins,
                      FieldGoal &f) {
    // two integers separated by a space
    int at, md;
    ins >> at >> md;
    if (!ins || md > at) {
        cout<<"That is not how this works"<<endl;
        f = FieldGoal();
    } else {
        f.FGA = at;
        f.FGM = md;
    }
    return ins;
}

FieldGoal& FieldGoal::operator *= (const FieldGoal &f) {
    FGA *= f.FGA;
    FGM *= f.FGM;
    return *this;
}

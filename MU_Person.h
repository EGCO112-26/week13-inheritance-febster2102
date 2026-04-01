#include "Thai_person.h"
#pragma once
#include <iostream>
#include <string>
#include "NODE.h"
using namespace std;
class MU_person : public NODE {
protected:
    string name;

public:
    MU_person(long = 112, string = "Prapaporn");
    void display_person();
    ~MU_person();
};

MU_person::MU_person(long x, string n) : NODE(x) {
    name = n;
    cout << "MU person constructor " << data << endl;
    
}
MU_person::~MU_person() {
    //cout << "MU_person Destructor id=" << data << endl;
}
void MU_person::display_person() {
    cout <<"Node data:"<<data<<endl;
}
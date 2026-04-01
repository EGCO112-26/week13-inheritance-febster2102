#include "MU_Person.h"
#pragma once
#include "MU_Person.h"
using namespace std;

class student : public MU_person {
private:
    double gpa; 
  
public:
    student(long = 111, double = 2.5, string = "Nattawut");
    ~student();
    
    void show_node() override; 
};

student::student(long i, double g, string s) : MU_person(i, s) {
    gpa = g;
    cout << "MU student constructor  " << gpa << endl;
}
student::~student() {
   // cout << "student destructor gpa=" << gpa << " -> "; 
}
void student::show_node() {
    
    display_person();
}
#pragma once
#include <iostream>
using namespace std;
using namespace std;
class NODE {
protected: 
    long data; 
    NODE* next;
public:
    NODE(long);
   
    virtual void show_node(); 
    void insert(NODE*&);
    NODE* move_next();
    
    virtual ~NODE(); 
};

NODE::NODE(long x) {
    data = x;
    next = NULL;
    cout << "adding " << x << endl;
   
}
NODE::~NODE() {
    cout << "Node " << data << " is being deleted" << endl;
}
NODE* NODE::move_next() {
    return next;
}
void NODE::show_node(){
    cout<<" Node data: "<< data << endl; 
    
}
void NODE::insert(NODE*& hol) {
    
    this->next = hol; 
    hol = this;
}
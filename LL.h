#pragma once
#include "NODE.h"
class LL {
    NODE* hol; // Head of List 
    int size;
public:
    LL();
    ~LL();
    void add_node(NODE*);
    void show_all();
};

LL::LL() {
    hol = NULL;
    size = 0;
}


LL::~LL() {
    
    NODE* t = hol;
    while (t != NULL) {
        NODE* next_node = t->move_next();
       
        delete t; 
        t = next_node;
    }
}

void LL::add_node(NODE* new_node) {
    new_node->insert(hol); 
    size++;
}


void LL::show_all() {
    
    NODE* t = hol;
    while (t != NULL) {
        
        t->show_node(); 
        t = t->move_next();
    }
}
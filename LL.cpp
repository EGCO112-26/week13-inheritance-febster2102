#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
          NODE* t = hol;
     int i;
     for(i = 0; i < size; i++){
          hol = hol->move_next();
          delete(t); 
          t = hol;
     }
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
                NODE* t = hol;
    
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }
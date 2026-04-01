#include <iostream>
#include <cstdlib>
#include <string>
#include "NODE.h"
#include "MU_Person.h"
#include "student.h"
#include "LL.h" 

using namespace std;

int main(int argc, char* argv[]) {
    LL my_list;

    for (int i = 1; i < argc; i += 3) {
        if (i + 2 < argc) {
            long id = atol(argv[i]);
            double gpa = atof(argv[i+1]);
            string name = argv[i+2];
            my_list.add_node(new student(id, gpa, name));
        }
    }

    
    cout << "\n\n";
    

    my_list.show_all();

    
    cout << "\n\n\n";

    return 0;
}
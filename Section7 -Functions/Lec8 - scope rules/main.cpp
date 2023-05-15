#include <iostream>
#include <vector>
#include <string>

using namespace std;

int num {300}; // global var


void local_example(int x){
    int num {1000};
    cout << "\nLocal num is: " << num << endl;
    num = x;
    cout << "Local num is now: " << num << endl;
}

void global_example(){
    cout << "\nGlobal num is: " << num << endl;
    num *= 2;
    cout << "Global num is now: " << num << endl;
}

void static_local_example(){
    static int num {5000}; // local to this function - retains it value between calls
    cout << "\nLocal static num is: " << num << endl;
    num += 1000;
    cout << "Local static num is now: " << num << endl;
}


int main()
{

    int num {100}; // local to main
    int num1 {500}; // local to main

    cout << "local num is: " << num << " in main" << endl;

    { // creates a new level of scope
        int num {200}; // local to inner block
        cout << "local num is: " << num << "in inner block in main." << endl;
        cout << "Inner block in main can see out- num1 is: " << num1 << endl;
    }

    cout << "local num is: " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();

    return 0;
}



#include <iostream>

using namespace std;

/*
 priority: local > global
*/

int age {18}; // global variable

int main() {

    int num = 21; // local variable
    int age {12}; // local variable

    cout << num << " " << age << endl;

    int room_width; // local variable
    int room_length; // local variable

    cout << "Enter width of the room ";
    cin >> room_width;

    cout << "Enter length of the room ";
    cin >> room_length;

    cout << "Area of the room is " << room_length*room_width << " sq.m" << endl;

    return 0;

}
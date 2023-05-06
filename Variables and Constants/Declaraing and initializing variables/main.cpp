#include <iostream>

using namespace std;

int main() {

    int num = 21;
    int age {12};

    cout << num << " " << age << endl;

    int room_width;
    int room_length;

    cout << "Enter width of the room ";
    cin >> room_width;

    cout << "Enter length of the room ";
    cin >> room_length;

    cout << "Area of the room is " << room_length*room_width << " sq.m" << endl;

    return 0;

}
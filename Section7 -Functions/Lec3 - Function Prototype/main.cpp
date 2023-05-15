#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const double pi {3.14159};

void area_circle();
void volume_cylinder();

int main() {

    area_circle();
    volume_cylinder();
    return 0;
}

void area_circle(){

    double radius {};
    cout << "Enter the radius of circle: ";
    cin >> radius;

    cout << "Area: " << pi * pow(radius, 2) << endl;
}

void volume_cylinder(){
    double radius {}, height {};

    cout << "\nEnter the height and radius of cylinder: ";
    cin >> height >> radius;

    cout << "Volume: " << pi * pow(radius, 2) * height << endl;
}

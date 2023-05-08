#include <iostream>
#include <vector>

using namespace std;


int main() {

    int total;
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter the three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "The 3 numbers are : " << num1 << " " << num2 << " " << num3 << endl;

    total = num1 + num2 + num3;
    cout << "The total is " << total << endl;

    double average {0.0};
    average = static_cast<double>(total)/count; // new c++
    // average = (double)total/count; // old c++

    cout << "The average is " << average;

    return 0;

}
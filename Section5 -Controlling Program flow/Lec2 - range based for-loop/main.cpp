#include <iostream>
#include <vector>

using namespace std;


int main() {

    int scores []{100, 99, 98};

    for(int score: scores){
        cout << score << endl;
    }

    for(auto score: scores){
        cout << score << endl;
    }


    vector <double> temps{87.6, 77.1, 80.0, 72.5};
    double total_temp {};

    for(auto temp: temps)
        total_temp += temp;

    cout << total_temp << endl;


    for(auto p: "Prathamesh")
        cout << p << endl;

}
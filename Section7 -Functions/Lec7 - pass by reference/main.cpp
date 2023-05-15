#include <iostream>
#include <vector>
#include <string>

using namespace std;


void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void print_vector(const vector<int> &v){

    for(auto s: v)
        cout << s << endl;
}

int main()
{
    int x{10}, y{20};
    cout << x << " " << y << endl; // 10 20
    swap(x, y);
    cout << x << " " << y << endl; // 20 10

    vector<int> num {10, 20, 30};
    print_vector(num);

    return 0;
}



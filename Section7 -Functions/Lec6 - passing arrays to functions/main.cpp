#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_array(int arr[], size_t size){
    for(size_t i{0}; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void set_array(int arr[], size_t size, int value){
    for(size_t i{0}; i<size; i++){
        arr[i] = value;
    }
}

void set_array2(const int arr[], size_t size, int value){
    for(size_t i{0}; i<size; i++){
        arr[i] = value;
    }
}

int main()
{
    int score[] {100, 98, 90, 96, 88};

    print_array(score, 5);
    set_array(score, 5, 100);
    // set_array2(score, 5, 101); // throw error due to const keyword
    print_array(score, 5);

    return 0;
}
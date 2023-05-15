#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector <string>);


void print(int num){
    cout << "Printing " << num << endl;
}

void print(double num){
    cout << "Printing " << num << endl;
}

void print(string s){
    cout << "Printing " << s << endl;
}

void print(string s, string t){
    cout << "Printing " << s << " " << t << endl;
}

void print(vector<string> v){
    cout << "Printing vector: ";
    for(auto s:v)
        cout << s + " ";
    cout << endl;
}

int main()
{
    print(100);
    print('A');

    print(123.4);
    print(12.3F);

    string s{"C-style string"};
    print(s);

    vector<string> three {"ssnfne", "efwr", "dequf"};
    print(three);

    return 0;
}
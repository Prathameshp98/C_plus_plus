#include <iostream>
#include <vector>
#include <cctype>

using namespace std;


int main() {

    char letter {'a'};

    cout << isalpha(letter) << endl;
    cout << isalnum(letter) << endl;
    cout << isdigit(letter) << endl;
    cout << islower(letter) << endl;
    cout << isprint(letter) << endl;
    cout << ispunct(letter) << endl;
    cout << isupper(letter) << endl;
    cout << isspace(letter) << endl;

    cout << endl;

    cout << static_cast<char>(tolower('B')) << endl;
    cout << static_cast<char>(toupper(letter)) << endl;

}

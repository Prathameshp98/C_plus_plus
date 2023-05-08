

#include <iostream>

using namespace std;


int main() {

    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel: " << vowels[0] << endl;
    cout << "Last Vowel is: " << vowels[4] << endl;


    double temps[] {90.34, 103.45, 56.89, 9.67, 112.34};
    cout << "\n" << temps[0] << endl;

    temps[0] = 100.00;

    cout << temps[0] << endl;


    int scores[3] {};
    cout << "\nFirst: " << scores[0] << endl;
    cout << "Second: " << scores[1] << endl;
    cout << "Third: " << scores[2] << endl;

    cout << "Enter all 3 scores: ";
    cin >> scores[0];
    cin >> scores[1];
    cin >> scores[2];

    cout << "\nFirst: " << scores[0] << endl;
    cout << "Second: " << scores[1] << endl;
    cout << "Third: " << scores[2] << endl;

    return 0;

}

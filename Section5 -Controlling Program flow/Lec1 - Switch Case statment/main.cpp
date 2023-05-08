#include <iostream>
#include <vector>

using namespace std;


int main() {

    char grade {};

    cout << "Enter the grade that you are expecting: ";
    cin >> grade;

    switch(grade){
        case 'a':
        case 'A':
            cout << "You need 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B, go study" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79 for a Average grade" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm you should strive for a better grade, All you need is 60-69" << endl;
            break;
        case 'f':
        case 'F':
            {
                char confirm {};
                cout << "Are you sure (Y/N) ";
                cin >> confirm;
                if(confirm == 'y' || confirm == 'Y')
                    cout << "Bitch, Are you serious. Get your ass on that study table.";
                else if(confirm == 'n' || confirm == 'N')
                    cout << "Seriously man? What the F" << endl;
                else
                    cout << "Are you high?" << endl;
            }
        default:
            cout << "Are you high?" << endl;
            break;
    }

    /*
    enum Direction {
        left, right, up, down
    };

    Direction heading {left};

    switch(heading){
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        default:
            cout << "OK" << endl;
    }
    
    */



}

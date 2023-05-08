#include <iostream>
#include <string>

using namespace std;


int main() {

    string s1;                      // Empty
    string s2 {"Prathamesh"};       // Prathamesh
    string s3 {s2};                 // Prathamesh
    string s4 {"Prathamesh", 3};    // Pra
    string s5 {s3, 0, 2};           // Pr
    string s6 (3, 'X');             // XXX

    cout << s2[0] << endl;          // P
    cout << s2.at(0) << endl;       // P
    
    for(char c: s2)
        cout << c << endl;
    // P
    // r
    // a
    // ..........

    string part1 {"C++"};
    string part2 {"is a powerful"};
    string sentence;
    sentence = part1 + " " + part2 + " language" // C++ is a powerful language;
    
    
    string s11 {"Apple"};
    string s12 {"Banana"};
    string s13 {"Kiwi"};
    string s14 {"apple"};
    string s15 {s1};
    
    s11 == s15              // True
    s11 == s12              // False
    s11 != s12              // True
    s11 < s12               // True
    s12 > s11               // True
    s14 < s15               // False
    s1 == "Apple"           // True
    
    
    string s1 {"This is a test"};
    cout << s1.substr(0,4);     // This
    cout << s1.substr(5,2);     // is
    cout << s1.substr(10,4);    // test 
    
    
    cout << s1.find("This");     // 0
    cout << s1.find("is");       // 2
    cout << s1.find("test");     // 10
    cout << s1.find('e');        // 11
    cout << s1.find("is", 4);    // 5
    cout << s1.find("XX")        // string::npos   
    
    
    cout << s1.erase(0,5)       // is a test
    cout << s1.erase(5,4)       // is a
    cout << s1.clear()          // empty string
    
    
    string s1 {"Prathamesh"};
    cout << s1.length() << endl;    // 10
    
    s1 += " Patil";
    cout << s1 << endl;     // Prathamesh Patil
    
    
    string s1;
    cin >> s1   // only accepts up to first space
    
    getline(cin, s1); // Reads entire line until \n
    
    getline(cin, s1, 'x'); // reads upto 'x'
    


}

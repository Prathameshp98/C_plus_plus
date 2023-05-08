#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<int> nums {};
    char choice {};

    do{
        cout << "Please select any of the following choice: " << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display average of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "-------------------------------------------" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice){
            case 'P':
            case 'p':
                {
                    cout << "All numbers are: ";
                    for(auto num: nums){
                        cout << num << " ";
                    }
                    cout << endl;
                    break;
                }

            case 'A':
            case 'a':
                {
                    int num {};
                    cout << "Enter number you want to add: ";
                    cin >> num;
                    nums.push_back(num);
                    break;
                }

            case 'M':
            case 'm':
                {
                    cout << "Average of all numbers is: ";
                    int mean{}, total{};
                    for(auto num: nums){
                        total += num;
                    }
                    cout << total/nums.size() << endl;
                    break;
                }

            case 'S':
            case 's':
                {
                    cout << "Smallest number is: ";
                    int smallest {9999999};
                    for(auto num: nums){
                        if(num < smallest){
                            smallest = num;
                        }
                    }
                    cout << smallest << endl;
                    break;
                }

            case 'L':
            case 'l':
                {
                    cout << "Largest number is: ";
                    int largest {-9999999};
                    for(auto num: nums){
                        if(num > largest){
                            largest = num;
                        }
                    }
                    cout << largest << endl;
                    break;
                }

            default:
                cout << "Invalid choice, please try again!" << endl;
        }

        cout << endl;

    } while(choice != 'q' && choice != 'Q');
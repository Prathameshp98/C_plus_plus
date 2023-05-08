#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector <int> test_scores {100, 98, 99, 75, 85};

    cout << "First element: " << test_scores[0] << endl;
    cout << "Second element: " << test_scores.at(1) << endl;

    test_scores.at(0) = 35;

    cout << "\nFirst element: " << test_scores[0] << endl;

    test_scores.push_back(80);
    test_scores.push_back(90); // pushes element at end of vector

    cout << "\nSize of test_scores: " << test_scores.size() << endl;

    cout << "\nUpdate the fourth element: ";
    cin >> test_scores.at(3);
    cout << "Fourth element: " << test_scores.at(3) << endl;


    vector <vector<int>> movie_ratings
    {
        {0, 4, 3, 5},
        {0, 1, 3, 3},
        {2, 4, 2, 5}
    };

    cout << "\nSome movie ratings:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings.at(1).at(2) << endl;


    return 0;

}
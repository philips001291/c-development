#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector2.push_back(20);

    cout << vector1.at(0) << endl;
    cout << vector2.at(0) << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(1) << endl;
    cout << vector2.at(2) << endl;

    vector<vector<int>> vector2d;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    // ...existing code...
    cout << vector2d.at(0).at(0) << endl; // First element of vector1: 10

    cout << vector2d.at(1).at(0) << endl; // First element of vector2: 20
    cout << vector2d.at(1).at(1) << endl; // Second element of vector2: 100
    cout << vector2d.at(1).at(2) << endl; // Third element of vector2: 200

    vector1.at(0) = 1000;
}
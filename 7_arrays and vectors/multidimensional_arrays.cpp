#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vector<char> vowels;
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0]<<endl;
    cout << vowels[4]<<endl;

    vector<int> test_scores {100, 98, 89};

    cout << test_scores.at(0)<<endl;
    cout << test_scores.at(1)<<endl;
    cout << test_scores.at(2) <<endl;
    int score_to_add;
    cin >> score_to_add;
    test_scores.push_back(score_to_add);


    cout << test_scores.at(3) <<endl;

    vector <vector<int>> movie_ratings{
        {1,2,3,4},
        {1,2,3,4},
        {1,3,4,5}
    };

    cout<<movie_ratings[0][1]<<endl;
}
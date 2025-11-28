#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int score{100};
    int *score_ptr{&score};

    cout << *score_ptr << endl;

    *score_ptr = 200;

    cout << *score_ptr << endl;
    cout << score << endl;

    string name{"Frank"};
    string *string_ptr{&name};

    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;

    vector <string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    cout <<"First stooge:" << (*vector_ptr).at(0) << endl;

    for( auto stooge: *vector_ptr)
        cout <<stooge<< " ";
    cout<<endl;

    return 0;
}
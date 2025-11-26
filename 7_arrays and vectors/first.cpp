#include <iostream>

using namespace std;

int main(){


    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout<< "The first vowel is: "<<vowels[0]<<endl;
    cout<<"The last vowel is: "<< vowels[4]<<endl;

    cin>>vowels[5];

    double hi_temps[] {90.1, 98.2, 1.2};
    cout<<"The first element is:"<<hi_temps[0]<<endl;

    hi_temps[0]=22;
    cout<<"The first element is:"<<hi_temps[0]<<endl;
}
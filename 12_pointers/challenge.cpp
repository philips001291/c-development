#include <iostream>
#include <vector>
#include <string>

using namespace std;
int *apply_all(int *ptr_array1, size_t size1, int *ptr_array2, size_t size2)
{
    int *result = new int[size1 + size2];
    int index = 0;
    
    for (size_t i = 0; i < size1; i++)
    {
        for (size_t j = 0; j < size2; j++)
        {
            result[index] = ptr_array1[i] * ptr_array2[j];
            index++;
        }
    }
    
    return result;
}

void print(int *array, size_t size){
    cout << "[ ";
    for (size_t i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}
int main()
{
    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    cout << "Array 1:";
    // print()
    int *results = apply_all(array1, 5, array2, 3);
    print(results, 15);  // size1 * size2 = 5 * 3 = 15
    
    delete[] results; 
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {0, 1, 2};

    cout << arr[0] << endl;
    cout << arr << endl; //|_Same as below
    cout << &arr << endl;//|
    cout << &(*arr) << endl;
    cout << *arr << endl;
    cout << *(&arr[0]) << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i = 99;
    int *ptr_i;
    ptr_i = &i;
    cout << *ptr_i << endl;
//////////////////////// dynamic array creation(during runtime)
    int *foo;
    foo = new int[i];
    //foo = new (nothrow) int [9];
////////////////////////
    foo[0] = i;

    cout << *(foo) << endl;
    delete[] foo;
    cout << foo[0] << endl; //gives the value of the pointer.

    return 0;
}



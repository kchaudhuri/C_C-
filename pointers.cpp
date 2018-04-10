#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int *ptr;
    ptr = &i;
    //int *ptr{&i}; //only possible with c++11
    cout << *ptr << endl; //dereferencing the pointer
    return 0;

}

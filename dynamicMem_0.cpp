#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int;

    *ptr = 10;
    cout << *ptr << endl;
    cout << ptr[0] << endl;
    delete ptr;

    int x = 10;
    int *ptr0 = new int[x];

    *ptr0 = 22;
    cout << ptr0[0] << endl;

    delete [] ptr0;

    return 0;
}

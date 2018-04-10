#include <iostream>
using namespace std;

void swap(int a, int b)
{
    b = b + a;
    a = b - a;
    b = b - a;
    cout << "a = " << a << " b = " << b << " after swap." << endl;
}

int main()
{
    int a = 3;
    int b = 2;
    cout << "a = " << a << " b = " << b << " before swap." << endl;
    swap(a,b);
    return 0;
}

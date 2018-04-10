#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int &ar = a;
    ar ++;
    cout << ar << a << endl;
    return 0;
}

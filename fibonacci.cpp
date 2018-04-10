#include <iostream>
using namespace std;

void fib(int lim)
{
    int i, a = 0, b = 1, c;
    cout << a << endl;
    cout << b << endl;
    for(i=2;i<lim;i++)
    {
        c = b;
        b = a + b;
        a = c;
        cout << b << endl;
    }
}

int main()
{
    int num = 10;
    cout << "enter the length of the series.. " << endl;
    cin >> num;
    fib(num);
    return 0;
}

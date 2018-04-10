#include<iostream>
using namespace std;

int main()
{
    int a = 123;
    int *ap = &a;
    int **app = &ap;
    cout << ++app << endl;
    return 0;
}

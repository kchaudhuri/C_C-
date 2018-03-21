#include <iostream>
using namespace std;

int main()
{
    char *a = "bob";
    cout << a << "." << endl; //prints char string from pointer a[0]
    a = "tim"; //appends after the existing char string eg. bob_tim_
    cout << a << "." << endl;

    int i[2] = {1,2};
    cout << i; //prints address
    cout << i[0]; //prints only iteratively


    return 0;
}

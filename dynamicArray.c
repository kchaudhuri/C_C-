#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    cin >> num;
    int *a = new int[num];
    for(int i=0;i<num;i++)
    {
        cin >> *a;
        a++;
    }
    for(int i=0;i<num;i++)
    {
        a--;
        cout << *a << ' ';
    }
    return 0;
}

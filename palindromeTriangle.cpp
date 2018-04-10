#include <iostream>
using namespace std;

void pal(int lim)
{
    int i, j, k, a = 0, b = 1, c;
    for(i=1;i<=lim;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j == 1)
            {
                for(k=1;k<=lim-i;k++)
                {
                    cout << "  ";
                }
            }
            cout << j << " ";
        }
        for(j=i-1;j>=1;j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int num = 10;
    cout << "enter the length of the series.. " << endl;
    cin >> num;
    pal(num);
    return 0;
}

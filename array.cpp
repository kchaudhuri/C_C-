#include <iostream>
using namespace std;

int arrayFunc(int arr[], int arrSize)
{
    int i,j,k;
    int sum = 0, finalSum = 0;
    int ul,ll;

    for(k=0;k<arrSize;k++)  // position of the substring
    {
        for(i=0;i<arrSize-k;i++) // size of the substring
        {
            for(j=k;j<=i+k;j++) // incrementer of the substring
            {
                sum+=arr[j];
                //cout << " --- " << j << endl;
                if ((k==0) && (i==0) && (j==0))
                {
                    finalSum = sum;

                }
            }
            //cout << "the sum is " << sum << endl;
            if(finalSum <= sum)
            {
                finalSum = sum;
                ll = k;
                ul = i+k;
            }
            sum = 0;
        }
    }
    cout << "lower limit - " << ll << " upper limit - " << ul << endl;
    return finalSum;
}

int main()
{
        int numbers[] = {-2, -9, -87, 0, -87 , -3, -12, -1, -77, -30};
        cout << "sum " << arrayFunc(numbers , (sizeof(numbers)/4));
        return 0;
}


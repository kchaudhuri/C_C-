#include <iostream>
#include <string>

using namespace std;

int main()
{
    char who[] = "who are you?";
    string how = "How are you doing?";

    char whoans[20];
    string howans;

    cout << who;
    cin >> whoans;

    cout << how;
    cin >> howans;

    cout << "hi " << whoans << " its good to know that you are doing " << howans << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Simple
{
    public:
        int a;
};

int main()
{
    Simple obj;
    Simple *ptr;
    ptr = &obj;

    cout << "object - " << obj.a << endl;
    cout << "ptr - " << ptr->a;
    return 0;
}

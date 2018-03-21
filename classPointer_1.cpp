#include <iostream>
using namespace std;

class Data
{
    public:
        int a;

        void print()
        {
            cout << "the value of a is" << a << endl;
        }

};

int main()
{
    Data obj, *dptr;
    dptr = &obj;

    int Data::*ptr = &Data::a;

    obj.*ptr = 10;
    obj.print();

    dptr->*ptr=20;
    dptr->print();

    return 0;
}

#include <iostream>
using namespace std;

class Base
{
    public:
        void show()
        {
            cout << "base" << endl;
        }
};

class Derived: public Base
{
    public:
        void show()
        {
            cout << "derived" << endl;
        }
};

int main()
{
    Base *bp = new Derived;
    bp -> show();
    return 0;

}

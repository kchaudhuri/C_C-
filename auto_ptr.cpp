#include <iostream>
#include <memory>
using namespace std;
class Test
{
public:
    Test(int a = 0 ) : m_a(a)
    {}
    ~Test( )
    {
        cout<<"Calling destructor"<<endl;
    }
public:
    int m_a;
};

int main( )
{
    std::auto_ptr<Test> p( new Test(5) );
    cout<<p->m_a<<endl;
    return 0;
}

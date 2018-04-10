#include <iostream>
using namespace std;

#define NAME_SIZE 50

class Person //abstract class because this class contains a pure virtual function
{
    int id;
    char name[NAME_SIZE];

public:
    virtual void aboutMe()  // virtual
    {
        cout<<"I am a person" << endl;
    }
    virtual bool addcourse(string s)=0;  //pure virtual
    virtual ~Person() //to clean up all the functions connected to this function (inheritance)
    {
        cout << "deleting person." << endl;
    }
};

class Student : public Person
{
public:
    void aboutMe()
    {
        cout << "I am a student" << endl;
    }
    virtual bool addcourse(string s)
    {
        cout << "added course - " << s << endl;
    }
    ~Student()
    {
        cout << "deleting student." << endl;
    }
};

int main()
{

    Person *p = new Student();
    p->aboutMe();
    p->addcourse("history");
    delete p;
    return 0;
}

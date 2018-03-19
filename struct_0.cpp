#include <iostream>
using namespace std;
int main()
{
    struct car{
    int id;
    char model;
    };
    car volvo, audi;

    volvo.id = 123;
    audi.id = 456;

    volvo.model = 's';
    audi.model = 'r';

    cout << volvo.id << " - " << volvo.model << endl;
    cout << audi.id << " - " << audi.model << endl;

    return 0;
}

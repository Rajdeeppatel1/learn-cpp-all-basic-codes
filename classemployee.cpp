// program of class and object fof employee detail
/*Class: A class is like a blueprint  that defines the structure and behavior of objects.
 It contains data members (variables) and member functions (methods) that operate on the data
*/
#include <iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name ,desig;
    double salary;
    void setemp()
    {
        cout <<"enteremployee detail";
        cin >>id >>name>>desig>>salary;
    }
    void getemp()
    {
        cout<<"id is = "<<id<<endl;
    cout<< "name is ="<<name<<endl;
    cout<<"desig is = "<<desig<<endl;
    cout<<"salary is = "<<salary;
    }
    
};
int main ()
{
    employee e;
    e.setemp();
    e.getemp();
    return 0;
}

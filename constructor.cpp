/* constructor is a member function which is used to initialiize data member that is variable of a class 
its name is same as class name 
no return type
automatically created when object of class is created*/



#include <iostream>
using namespace std;
class raj
{
    public:
    int x;
    raj()
    {
        x=10;
    }
     void getraj()
     {
        cout<<x;
     }

    };
 int main ()
{
    raj R;

    R.getraj();
    return 0;
}
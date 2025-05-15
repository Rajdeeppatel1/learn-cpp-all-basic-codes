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
#include <iostream>
using namespace std;
class A
{
    public:
    int p1=2;
    int p2=3;

};
class B: public A
{
    public:
    int p3=12;
}; 
int main(){
    B b;
    b.p1;
    b.p2;
    b.p3;
    cout<<b.p1<<b.p2<<b.p3<<endl;
}
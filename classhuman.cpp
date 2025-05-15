// class object program on data of human
#include <iostream>
using namespace std;
class human
{
    public:
    double height;
    string name , cast;
    int  weight;
     void sethuman(){
         cout<<"enter human data";
         cin>>height>>name>>cast>>weight;
     }
     void gethuman()
     {
         cout<<"the height is"<<height<<endl;
         cout<<"the name is "<<name<<endl;
         cout<<"the cast is"<<cast<<endl;
         cout<<"the weight is"<<weight<<endl;
     }
    
};
int main(){
    human h;
    h.sethuman();
   h.gethuman();

    

    return 0;
}
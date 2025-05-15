#include <iostream>
using namespace std;
class time
{
    public:
    int hh,mm,ss;
    time(int hh,int mm ,int ss){
    this->hh=hh;
    this->mm=mm;
    this->ss=ss;

    }

~time()
{
    cout<<"destROy";
}
void showtime()
{
    cout<< hh << ":" << mm << ":" << ss ;

}};

int main(){
    time t(2,3,4);
    t.showtime();
return 0;
}

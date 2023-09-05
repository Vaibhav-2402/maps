#include<iostream>
using namespace std;
void starline();
int main()
{
    starline();
    cout<<endl<<"Data Type    Range"<<endl;
    starline();
    cout<<endl<<" char      -128 to 127"<<endl
        <<" short     -32768 to 32767"<<endl
        <<" int       system dependent "<<endl;
    starline();     
    return 0;
}
void starline()
{
    for(int i=1;i<=45;i++)
    cout<<"*";
}
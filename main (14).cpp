#include<iostream>
using namespace std;
int main()
{
    float wage;
    int age;
    string name,serial;
    cout<<"welcome to the tax calcuolator\n";
    cout<<"please enter your age:\n";
    cin>>age;
    if(age<=22||age>=60){cout<<"free taxes";}
    else{
    cout<<"please enter your name:\n";
    cin>>name;
    cout<<"please enter your serial no.:\n";
    cin>>serial;
    cout<<"please enter your anual wage (in egp and thouthands):\n";
    cin>>wage;
    int variable=wage;
    variable /=10;
    if (variable<2){cout<<"free taxes";}
    switch(variable){
        case 2:cout<<"free tax";
        break;
        case 3:cout<<"your taxes="<<wage/12<<"k"<<endl;
        break;
        case 4:cout<<"your taxes="<<wage/10<<"k"<<endl;
        break;
        case 5:cout<<"your taxes ="<<wage/8<<"k"<<endl;
        break;
    }
    if (variable>50){cout<<"your taxes="<<wage/6<<"k";}}
return 0; }
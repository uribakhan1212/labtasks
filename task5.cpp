#include<iostream>
using namespace std;
int main()
{
float classes, attended, attendance;
cout<<"Enter total classes scheduled:";
cin>>classes;
cout<<"Enter total classes attented:";
cin>>attended;
attendance=(attended/classes)*100;
cout<<"Your attendance is:"<<attendance<<"%";
if(attendance>=85)
{
cout<<"You are allowed to sit in the class.";
}
else
{
cout<<"You are not allowed to sit in the class.";
}
return 0;
}


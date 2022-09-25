#include<iostream>
using namespace std;
int main()
{
int temp;
bool jacket;
cout<< "Enter the value of temperature:";
cin>>temp;
if(temp<=0)
{
jacket=true;
cout<<jacket;
}
else
{
jacket=false;
cout<<jacket;
}
return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float v, G=980, M, r;
cout<<"Enter the values of mass and radius:";
cin>>M>>r;
v=sqrt((2*G*M)/r);
cout<<"Value of escape velocity is:"<<v;
return 0;
}


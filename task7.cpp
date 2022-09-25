#include<iostream>
using namespace std;
int main()
{
int total_purchase, final_value;
float discounted_val;
cout<<"Please enter your total purchase value:";
cin>>total_purchase;
if(total_purchase>2000)
{
cout<<"Discount is applicable.";
discounted_val=(total_purchase*10)/100;
final_value=total_purchase-discounted_val;
cout<<"\nThe total purchase value after discount is:"<<final_value;
}
else
{
cout<<"Discount is not applicable on amount less than 2000.";
cout<<"\nThe total purchase value after discount is:"<<total_purchase;
}
return 0;
}



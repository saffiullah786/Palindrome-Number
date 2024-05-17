#include<iostream>
using namespace std;
int main()
{
int rev=0,i,rem,b,c;
int a;
cout<<"Enter a number to find palindrome "<<endl;
cin>>a;
b=a;
for(;a!=0;a=a/10)
{

rem=a%10;
rev=(rev*10)+rem;


}
if (rev==b)
{
cout<<"Number is palindrome  "<<rev;
}
else
cout<<"Number is not palindrome "<<rev;
}

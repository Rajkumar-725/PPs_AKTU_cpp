/*
WAP that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate
of Interest and Time are entered through the keyboard.
*/


#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    float principal_amount, rate, time, si, ci;
    cout<<"Enter principle_amount, rate, time \n";
    cin>>principal_amount>>rate>>time;
    si = (principal_amount*time*rate)/100;
    ci = principal_amount* (pow((1 + rate / 100), time));
    cout<<"Simple Interest is " << si;
    cout<<endl;
    cout<<"Compound Interest is " << ci;

    return 0;
}

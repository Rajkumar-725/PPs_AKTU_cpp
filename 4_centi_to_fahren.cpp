/*
WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-
32)/9.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int centi=0, fahren=0;
    cout<<"Enter temp in centigrade \n";
    cin>>centi;
    fahren = (9*centi)/5 + 32;
    cout<<"Temp in Fahrenheit is "<<fahren;

    return 0;
}

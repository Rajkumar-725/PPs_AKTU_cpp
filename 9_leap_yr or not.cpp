//WAP that tells whether a given year is a leap year or not.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter year to check leap yr or not \n";
    cin >> yr;
    if( yr%4==0  && yr%100!=0  || yr%400==0 )
    cout<<"This is leap year";

    else
    cout<< "Not a leap year";

    return 0;

}

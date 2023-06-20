//WAP to calculate the area and circumference of a circle.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rad, area=0, circum=0;
    cout<<"Enter radius of circle \n";
    cin>>rad;
    area = (3.14*rad*rad);
    circum = 2 * 3.14 * rad;
    cout<<"Area of circle is "<<area <<endl<< "Circumference is "<<circum;
}

//WAP to find the greatest of three numbers.


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers to check greatest \n";
    cin>> a >> b >> c;
    if(a>b && a>c)
    cout<<"Greatest is "<< a;

     if(b>a && b>c)
    cout<<"Greatest is "<< b;

     if(c>a && c>b)
    cout<<"Greatest is "<< c;
    
    return 0;
}

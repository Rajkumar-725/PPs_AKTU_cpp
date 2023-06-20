//WAP that swaps values of two variables using a third variable.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp=0;
    cout<<"Enter two variable \n";
    cin>>a>>b;
    cout<<"Value before swapping \n"<<"a "<<a <<endl<< "b "<<b;
    cout<<endl<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"Value after swapping \n"<<"a "<<a <<endl<< "b "<<b;

    return 0;
}

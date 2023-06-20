/*
WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained
by the student.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int students[5];
    float sum=0, percentage=0;
    cout<<"Enter marks of 5 students \n";
    for (int i = 0; i < 5; i++)
    {
        cin>>students[i];
        sum+=students[i];
    }
    cout<<"Total marks is "<<sum<<endl;
    percentage=(sum/500)*100;
    cout<<"Percentage is "<<percentage<<"%";
}

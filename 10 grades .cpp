/*
WAP that accepts marks of five subjects and finds percentage and prints grades according to the following
criteria:
Between 90-100%--------------Print ‘A’
80-90%----------------------------Print ‘B’
60-80%---------------------------Print ‘C’
Below 60%----------------------Print ‘D’
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    float marks[5], sum=0, percentage=0;
    cout<<"Enter five subject marks to find grades \n";

    //for taking i/o
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum+=marks[i];
    }

    percentage = (sum/500)*100;
    cout << "your percentage is "<<percentage<<"%";
    cout<<endl;

    if(percentage>=90 && percentage<=100)
    cout<<"Grade A";

    if(percentage>=80 && percentage<90)
    cout<<"Grade B";

    if(percentage>=60 && percentage<80)
    cout<<"Grade C";

    if(percentage<60)
    cout<<"Grade D";
    
    return 0;

}

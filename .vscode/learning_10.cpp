# include<iostream>
using namespace std;

int main()
{
    long long input_time;
    int days,hours,minutes,seconds;
    cout<<"Enter the number of second: ";
    cin>>input_time;
    days=input_time/60/24/60;
    hours=input_time/60/60-days*24;
    minutes=input_time/60-days*24*60-hours*60;
    seconds=input_time-days*24*60*60-hours*60*60-minutes*60;
    cout<<input_time<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds";
    return 0;
}

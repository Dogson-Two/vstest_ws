# include<iostream>
using namespace std;
double tem_change(double tem)
{
    tem=tem*1.8+32;
    return tem;
}


int main()
{
    double tem_h,tem_s;
    cout<<"Please enter a Celsius value: ";
    cin>>tem_s;
    tem_h = tem_change(tem_s);
    cout<<tem_s<<" degrees Celsius is "<<tem_h<<" degrees Fahewheit";
    return 0;
}

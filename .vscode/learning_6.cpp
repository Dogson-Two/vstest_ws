# include<iostream>
using namespace std;
double x_change(double x)
{
    x=x*63240;
    return x;
}


int main()
{
    double h_year,x;
    cout<<"Enter the number of light years: ";
    cin>>h_year;
    x = x_change(h_year);
    cout<<h_year<<" light years = "<<x<<" astromical units.";
    return 0;
}

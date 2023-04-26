# include<iostream>
using namespace std;

int main()
{
    double degree,minutes,second;
    cout <<"Enter a latitude in degree, minutes, and second"<<endl;
    cout <<"First, enter the degrees: ";
    cin >> degree;
    cout <<"Next, enter the minutes of arc: ";
    cin >> minutes;
    cout <<"Next, enter the second of arc: ";
    cin >> second;
    cout << degree <<" degrees, " << minutes << " minutes, " << second <<" second = " << degree + minutes/60 + second/3600 <<" degrees";
 
    return 0;
}

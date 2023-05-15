# include<iostream>
using namespace std;

int main()
{
    long long all_human,am_human;
    double q;
    cout << "Enter the world's population: ";
    cin >> all_human;
    cout << "Enter the population of the US: ";
    cin >> am_human;
    q=am_human*100.00000/all_human;
    cout << "The population of the US is "<<q<<"%"<<" of the world population";
    return 0;
}

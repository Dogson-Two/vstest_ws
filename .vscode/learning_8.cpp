# include<iostream>
using namespace std;

int main()
{
    double tall_1,tall_2,weight,tall_3,weight_1;
    cout<<"英尺：";
    cin>>tall_1;
    cout<<"英寸:";
    cin>>tall_2;
    cout<<"重量:";
    cin>>weight;
    cout<<"你的身高为："<<tall_1*12+tall_2;
    tall_3=(tall_1*12+tall_2)*0.0245;
    weight_1=2.2*weight;
    cout<<"你的BMI指数为"<<tall_3/weight_1*weight_1;

    return 0;
}

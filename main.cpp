#include <iostream>

using namespace std;

int main()
{
    cout<< "@@@...Program To Find The Average Speed...@@@\n" <<endl;
    float averageDistance;
    float averageTime;
    float averageSpeed;
    cout<<"Average Distance?" <<endl;
    cin>>averageDistance;
    cout<<"Average Time?" <<endl;
    cin>>averageTime;
    averageSpeed = averageDistance/averageTime;
    cout<<"Your Average Speed Is: "<<averageSpeed<<"m/s" <<endl;
    return 0;
}

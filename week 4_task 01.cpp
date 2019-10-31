#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if (a>99 && a<1000)
    {
        int j = a%10;
        int k = (a/10)%10;
        int l = a/100;
        int sum = j*k*l;
        if (sum>99 && sum<1000)
            {cout<<"yes "<<sum - j - k - l<<endl;

    }
    else
    {
        cout<<"no "<< sum<<endl;
    }}
    else
    {
        cout<<"invalid input"<<endl;
    }

return 0;
}

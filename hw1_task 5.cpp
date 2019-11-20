#include <iostream>

using namespace std;

int main()
{
    int start = 1;
    int finish = 2;
    int sum1 = 0;
    int counter = 0;

    cout<<"Enter 2 whole numbers to define the range: ";
    cin>>start>>finish;
    bool IsPrime = true;

    while (start>finish)
    {
        cout<<"Invalid range. Try again."<<endl;
        cin>>start>>finish;

    }

    for(int i = start; i < finish; i++)
    {
        for (int j = 1; j < i/2 ; j++)
        {
            if (i%j == 0)
            {
                sum1+=j;

            }

        }
        for(int k = 2; k<= sum1 / 2; k++)
        {
            if(sum1%k == 0)
            {
                IsPrime = false;
                break;
            }

        }
            if (IsPrime)
            {
                counter++;
            }

        }
        cout<<"There are "<<counter<<" numbers in the range whose sum of the divisors is a prime number"<<endl;





    return 0;
}

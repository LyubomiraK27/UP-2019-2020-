#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int first = 0;
    int second = 1;
    int next = 0;
    int n;

    cout<<"Enter a number as close as possible to the Fibonacci series: ";
    cin>>n;



   do
   {
    next = first + second;

    first = second;
    second= next;

   }

   while(next<n);


    if (abs(n-first)<abs(n-next))
    {
        cout<<first<<endl;
    }
    else
    {
        cout<<next<<endl;
    }




    return 0;
}

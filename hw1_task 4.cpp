#include <iostream>

using namespace std;


//task 4
int main()
{
    int n=1;
    cout<<"Beginning of the sequence: ";
    cin>>n;
    int counter = 0;

    if (n<0){
        cout<<"Invalid input."<<endl;
    }

    for(int i = n; n > 1; i--)
    {
        if(n%2==0)
        {
            n/=2;
        }

        else if(n%2==1)
        {
            n=3*n+1;
        }


        cout<<n<<endl;
        counter++;
    }
    cout<<"elements of the sequence: "<<counter + 1<<endl;
    cout<<"The number 999 999 has the most elements in its sequence"<<endl;

    return 0;
}

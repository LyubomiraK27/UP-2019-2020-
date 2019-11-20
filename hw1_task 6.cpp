#include <iostream>
#include <cmath>

using namespace std;


//task 6

int main()
{

    int number = 0;
    int sum_of_digits = 1;
    int counter = 0;
    int temp_numb1 = 0;

    cout<<"Enter any natural number: ";
    cin>>number;

    temp_numb1 = number;

    while(temp_numb1>0)
    {
        temp_numb1/=10;
        counter++;
    }

    temp_numb1 = number;

    while(temp_numb1 > 0)
    {
        sum_of_digits += pow((temp_numb1%10), counter);
       // cout<<"pow: "<<pow((temp_numb1%10), counter)<<endl;
       // cout<<sum_of_digits<<endl;

        temp_numb1/=10;
    }
    cout<<sum_of_digits<<endl;

    if (sum_of_digits == number)
    {
        cout<<"Narcissistic number"<<endl;

    }
    else
    {
        cout<<"Not a narcissistic number"<<endl;
    }

    return 0;
}




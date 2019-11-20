#include <iostream>
#include<cmath>
using namespace std;


//task 7
int main()
{

    int number = 0;
    int reversed = 0;
    int remainder = 0;
    cout<<"Enter a number from 10 to 30000: ";
    cin>>number;
    int temp_number = number;

    while (number > 30000 || number < 10){
        cout<<"Invalid input. Try again"<<endl;
        cin>>number;
    }

    while (temp_number>0){
       remainder =temp_number % 10;
       reversed = reversed*10 + remainder;
       temp_number/=10;
    }
    cout<<reversed<<endl;

    if (reversed == number){
    cout<<"Is a palindrome"<<endl;
    }
    else{
        cout<<"Is not a palindrome"<<endl;
    }

    return 0;
}

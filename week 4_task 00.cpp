#include <iostream>

using namespace std;

int main()
{
   int num;
   cout<<"Enter a number from 5 to 20: ";
   cin>>num;
   bool checker = num%2;
   switch (checker)
   {
   case true:
    cout<<"odd"<<endl;
    break;
   case false:
    cout<<"even"<<endl;
    break;
   }



}

#include <iostream>

using namespace std;

int main()
{
   int counter = 0;
   int temp_number;
   for(int i = 0; i<10; i++)
   {
       cin>>temp_number;
       if(temp_number % 2 == 0)
            continue;
    counter++;
   }
   cout<<"Odd numbers are: "<<counter<<endl;


    return 0;
}

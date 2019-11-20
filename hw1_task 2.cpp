#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()

{
    //task 2
    int Secret_number;
    int Guessed_number;
    int counter = 0;

    srand(time(NULL));

    Secret_number = rand() % 1000 + 100;
    cout<<"Guess a number between 100 and 1000: ";
    cin>>Guessed_number;


    while (Guessed_number != Secret_number)
    {


        if (Guessed_number > Secret_number)
        {
            cout<<"Wrong number! Try a smaller one."<<endl;

        }
        else if (Guessed_number < Secret_number)
        {
            cout<<"Wrong number! Try a larger one."<<endl;
        }
        cin>>Guessed_number;
        counter++;
    }
    cout<<"Well done! You guessed the number after the "<<counter<<" attempt!"<<endl;


    return 0;
}

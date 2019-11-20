#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //task 1


    int circle_X1 = -2;
    int circle_Y1 = 0;
    int circle_X2 = 1;
    int circle_Y2 = 1;
    int point_X, point_Y;
    int r1 = 2;
    double r2 = sqrt(5);


    cout<<"Define the coordinates of the point: ";
    cin>>point_X>>point_Y;

    if (abs(point_X - circle_X1) <=r1 && abs(point_Y - circle_Y1)<=r1)
    {
        cout<<"The point lies within circle 1."<<endl;
    }

    else if (abs(point_X - circle_X2) <=r2 && abs(point_Y - circle_Y2)<=r2)
    {
        cout<<"The point lies within circle 2."<<endl;
    }

    else
    {
        cout<<"The point is located beyond the surface of both circles."<<endl;
    }







    return 0;
}

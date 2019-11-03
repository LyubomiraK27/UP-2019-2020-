#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int ai=1;
    cout<<"Insert the count of the first n members calculated with the formula (ai = i^2 + 3i): ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        ai = pow(i, 2) + 3*i;
        cout<<ai<<endl;
    }

    return 0;
}

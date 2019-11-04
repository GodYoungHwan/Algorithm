#include <iostream>

using namespace std;

int main()
{
    int A,B,sol;

    cin >> A >> B;
    sol = 0;

    for(int i = A; i<=B; i++)
    {
        if(i == B )
        {
            sol += i;
            cout << i << " = " << sol;
        }
        else
        {
            cout << i << " + ";
            sol += i;
        }

    }
}
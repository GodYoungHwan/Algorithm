#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr1 = new int[n];
    int *arr2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == arr1[i])
        {
            cout << "D" << endl;
            continue;
        }
        if (arr1[i] == 1)
        {
            if (arr2[i] == 2)
                cout << "B" << endl;
            if (arr2[i] == 3)
                cout << "A" << endl;
        }
        if (arr1[i] == 2)
        {
            if (arr2[i] == 3)
                cout << "B" << endl;
            if (arr2[i] == 1)
                cout << "A" << endl;
        }
        if (arr1[i] == 3)
        {
            if (arr2[i] == 1)
                cout << "B" << endl;
            if (arr2[i] == 2)
                cout << "A" << endl;
        }
    }
}
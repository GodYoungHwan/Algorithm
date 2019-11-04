#include <iostream>

using namespace std;

// int main()
// {
//     string a, b;
//     int cnt;
//     cin >> a >> b;
//     cnt = a.size();
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         for (int j = 0; b[j] != '\0'; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 b[j] = '$';
//                 cnt--;
//             }
//         }
//     }

//     if(cnt==0) cout << "YES";
//     else cout << "NO";
// }

int main()
{
    string a, b;
    cin >> a >> b;
    int arr[53] = {
        0,
    };
    int arr2[53] = {
        0,
    };

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            arr[a[i] - 64]++;
        }
        else
        {
            arr[a[i] - 70]++;
        }
    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] >= 65 && b[i] <= 90)
        {
            arr2[b[i] - 64]++;
        }
        else
        {
            arr2[b[i] - 70]++;
        }
    }

    for (int i = 1; i <= 52; i++)
    {
        if (arr[i] != arr2[i])
        {
            cout << "NO";
            exit(0);
        }
    }

    cout << "YES";
}
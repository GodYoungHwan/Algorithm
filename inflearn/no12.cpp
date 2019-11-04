#include <iostream>

using namespace std;

int main()
{
    int n, a = 1, b = 9, res =0 , sum = 0;
    cin >>n;
    while (sum+b<n)
    {
        res = res+(a*b);
        sum = sum+b;
        a++;
        b = b*10;
    }

    res += a*(n-sum);

    cout << res;

}
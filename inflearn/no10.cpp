#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int digit_sum(int x)
{
    int sum  = 0;
    while(x>0)
    {
        sum += x%10;
        x /= 10;

    }
    return sum;
}

int main()
{
    int n , temp , max , sum , res;
    max = 0;
    cin >> n;
    for(int i=0 ; i<n; i++)
    {
        cin >> temp;
        sum = digit_sum(temp);
        if(sum > max)
        {
            max = sum;
            res = temp;
        }
    }

    cout << res;

}
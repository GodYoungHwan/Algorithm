#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int reverse(int x)
{
    int res = 0, tmp  = 0;
    while(x>0){
        tmp = x%10;
        res = res*10+tmp;
        x = x/10;
    }
    return res;
}
bool isPrime(int x)
{
    bool prime = true;
    if(x == 1) return false;
    for(int i = 2; i<x;i++)
    {
        if(x%i == 0) prime = false;
    }

    return prime;
}

int main()
{
    int n , in , rev;

    cin >> n;
    
    for(int i =0 ; i<n; i++)
    {
        cin >> in;
        rev = reverse(in);
        if(isPrime(rev)) cout << rev << " ";
    }

    
}
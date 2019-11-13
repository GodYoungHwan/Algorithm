#include <iostream>
#include <vector>

using namespace std;


int gcd(int a,int b)
{
    while(mod>0)
    {
        int mod = a % b;
        a = b;
        b = mod;
    }
    return b;
    
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}

int main(){
    vector<int> vec;

    for(int i =0 ;i<vec.size();i++)
    {
        int t;
        cin >> t;
        vec.push_back(t);   
    }
    int arr[4] = {2,6,8,14};
    cout << gcd(2,6) << " " <<lcd(2,6)

}

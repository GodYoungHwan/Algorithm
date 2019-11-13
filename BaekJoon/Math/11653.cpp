#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num)
{
    bool flag = true;
    for(int i = 2; i*i<=num; i++)
    {
        if(num%i == 0)
        {
            flag = false;
        }
    }
    return flag;
}

int main(){
    vector<int> vec;
    int in;
    cin >> in;
    while(!isPrime(in)){
        for(int i = 2; i<in/2; i++)
        {
            if(isPrime(i))
            {
                if(in%i == 0)
                {
                    vec.push_back(i);
                    in = in/i;
                    break;
                }
            }
        }
    }
    for(int i =0 ;i<vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    cout << in << endl;
}
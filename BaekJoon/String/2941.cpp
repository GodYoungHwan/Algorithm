#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec;
    string str;
    int ans = 0;
    cin >> str;

    vec.push_back("c=");
    vec.push_back("c-");
    vec.push_back("dz=");
    vec.push_back("d-");
    vec.push_back("nj");
    vec.push_back("lj");
    vec.push_back("s=");
    vec.push_back("z=");

        for (int i = 0; i < vec.size(); i++)
        {
            if (str.find(vec[i]) > 10000)
            {
                continue;
            }
            else
            {
                str.erase(str.find(vec[i]),vec[i].size());
                cout << str << endl;
                ans++;
            }
        }
        
        ans += str.size();

    cout << ans;
}
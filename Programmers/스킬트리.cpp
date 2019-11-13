#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int count = 0;
    
    
    for (int i = 0; i < skill_trees.size(); i++)
    {
        bool flag = true;
        string str = skill_trees[i];
        int check = 0;
        for (int j = 0; j < skill_trees[i].size(); j++)
        {
            int temp = skill.find(str[j]);
            cout << "temp : " << temp << " ";
            if (temp < 0 || temp > 30)
            {
                continue;
            }
            if(temp != check)
            {
                flag = false;
                break;
            }
            if(temp == check)
            {
                check++;
            }
        }
        if (flag)
            count++;
    }
    return count;
}


int main()
{
    //["BACDE", "CBADF", "AECB", "BDA"]

    string skill = "CBD";
    vector<string> vec;
    vec.push_back("EEEE");
    vec.push_back("CBADF");
    vec.push_back("AECB");
    vec.push_back("BDA");
    vec.push_back("ABCFDG");

    cout << solution(skill, vec);
}

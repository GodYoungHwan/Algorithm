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

int solution2(string skill, vector<string> skill_trees)
{
    int answer = 0;
    int tf = 1;
    int check = 0;
    for (int i = 0; i < skill_trees.size(); i++)
    {
        string vec_str = skill_trees[i];
        for (int j = 0; j < vec_str.size(); j++)
        {
            // vec_str[j]와 find_num 비교하기
            int find_num = skill.find(vec_str[j]);
            cout << find_num << " ";
            // 범위에맞지않을 경우
            if (find_num < 0 || find_num > 30)
            {
                continue;
            }
            // 체크된 개수랑 find()한 개수가 틀릴경우
            if (find_num != check)
            {
                tf = 0;
                break;
            }
            //동일한 문자가 있을경우 통과하면
            else
            {
                check++;
            }
        }
        if (tf)
        {
            answer++;
        }
        check = 0;
        tf = 1;
    }
    return answer;
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

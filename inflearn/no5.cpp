#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in , str_year , str_sex , sol_sex;
    int year , sol_year , sex;
    
    cin >> in;

    str_year = in[0];
    str_year += in[1];
    str_sex += in[7];

    sex = stoi(str_sex);
    year = stoi(str_year);

    if(year < 20)
    {
        sol_year = (19 - year) + 1;
    }
    else
    {
        sol_year = (119-year) +1 ;
    }

    if(sex == 1 || sex == 3) sol_sex = "M";
    else sol_sex = "W";

    cout << sol_year << " " << sol_sex;

}
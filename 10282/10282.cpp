#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<sstream>
#include<map>

using namespace std;

int main()
{
    map < string , string > dic;

    string value,eng,str,key;

    stringstream input;

    while( getline( cin , value ) )//先把值存入字典裡面
    {
        if( value == "" )
        {
            break;
        }

        input.clear();

        input << value;//利用ss來分割2個字串

        input >> eng >> str;

        dic[str]=eng;//分別存入字典裡面
    }

    while( cin >> key )
    {
        if( dic.find(key) == dic.end() )//表示沒有找到
        {
            cout << "eh" << endl;
        }
        else
        {
            cout << dic[key] << endl;//如果有找到，就印出字典key配對的值
        }
    }
}

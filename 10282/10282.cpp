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

    while( getline( cin , value ) )//����Ȧs�J�r��̭�
    {
        if( value == "" )
        {
            break;
        }

        input.clear();

        input << value;//�Q��ss�Ӥ���2�Ӧr��

        input >> eng >> str;

        dic[str]=eng;//���O�s�J�r��̭�
    }

    while( cin >> key )
    {
        if( dic.find(key) == dic.end() )//��ܨS�����
        {
            cout << "eh" << endl;
        }
        else
        {
            cout << dic[key] << endl;//�p�G�����A�N�L�X�r��key�t�諸��
        }
    }
}

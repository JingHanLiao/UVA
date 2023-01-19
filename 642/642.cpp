#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
	map<string , string> dic;

	map<string , string> :: iterator word;

	string name,value;

	while (1)
    {
		cin >> name;

		if( name == "XXXXXX")
        {
            break;
        }

		value=name;

		sort( value.begin() , value.end() );

		dic[name]=value;
	}

	while (1)
    {
		cin >> name;

		if( name == "XXXXXX")
        {
            break;
        }

		value=name;

		sort( value.begin() , value.end() );

		bool flag = true;

		for( word=dic.begin() ; word != dic.end() ; word++ )
        {
			if( (*word).second == value )
			{
				cout << (*word).first << endl;

				flag=false;
			}
		}

		if( flag )
        {
            cout << "NOT A VALID WORD" << endl;
        }

		cout << "******" << endl;
	}
}

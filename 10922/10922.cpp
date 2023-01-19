#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    string str;

    while( cin >> str )
    {
        int sz=0,total=0,cont=0;

        if( str == "0" )
        {
            break;
        }

        sz=str.size();

        for( int i=0 ; i < sz ; i++)
        {
            total=total+(str[i]-'0');
        }

        if( total % 9 == 0 )
        {
            while( total % 9 == 0 )
            {
                int temp=0;

                cont++;

                if( total == 9 )
                {
                    break;
                }

                string st = to_string(total);

                sz=st.size();

                for( int i=0 ; i < sz ; i++)
                {
                    temp=temp+(st[i]-'0');
                }

                total=temp;
            }

            cout << str << " is a multiple of 9 and has 9-degree " << cont << '.' << endl;
        }
        else
        {
            cout << str << " is not a multiple of 9." << endl;
        }
    }
}

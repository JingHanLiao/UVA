#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int n;

    scanf("%d ", &n);

    string str;

    while( n-- )
    {
        int se;

        while( getline(cin , str) )
        {
            if(str[0] == '\0')
            {
                break;
            }

            se=str.size();

            for(int i=0 ; i < se ; i++)
            {
                if( str[i] == '1' )
                {
                    cout << 'I';
                }
                else if( str[i] == '2' )
                {
                    cout << 'Z' ;
                }
                else if( str[i] == '3' )
                {
                    cout << 'E' ;
                }
                else if( str[i] == '4' )
                {
                    cout << 'A' ;
                }
                else if( str[i] == '5' )
                {
                    cout << 'S' ;
                }
                else if( str[i] == '6' )
                {
                    cout << 'G' ;
                }
                else if( str[i] == '7' )
                {
                    cout << 'T' ;
                }
                else if( str[i] == '8' )
                {
                    cout << 'B' ;
                }
                else if( str[i] == '9' )
                {
                    cout << 'P' ;
                }
                else if( str[i] == '0' )
                {
                    cout << 'O' ;
                }
                else
                {
                    cout << str[i];
                }

            }

            cout << endl;
        }

        if(n)
        {
            cout << endl;
        }

    }
}

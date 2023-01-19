#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<sstream>
#include<cstdio>

using namespace std;

int main()
{
    string str;

    stringstream input;

    while( cin >> str )
    {
        long long int fina=0;

        input.clear();

        input << str;

        if( str[0] == '-' )//為負數就停止
        {
            break;
        }
        else if( str[1] == 'x' )
        {
            input >> hex >> fina;//16進位轉10進位

            cout << fina << endl;
        }
        else
        {
            input >> dec >> fina;//10進位轉16進位

            printf( "0x%X\n", fina );
        }
    }
}

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

        if( str[0] == '-' )//���t�ƴN����
        {
            break;
        }
        else if( str[1] == 'x' )
        {
            input >> hex >> fina;//16�i����10�i��

            cout << fina << endl;
        }
        else
        {
            input >> dec >> fina;//10�i����16�i��

            printf( "0x%X\n", fina );
        }
    }
}

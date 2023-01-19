#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int num;

    while( cin >> num )
    {
        int input=0;

        int arry[num];

        if( num == 0 )
        {
            break;
        }

        for( int i=0 ; i < num ; i++)
        {
            cin >> input;

            arry[i]=input;
        }

        for( int i=0 ; i < num ; i++)
        {

            cout <<  arry[i] ;

        }

        cout << endl;

    }
}


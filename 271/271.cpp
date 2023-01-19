#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstdio>
#include<cstring>

using namespace std;

int num=256;

char ch[257];

int main()
{
    while( cin >> ch )
    {
        int cont=0;

        for( int i=strlen(ch) - 1 ; i >= 0 ; i-- )
        {
           if( ch[i] >= 'p' && ch[i] <= 'z' )
           {
               cont++;
           }
           else if( ch[i] == 'N' )
           {
               if( cont == 0 )
               {
                   break;
               }
           }
           else if( ch[i] == 'C' || ch[i] == 'D' || ch[i] == 'E' || ch[i] == 'I' )
           {
               if( cont >= 2 )
               {
                   cont--;
               }
               else
               {
                   cont=0;

                   break;
               }
           }
           else
           {
               cont=0;

               break;
           }
        }

        if( cont ==1 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstdio>
#include<stack>

using namespace std;

int main()
{
   int n;

   cin >> n;

   getchar();

   while( n-- )
   {
       stack<char> stak;

       string str;

       getline( cin , str );

       if( str[0] == '\0' )
       {
           cout << "Yes" << endl;
       }
       else
       {
           bool flag=true;

           int sz=0;

           sz=str.size();

           for( int i=0 ; i < sz ; i++ )
           {
               char ch = str[i];

               if( ch == '(' || ch == '[' )
               {
                   stak.push(ch);
               }
               else if( ch == ')' && !stak.empty() && stak.top() == '(' )
               {
                   stak.pop();
               }
               else if( ch == ']' && !stak.empty() && stak.top() == '[' )
               {
                   stak.pop();
               }
               else
               {
                   flag=false;
               }
           }

           if( !stak.empty() )
           {
               flag=false;
           }

           while( !stak.empty() )
           {
               stak.pop();
           }

           if( flag == true )
           {
               cout << "Yes" << endl;
           }
           else if( flag == false )
           {
               cout << "No" << endl;
           }
       }
   }
}

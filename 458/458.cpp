#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
   string st;

   while(getline(cin , st))
   {
       int sz;

       sz=st.size();

       for(int i=0 ; i < sz ; i++)
       {
           st[i]=st[i]-7;
       }

       cout << st << endl;
   }
}

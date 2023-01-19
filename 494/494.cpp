#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    string st;

    while(getline(cin , st))
    {
        int sz,flag=0,cont=0;

        sz=st.size();

        for(int i=0 ; i < sz ;i++)
        {
            if(isalpha(st[i]))//如果是字母就+1
            {
                flag=1;
            }
            else//如果不是字母就算次數
            {
                cont=cont+flag;

                flag=0;
            }
        }

        cont=cont+flag;

        cout << cont << endl;

        cont=0;
    }

}

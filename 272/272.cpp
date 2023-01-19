#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int cont=0,sz=0;

    string s;

    while(getline(cin , s))
    {
        sz=s.size();

        for(int i=0 ; i < sz ; i++)
        {
            if(s[i] == '\"')
            {
                cont=cont+1;

                if(cont % 2 != 0)
                {
                    cout << "``";
                }
                else if(cont % 2 == 0)
                {
                    cout << "''";
                }
            }
            else
            {
                cout << s[i];
            }

        }

        cout << endl;

    }
}

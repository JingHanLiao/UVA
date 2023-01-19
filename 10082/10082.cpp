#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    char key[48]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    string s;

    while(getline(cin , s))
    {
        string fina;

        int sz;

        sz=s.size();

        for(int i=0 ; i < sz ; i++)
        {
            if(s[i] == ' ')
            {
                fina=fina+s[i];
            }
            else
            {
                for(int j=0 ; j < 48 ; j++)
                {
                    if(s[i] == key[j])
                    {
                        fina=fina+key[j-2];
                    }
                }
            }
        }
        cout << fina << endl;
    }
}

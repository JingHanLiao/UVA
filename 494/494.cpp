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
            if(isalpha(st[i]))//�p�G�O�r���N+1
            {
                flag=1;
            }
            else//�p�G���O�r���N�⦸��
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

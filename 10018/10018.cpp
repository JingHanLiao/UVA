#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

//整數不能包含2的32次方，所以使用long long int(2的64次方)

unsigned int revers(int num)
{
    int rev=0;

    while(num != 0)
    {
        rev=rev*10+num%10; //利用rev*10來讓數字疊起來

        num=num/10;//一位一位處理
    }

    return rev;
}

bool test(unsigned int tn)
{
    int se,tse,fri=0,en,flag;

    string st=to_string(tn);

    se=st.size();

    tse=se/2;

    en=se-1;

    for(int i=fri ; i < tse ; i++)
    {
        if(st[i] != st[en])
        {
            flag=0;

            break;
        }
        else
        {
            flag=1;
        }

        en--;
    }

    if( flag==1 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int n,rvn,fina;

    cin >> n;

    while( n-- )
    {
        int v,now=0,cont=0;

        bool flag;

        cin >> v;

        now=v;

        while(1)
        {
            rvn=revers(v);

            //cout << rvn << '*'<< endl;

            fina=now+rvn;

            cont++;

            now=fina;

            v=fina;

            //cout << fina << '&'<< endl;

            flag=test(fina);

            //cout << flag << "%"<< endl;

            if(flag == true)
            {
                cout << cont << ' ' << fina << endl;

                break;
            }
        }
    }
}

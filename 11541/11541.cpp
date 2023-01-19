#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int n,casen=1;

    cin >> n;

    while( n-- )
    {
        int se,cont=0;

        string str,ans;

        char now;

        cin >> str;

        se=str.size();

        now=str[0];

        for(int i=1 ; i <= se ; i++)
        {
            if(isalpha(str[i]))
            {
                for(int j=0 ; j < cont ; j++)//р硂ダ挡狦ㄓ
                {
                    ans=ans+now;
                }

                cont=0;

                now=str[i];//р硂ダ倒now

            }
            else if(isdigit(str[i]))
            {
                cont=cont*10+str[i]-'0';//计耞程衡ぶΩ计
            }
        }

        for(int j=0 ; j < cont ; j++)//程ダ礚猭┮临璶程ダ㎝Ω计
        {
            ans=ans+now;
        }

        cout << "Case " << casen << ": " << ans << endl;

        casen++;

    }
}

#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int gs(int s[] , int i)
{
	if(s[i] == 'X')
    {
		return 10;
	}
	else if(s[i] == '/')
    {
		return 10-s[i-1];
	}
	else
    {
		return s[i];
	}
}

int main()
{
    string str;

    char b[1001];

	int v[33];

	while(getline(cin, str))
    {
        if(str[0] == 'G')
        {
            break;
        }

        int sz=0;

        sz=str.size();

        for(int i=0 ; i < sz ; i++)
        {
            b[i]=str[i];
        }

        int cont = 0;

        for(int i=0 ; i < sz ; i++)
        {
			if(b[i] == ' ')
            {
				continue;
			}
			else if(b[i] <= '9' && b[i] >= '0')
            {
				v[cont++]=b[i]-'0';//轉整數並且存入
			}
			else
            {
				v[cont++]=b[i];
			}
		}

		int fra=0 , now=0;

		while(fra < 9)//10局
        {
			if(v[now] == 'X')
			{
				now=now+1;

				fra=fra+1;
			}
            else
			{
				now=now+2;

				fra=fra+1;
			}
		}

		int total=0;

		if(v[now] == 'X')
        {
			cont=cont-2;
		}

		if(v[now+1] == '/')
        {
			cont=cont-1;
		}

		for(int i=0 ; i < cont ; i++)
        {
			if(v[i] >= 0 && v[i] <= 9)
			{
				total=total+v[i];
			}
            else if(v[i] == 'X')
            {
				total=total+10;

				total=total+gs(v , i+1);

				total=total+gs(v , i+2);
			}
			else if(v[i] == '/')
            {
                total=total+( 10-v[i-1] );

                total=total+gs(v , i+1);
			}
		}

		cout << total << endl;

		total=0;
    }
}

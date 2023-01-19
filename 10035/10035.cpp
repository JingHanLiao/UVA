#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    string a,b,temp;

    while(cin >> a >> b)
    {
        int as,bs,sum,n1,n2,carry=0,cont=0;

        if(a == "0" && b == "0")
        {
            break;
        }

        as=a.size();

        bs=b.size();

        if(as < bs)
        {
            temp=b;

            b=a;

            a=temp;
        }

        as=a.size();

        bs=b.size();

        while(as > 0)
        {
            n1=a[as-1]-'0';

            //cout << n1 << endl;

            if( bs > 0 )
            {
                n2=b[bs-1]-'0';
            }
            else
            {
                n2=0;
            }

            //cout << n2 << endl;

            sum=n1+n2+carry;

            //cout << sum << "sum" << endl ;

            if( sum >= 10 )
            {
                carry=1;

                cont++;
            }
            else
            {
                carry=0;
            }

            as--;

            bs--;
        }

        if(cont == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if(cont == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else
        {
            cout << cont << " carry operations." << endl;
        }

        cont=0;

        carry=0;
    }

}

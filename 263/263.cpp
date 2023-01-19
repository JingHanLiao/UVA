#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

string algo_big( int se , string a )
{
    char temp;

    for(int i=0 ; i < se ; i++)
    {
        for(int j=i+1 ; j < se ; j++)
        {
            if( a[i] < a[j])
            {
                temp=a[i];

                a[i]=a[j];

                a[j]=temp;
            }
        }
    }

    return a;

}

string algo_sml( int se , string b )
{
    char temp2;

    for(int i=0 ; i < se ; i++)
    {
        for(int j=i+1 ; j < se ; j++)
        {
            if( b[i] > b[j])
            {
                temp2=b[i];

                b[i]=b[j];

                b[j]=temp2;
            }
        }
    }

    return b;

}


int main()
{
    string n;

    string test[1001];

    while(cin >> n)
    {
        if( n == "0")
        {
            break;
        }

        cout << "Original number was " << n << endl;

        string anser="0";

        string big,sml;

        int cont=0,pos=0,tag=0;

        while(1)
        {
            int se,bn,sn,c=0,smlse,fina;

            se=n.size();

            big=n;

            sml=n;

            big=algo_big(se,big);

            sml=algo_sml(se,sml);

            smlse=sml.size();

            for(int i=0 ; i < smlse ; i++)
            {
                if(sml[i] == '0')
                {
                    c++;
                }
            }

            sml=sml.erase(0,c);

            bn=atoi(big.c_str());

            sn=atoi(sml.c_str());

            fina=bn-sn;

            anser=to_string(fina);

            cout << bn << " - " << sn << " = " << anser << endl;

            cont++;

            for(int k=0 ; k <= pos ; k++)
            {
                if( anser == test[k])
                {
                    tag=1;
                }
            }

            if( tag == 1)
            {
                break;
            }

            test[pos]=anser;

            pos++;

            n=anser;
        }

        for(int i=0 ; i <= pos ; i++)
        {
            test[i]=" ";
        }

        cout << "Chain length " << cont << endl;

        cout << endl;
    }

}

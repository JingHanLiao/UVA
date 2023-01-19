#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        int jo,num[n]={0},chk[n]={0},temp;

        if( n == 1)
        {
            cin >> jo;

            cout << "Jolly" << endl;
        }
        else
        {
            for(int i=0 ; i < n ; i++)
            {
                cin >> num[i];

                if(i != 0)
                {
                    temp=abs(num[i-1]-num[i]);

                    chk[temp]=1;
                }
            }

            //差值只能1~n-1之間

            for(int j=1 ; j < n ; j++)
            {
                if(chk[j] == 0)
                {
                    cout << "Not jolly" << endl;

                    break;
                }
                else if(j == n-1)
                {
                    cout << "Jolly" << endl;
                }
            }
        }
    }
}

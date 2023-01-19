#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,i=0,v,temp,temp2;

    while(cin >> n >> m)
    {

        cout << n << " " << m << endl;

        int value[n]={0};

        int mod[n]={0};

        if(n == 0 && m == 0)
        {
            break;
        }

        for(int q=0 ; q < n ; q++)
        {
            cin >> v;

            value[q]=v;
        }

        for(int y=0 ; y < n ; y++)
        {
            mod[y]=value[y]%m;
        }

        for(int j=0 ; j < n ; j++)
        {
            for(int k=j+1 ; k < n ; k++)
            {
                if(mod[j] > mod[k])
                {
                    temp=mod[j];

                    mod[j]=mod[k];

                    mod[k]=temp;

                    temp2=value[j];

                    value[j]=value[k];

                    value[k]=temp2;
                }
            }
        }

        temp=0;

        temp2=0;

        for(int z=0 ; z < n ; z++)
        {
            for(int u=z+1 ; u < n ; u++)
            {
                if(mod[z] == mod[u])
                {

                    if(value[u] % 2 != 0 && value[z] % 2 == 0)
                    {
                        temp=value[z];

                        value[z]=value[u];

                        value[u]=temp;
                    }

                    else if(value[u] % 2 != 0 && value[z] % 2 != 0)
                    {
                        if(value[z] < value[u])
                        {
                            temp=value[z];

                            value[z]=value[u];

                            value[u]=temp;
                        }
                    }
                    else if(value[u] % 2 == 0 && value[z] % 2 == 0)
                    {
                      if(value[z] > value[u])
                      {
                          temp=value[z];

                          value[z]=value[u];

                          value[u]=temp;
                      }
                    }
                }
            }
        }

        for(int h=0 ; h < n ; h++)
        {
            cout << value[h] << endl;
        }

    }
}


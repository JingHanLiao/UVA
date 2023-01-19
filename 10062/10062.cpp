#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    string str;

    char now;

    int num,flag=0,temp1=0,temp2=0,hv=0,cot=0;

    int asc[95];// ASC 126~32

    int cont[95];

    while(getline(cin , str))
    {
        if (cot > 0)
        {
            cout << endl;
        }

        int se=str.size();

        for(int k=0 ; k < 95 ; k++)
        {
            asc[k]=9999; //先讓每一格都為9999，因為asc沒有9999，表示那格沒存東西
        }

        for(int k=0 ; k < 95 ; k++)
        {
            cont[k]=10000;
        }

        for(int i=0 ; i < se ; i++)
        {
            now=str[i];

            num=now;

            for(int j=0 ; j < 95 ; j++)//檢查有沒有存
            {
                if(num != asc[j])//沒存，flag為0
                {
                    flag=0;
                }
                else if(num == asc[j])//有存，flag為1
                {
                    flag=1;

                    break;
                }
            }

            for(int z=0 ; z < 95 ; z++)
            {
                if( flag == 0 && asc[z] == 9999 )
                {
                    asc[z]=num;

                    cont[z]=1;

                    hv++;

                    break;
                }
                else if( flag == 1 && asc[z] == num )
                {
                    cont[z]++;

                    break;
                }
            }
        }

        for(int e=0 ; e < hv ; e++)
        {
           for(int s=e+1 ; s < hv ; s++)
           {
               if(cont[s] < cont[e])
               {
                  temp1=cont[s];

                  cont[s]=cont[e];

                  cont[e]=temp1;

                  temp2=asc[s];

                  asc[s]=asc[e];

                  asc[e]=temp2;
               }

               if(cont[s] == cont[e])
               {
                   if(asc[s] > asc[e])
                   {
                       temp1=cont[s];

                       cont[s]=cont[e];

                       cont[e]=temp1;

                       temp2=asc[s];

                       asc[s]=asc[e];

                       asc[e]=temp2;
                   }
               }
           }
        }

        for(int p=0 ; p < hv ; p++)
        {
            cout << asc[p] << ' ' << cont[p] << endl;
        }

        hv=0;

        cot++;
    }
}


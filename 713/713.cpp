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

    cin >> n;

    while( n-- )
    {
        int se1=0,se2=0,zn1=0,zn2=0,a,b,carry=0,sum,fse=0,fzn=0;

        string num1,num2,new1="",new2="",temp,fina;

        cin >> num1 >> num2;

        se1=num1.size();

        se2=num2.size();

        for(int i=0 ; i < se1 ; i++)
        {
            new1=num1[i]+new1;
        }

        for(int i=0 ; i < se1 ; i++)
        {
            if( new1[i] == '0')
            {
               zn1++;
            }
            else
            {
                break;
            }
        }

        new1=new1.erase(0,zn1);

        se1=new1.size();

        for(int i=0 ; i < se2 ; i++)
        {
            new2=num2[i]+new2;
        }

        for(int i=0 ; i < se2 ; i++)
        {
            if( new2[i] == '0')
            {
               zn2++;
            }
            else
            {
                break;
            }
        }

        new2=new2.erase(0,zn2);

        se2=new2.size();

        if(se1 < se2)//�����������ܦ��Q�[�Ƥ���n��
        {
            temp=new2;

            new2=new1;

            new1=temp;
        }

        se1=new1.size();

        se2=new2.size();

        //cout << se1 << ' ' << se2 << endl;

        while( se1 > 0 )//���q�Ӧ�ƧP�_
        {
            a=new1[se1-1]-48;//�r������

            if(se2 > 0)//b�٦��Ʀr�S�Q�[
            {
                b=new2[se2-1]-48;
            }
            else
            {
                b=0;//b�Q�[���F
            }

            sum=a+b+carry;

            if(sum >= 10)
            {
                new1[se1-1]=sum % 10+'0';//�i�쪺�Ӧ��(�����r��)

                carry=1;//�i���
            }
            else if(sum < 10)
            {
                new1[se1-1]=sum+'0';//�S�i�쪺�Ӧ��

                carry=0;//�i���
            }

            se1--;//�~�򩹫�P�_

            se2--;
        }

        if(carry == 1)//�p�G�̫᪺��Ʀ��i��N�n+1
        {
            new1='1'+new1;
        }

        fse=new1.size();

        for(int i=0 ; i < fse ; i++)
        {
            fina=new1[i]+fina;
        }

        for(int i=0 ; i < fse ; i++)
        {
            if( fina[i] == '0')
            {
               fzn++;
            }
            else
            {
                break;
            }
        }

        fina=fina.erase(0,fzn);

        cout << fina << endl;
    }
}

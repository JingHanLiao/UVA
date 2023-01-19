#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

char pre[53],in[53];

int idx;

void find_post(int start , int end)//利用遞迴找後序
{
    if(start > end)
    {
       return;
    }

    int P;//為目前查到的node

    for(P=start ; P  <=  end ; P++)
    {
        if(in[P] == pre[idx])//如果找到一樣的就可以知道左右節點
        {
            break;
        }
    }

    if(P != end+1)
    {
        idx++;

        find_post(start , P-1);//目前節點的左子點

        find_post(P+1 , end);//目前節點的右子點

        cout << in[P];
    }
}

int main()
{
    int cont,node;

    cin >> cont;

    while(cont--)//有cont筆測資
    {
        int i=0,j=0;

        char value;

        cin >> node;

        while(i < node)//先輸入前序
        {
            cin >> value;

            pre[i]=value;

            i=i+1;
        }

        while(j < node)//在輸入中序
        {
            cin >> value;

            in[j]=value;

            j=j+1;
        }

        idx=0;//index開始的時候為0開始

        find_post(0 , node-1);//利用函式找後序

        cout << endl;
    }

}

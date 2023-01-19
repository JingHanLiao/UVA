#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>
using namespace std;

struct problem
{
    bool solved;
    int penalty;
};

struct contestant
{
    bool join;
    int index;
    problem p[9];
    int solveNum;
    int score;
}

player[100];

bool cmp(contestant A, contestant B)
{
    if(A.solveNum!=B.solveNum)
    {
        return A.solveNum > B.solveNum;
    }
    else
    if(A.score!=B.score)
    {
        return A.score < B.score;
    }
    else
    {
        return A.index < B.index;
    }
}

int main()
{
    int T;
    scanf("%d ", &T);
    while(T--)
    {
        //初始化
        for(int i=0; i<100; i++)
        {
            player[i].index = i+1;
            player[i].solveNum = 0;
            player[i].score = 0;
            player[i].join = false;
            for(int j=0; j<9; j++)
            {
                player[i].p[j].solved = false;
                player[i].p[j].penalty = 0;
            }
        }

        //讀入處理
        char input[200];
        while(gets(input))
        {
            if(input[0]=='\0')
                break;

            int c, pn, t;
            char L;
            sscanf(input ,"%d %d %d %c", &c, &pn, &t, &L);

            c = c-1;
            pn = pn-1;

            player[c].join = true;
            if(L=='C')
            {//已解 忽略
             //未解 計算罰分
             if(!player[c].p[pn].solved)
                {
                    player[c].p[pn].solved = true;
                    player[c].solveNum++;
                    player[c].score += (player[c].p[pn].penalty + t);
                }

            }
            else
            if(L=='I')
            {
                //已解 忽略
                //未解 加罰分
                if(!player[c].p[pn].solved)
                {
                    player[c].p[pn].penalty+=20;
                }
            }
        }

        //輸出
        sort(player,player+100,cmp);
        for(int i=0; i<100; i++)
        {
            if(player[i].join)
                printf("%d %d %d\n", player[i].index, player[i].solveNum, player[i].score);
        }


        if(T)
         putchar('\n');
    }
}

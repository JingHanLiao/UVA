#include<iostream>

using namespace std;

class Graph
{
    public:

        Graph(int,int);

        void J(char);

        void C();

        void L(int,int,char);

        void V(int,int,int,char);

        void H(int,int,int,char);

        void K(int,int,int,int,char);

        void F(int,int,char);

        void S(string);

    private:

        char **map;

        int M,N;
};

Graph :: Graph( int m , int n )
{
    M=m;

    N=n;

    map = new char*[255];

    for( int i=0 ; i < 255 ; i++ )
    {
        map[i] = new char[255];
    }

    for( int i=1 ; i <= N ; i++ )
    {
        for( int j=1 ; j <= M ; j++)
        {
            map[i][j]='O';
        }
    }
}

void Graph :: C()
{
    for( int i=1 ; i <= N ; i++ )
    {
        for( int j=1 ; j <= M ; j++)
        {
            map[i][j]='O';
        }
    }
}

void Graph :: L( int x , int y , char c )
{
    map[y][x]=c;
}

void Graph :: J( char c )
{
    for( int i=1 ; i <= N ; i++ )
    {
        for( int j=1 ; j <= M ; j++)
        {
            map[i][j]=c;
        }
    }
}

void Graph :: V( int x , int y1 , int y2 , char c )
{
    if( y1 < y2 )
    {
        for( int i=y1 ; i <= y2 ; i++ )
        {
            map[i][x]=c;
        }
    }
    else
    {
        for( int i=y2 ; i <= y1 ; i++ )
        {
            map[i][x]=c;
        }
    }
}

void Graph :: H( int x1 , int x2 , int y ,char c )
{
    if( x1 < x2 )
    {
        for( int i=x1 ; i <= x2 ; i++ )
        {
            map[y][i]=c;
        }
    }
    else
    {
        for( int i=x2 ; i <= x1 ; i++ )
        {
            map[y][i]=c;
        }
    }
}

void Graph :: K( int x1 , int x2 , int y1 , int y2 , char c )//x1,y1¥ª¤W,x2,y2¥k¤U
{
    if( x1 < x2 && y1 < y2 || x1 <= x2 && y1 < y2 || x1 < x2 && y1 <= y2 || x1 == x2 && y1 == y2 )
    {
        for( int i=y1 ; i <= y2 ; i++ )
        {
            for( int j=x1 ; j <= x2 ; j++ )
            {
                map[i][j]=c;
            }
        }
    }
    else
    {
        return;
    }
}

void Graph :: F( int x , int y , char c )
{
    char old=map[y][x];

    if( old == c )
    {
        return;
    }

    if( y >= 1 && y <= N && x >= 1 && x <= M )
    {
        for (int i=-1 ; i <= 1 ; i++)
        {
            for (int j=-1 ; j <= 1 ; j++)
            {
                if ( map[y+i][x+j] == old )
                {
                    map[y+i][x+j]=c;
                }
            }
        }
    }
}

void Graph :: S( string name )
{
    cout << name << endl;

    for( int i=1 ; i <= N ; i++ )
    {
        for( int j=1 ; j <= M ; j++)
        {
            cout << map[i][j];
        }

        cout << endl;
    }
}

int main()
{
    char c;
    bool flag=0;
    cin >> c; //c='I'
    int m, n;
    cin >> m >> n;
    Graph g(m,n);
    char ch; //colour
    int x, y, x1, x2, y1, y2; // coordinate
    string s; //name
    while(cin >> c){
        switch (c){
        case 'J':
            cin >> ch;
            g.J(ch);
            break;
        case 'C':
            g.C();
            break;
        case 'L':
            cin >> x >> y >> ch;
            g.L(x,y,ch);
            break;
        case 'V':
            cin >> x >> y1 >> y2 >> ch;
            g.V(x,y1,y2,ch);
            break;
        case 'H':
            cin >> x1 >> x2 >> y >> ch;
            g.H(x1,x2,y,ch);
            break;
        case 'K':
            cin >> x1 >> x2 >> y1 >> y2 >> ch;
            g.K(x1,x2,y1,y2,ch);
            break;
        case 'F':
            cin >> x >> y >> ch;
            g.F(x,y,ch);
            break;
        case 'S':
            cin >> s;
            g.S(s);
            break;
        case 'X':
            flag=1;
            break;
        default:
            getline(cin , s);
            break;
        }
        if(flag)
            break;
    }
}


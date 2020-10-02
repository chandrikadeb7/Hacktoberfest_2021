#include <iostream>

using namespace std;

int main()
{
    int m1[3][3], m2[3][3], best = 2000000000;    
    for( int i=0; i<3; i++ )
        for(int j=0; j<3; j++ )
                cin >> m1[i][j];
    for( int a=1; a<=9; a++ )
        for( int b=1; b<=9; b++ )
        {
            if( b==a)
                continue;
            for( int c=1; c<=9; c++ )
            {
                if( c==a || c==b )
                    continue;
                for( int d=1; d<=9; d++ )
                {
                    if( d==a || d==b || d==c )
                        continue;
                    for( int e=1; e<=9; e++ )
                    {
                        if( e==a || e==b || e==c || e==d )
                            continue;
                        for( int f=1; f<=9; f++ )
                        {
                            if( f==a || f==b || f==c || f==d || f==e )
                                continue;
                            for( int g=1; g<=9; g++ )
                            {
                                if( g==a || g==b || g==c || g==d || g==e || g==f )
                                    continue;
                                for( int h=1; h<=9; h++ )
                                {
                                    if( h==a || h==b || h==c || h==d || h==e || h==f || h==g )
                                        continue;
                                    for( int i=1; i<=9; i++ )
                                    {
                                        if( i==a || i==b || i==c || i==d || i==e || i==f || i==g || i==h )
                                            continue;
        
                                        m2[0][0] = a;
                                        m2[0][1] = b;
                                        m2[0][2] = c,
                                        m2[1][0] = d;   
                                        m2[1][1] = e;
                                        m2[1][2] = f;
                                        m2[2][0] = g;
                                        m2[2][1] = h;
                                        m2[2][2] = i;
                                        if( a + b + c  == d + e + f && d + e + f == g + h + i && a + d + g == b + e + h && b + e + h == c + f + i && a + b + c  == a + e + i && a + b + c == c + e + g )
                                        {
                                            int cost = 0;
                                            for( int r=0; r<3; r++ )
                                                for( int s=0; s<3; s++ )
                                                    cost += abs( m1[r][s] - m2[r][s] );
                                                best = min( best, cost );            
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } 
    cout << best;
    return 0;
}
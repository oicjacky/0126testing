#include<iostream>
using namespace std;

int main()
{
    int N;
    int T;
    int n, t, m;
    int money[105];

    int i;

    cin >> N;
    cin >> T;

    //let all money be 0
    i=0;
    while( i<N )
    {
        money[i] = 0;

        i = i+1;
    }

    //deposit, withdraw
    i = 0;
    while( i<T )
    {
        cin >> n >> t >> m;

        if( t==1 )
        {
            money[n] = money[n] + m;
        }
        if( t==2 )
        {
            money[n] = money[n] - m;
        }

        i = i+1;
    }

    //output
    i = 0;
    while( i<N )
    {
        cout << i << " : " << money[i] << endl;
        i = i+1;
    }

    return 0;
}

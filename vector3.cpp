#include<iostream>
using namespace std;

int main(){
	//�Ĥ@�C�G�@�Ӿ��N�A�N��N���U�ȡC N <= 100
	//�ĤG�C�G�@�Ӿ��T�A�N��T������C T <= 10000
	//����T�C�G�T�Ӿ��n�Bt�Bm�C�N���n�W�U�ȡA�s�کδ��ڤFm���C t=1�N��s�ڡFt=0�N���ڡC
	//���]�U�Ƚs���O 1 ~ N�A�C�W�U�ȱb��@�}�l�s�� 0 ���C
	
	int N, T ,i ;
	int n, t, m ;
	cout << N << endl;	
	cin >> N >> T ;
	int money[N] ;
	
	i = 0 ;
	while( i < N){
		money[i] = 0;
		i = i + 1;
	}
	//
	cout << "each account of customer:" << endl;
	i = 0 ;
	while( i < N){
		cout << i+1 << " : " << money[i] << endl;
		i = i + 1;
	}
	//
	cout << "�U�ȡA�s��(1)�δ���(0)�Fm���C"  << endl ;
	
	i = 0 ;
	while( i < T ){
		cout << i+1 << "-th trade: " ;
		cin >> n >> t >> m ;
		if( t == 1)
		{
			money[n-1] = money[n-1] + m ;
		}
		if( t == 0)
		{
			money[n-1] = money[n-1] - m ;
		}
		i = i + 1 ;
	}
	
	cout << "each account of customer:" << endl;
	i = 0 ;
	while( i < N){
		cout << i+1 << " : " << money[i] << endl;
		i = i + 1;
	}
	
	return 0;
}

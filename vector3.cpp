#include<iostream>
using namespace std;

int main(){
	//第一列：一個整數N，代表有N個顧客。 N <= 100
	//第二列：一個整數T，代表有T筆交易。 T <= 10000
	//接著T列：三個整數n、t、m。代表第n名顧客，存款或提款了m元。 t=1代表存款；t=0代表提款。
	//假設顧客編號是 1 ~ N，每名顧客帳戶一開始存有 0 元。
	
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
	cout << "顧客，存款(1)或提款(0)了m元。"  << endl ;
	
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

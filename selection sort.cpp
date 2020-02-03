#include<iostream>
using namespace std;

int main(){
	//輸入說明
	//第1列: 1個整數N，代表接下來有幾個數字。 ( 1 <= N <= 100 )
	//第2列: N個待排序的整數
	int N ;
	
	cout << "輸入N代表接下來有幾個數字: " ;
	cin >> N ;
	
	int num[N] ;
	int i, dum, j ;
	cout << "輸入數字: " ;
	
	for(i = 0 ; i < N ; i++){
		cin >> num[i] ;
	}
	
	for(j=0 ; j < N ; j++){
		for(i = j+1 ; i < N ; i++){
			if( num[j] < num[i] ){
				dum = num[i] ;
				num[i] = num[j] ;
				num[j] = dum ;
			}
		}
	}
	
	//cout << "the sorted number is: " << sort_num << endl ;
	cout << "the sorted number is: " << endl ;
	for(i = 0 ; i < N ; i++){
		cout << num[i] << ", " ;
	}
	return 0;
} 

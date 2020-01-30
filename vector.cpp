#include<iostream>
using namespace std;

int main(){
	//vector
	int a = 2, b = 3, c = 5, d = 7 ;
	int money[4] ;
	
	money[0] = a;
	money[1] = b;
	money[2] = c;
	money[3] = d;
	
	int i = 1 ;
	while(i <= 4){
		cout << money[i-1] << endl;
		i = i + 1;
	}
	//
	int N;
	int num[1000];
	int j;
	
	cin >> N ;
	
	j = 0;
	while( j < N ){
		cin >> num[j] ;
		j = j + 1 ;
	}
	
	j = 0;
	while( j < N ){
		cout << num[N-j-1] << ", ";
		j = j + 1 ;
	}
	
	
	return 0;
} 

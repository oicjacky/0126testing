#include<iostream>
using namespace std;

int main(){
	//長方形
	int i , j ;
	int x , y ;
	
	cout << "寬為x高為y的長方形, 輸入x和y: " ;
	cin >> x >> y ; 
	
	for(j = 1 ; j <= y ; j++ ){
		for(i = 1 ; i <= x ; i++ ){
		cout << "*" ;
		}
	cout << endl ;
	}
	
	//等腰三角形
	int side ;
	
	cout << "以*拼成的等腰三角形, 腰長: " ;
	cin >> side ;
	
	for(j = 1 ; j <= side ; j++ ){
		for(i = 1 ; i <= j ; i++ ){
		cout << "*" ;
		}
	cout << endl ;
	}
		
	//金字塔
	// 1 1, 2 3, 3 5, ... , n 2n-1
	int hight ;
	int k ;
	
	cout << "以*拼成的金字塔, 高度為: " ;
	cin >> hight ;
	
	for(j = 1 ; j <= hight ; j++){
		// 印出順序: 空格→* (→空格) ,事實上()內可省略 
		for(k = 1 ; k <= hight - j ; k++){
			cout << " " ;
		}
		for(i = 1 ; i <= 2 * j - 1 ; i++ ){
			cout << "*" ;
		}
		for(k = 1 ; k <= hight - j ; k++){
			cout << " " ;
		}
	cout << endl ;
	}
	
	
	return 0;
} 

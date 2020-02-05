#include<iostream>
using namespace std;
// 語法1 -整數 轉成 字元
// (char)整數 
// 語法2 -字元 轉成 整數
// (int)字元 
int main(){
	int i;
	
	for( i = 0 ; i <= 127 ; ++i ){
		cout << i << "char: " << (char) i << endl ;
	}
	//要表示一個字元，我們可以用一對單引號 ' 把該字元夾起來 'C'
	cout << (int)'0' << endl ;
	cout << (int)'A' << endl ;
	cout << (int)'a' << endl ;
	cout << (int)'\0' << endl ;
	cout << (int)'\t' << endl ;
	cout << (int)'\n' << endl ;
	//-----------------------------------------------
	
	char c ;
	cout << "輸入字母或數字: " ;
	while( cin >> c ){
				
		if( c >= 'a' and c <= 'z' ){
			cout << "小寫字母" << endl ;
		}
		if( c >= 'A' and c <= 'Z' ){
			cout << "大寫字母" << endl ;
		}
		if( c >= '0' and c <= '9' ){
			cout << "數字" << endl ;
		}
		cout << "輸入字母或數字: " ;
	}
	 
	return 0;
} 

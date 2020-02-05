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
	//把輸入的大寫字母改成小寫字母
		
	char c ;
	
	while( cin >> c ){
		//Equavalent
		cout << (char) ((int)c + 32) << endl ;
		cout << "Your input is " << c << endl ;
		//cout << (char) (c + 32) << endl ;
		//---------------------------------
		//cout << c << 'c' << "c" << endl ;
	}	
	 
	return 0;
} 

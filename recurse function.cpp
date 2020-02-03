#include<iostream>
using namespace std;
//顶ㄧ计 
int f(int n){
	if(n == 0){
		return 1 ;
	}else if(n >= 1){
		return n * f(n-1) ;
	}else{
		cout << "Error: n < 0." << endl ;
	}
} 
//Ωよㄧ计 a^b
float g(float a ,int b ){
	//蝴膀κ计そΑ: https://zh.wikipedia.org/wiki/%E5%86%AA
	if(a == 0 || b == 0){
		return 1 ;
	}else if(b > 0 ){
		return a * g(a, b-1) ;
	}else{
		return g(1/a ,(-b) ) ;
	}
} 

int main(){
	
	int n ;
	
	cout << "俱计 n! = " ;
	while( cin >> n){
		if( n < 0 ){
			cout << "Error: n < 0." << endl ;
			break ;
		}
		cout << f(n) << endl ;
		cout << "俱计 n! = " ;
	}
	//----------------------------------------
	int b ;
	float a;
	
	cout << "璸衡 a^b = " ;
	while( cin >> a >> b ){
		cout << g( a, b) << endl ;
		cout << "璸衡 a^b = " ;
	}
	// return g(1/a ,(-b) ) ;
	// Τ拜肈 1/a 穦琌だ计ぃ琌俱计. 
	//--タ-- float疊翴计 (7计), 猔: 璸衡硉耕 int俱计篊. 
	// 	ョノdouble弘絋疊翴计ノ 8Bytes (Τ计 15 )
	return 0 ;
}

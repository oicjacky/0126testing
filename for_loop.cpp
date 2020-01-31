#include<iostream>
using namespace std;

int main(){
	//for( [A.]一開始先做什麼事 ; [B.]條件式 ; [D.]等C每作完一次，就做什麼事 ){
	//      [C.]當B條件成立時，就重覆做的事...  
	//}
	//先做A ==> 檢查B條件，成立就做C，接著做D
	//==> 檢查B條件，成立就做C，接著做D
	//...
	//==> 檢查B條件，成立就做C，接著做D
	//==> 檢查B條件，不成立離開
	
	//while迴圈
	int index = 1 ;
	int n ;
	
	cout << endl << "input n : " ;
	cin >> n ;
	
	while( index <= n){
		cout << "NO. " << index << endl ;
		index = index + 1 ;
	}
	
	cout << "Equal to," << endl;
	for(index = 1; index <= n; index = index + 1){
		cout << "NO. " << index << endl ;
	}
	
	cout << "Equal to," << endl;
	for(index = n; index >= 1; index = index - 1){
		cout << "NO. " << n - index + 1 << endl ;
	}
	
	//原始寫法	簡寫
	//i=i+1	i++
	//i=i-1	i--
	//a=a+b	a+=b
	//a=a-b	a-=b
	//a=a*b	a*=b
	//a=a/b	a/=b
	//a=a%b	a%=b
	
	//倒數計時
	int i ,num ;
	cout << "倒數計時, 輸入數字: " ; 
	cin >> num ;
	
	for(i = num; i >= 1 ; i-- ){
		cout << "Say: " << i << endl ;
	}
	cout << "Start!" ;
	
	 
	return 0;
} 

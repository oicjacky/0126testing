#include<iostream>
using namespace std;

int main(){
	//for( [A.]�@�}�l��������� ; [B.]���� ; [D.]��C�C�@���@���A�N������� ){
	//      [C.]��B���󦨥߮ɡA�N���а�����...  
	//}
	//����A ==> �ˬdB����A���ߴN��C�A���۰�D
	//==> �ˬdB����A���ߴN��C�A���۰�D
	//...
	//==> �ˬdB����A���ߴN��C�A���۰�D
	//==> �ˬdB����A���������}
	
	//while�j��
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
	
	//��l�g�k	²�g
	//i=i+1	i++
	//i=i-1	i--
	//a=a+b	a+=b
	//a=a-b	a-=b
	//a=a*b	a*=b
	//a=a/b	a/=b
	//a=a%b	a%=b
	
	//�˼ƭp��
	int i ,num ;
	cout << "�˼ƭp��, ��J�Ʀr: " ; 
	cin >> num ;
	
	for(i = num; i >= 1 ; i-- ){
		cout << "Say: " << i << endl ;
	}
	cout << "Start!" ;
	
	 
	return 0;
} 

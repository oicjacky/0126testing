#include<iostream>
using namespace std;
//������� 
int f(int n){
	if(n == 0){
		return 1 ;
	}else if(n >= 1){
		return n * f(n-1) ;
	}else{
		cout << "Error: n < 0." << endl ;
	}
} 
//������ a^b
float g(float a ,int b ){
	//����ʬ���Ƥ���: https://zh.wikipedia.org/wiki/%E5%86%AA
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
	
	cout << "��� n! = " ;
	while( cin >> n){
		if( n < 0 ){
			cout << "Error: n < 0." << endl ;
			break ;
		}
		cout << f(n) << endl ;
		cout << "��� n! = " ;
	}
	//----------------------------------------
	int b ;
	float a;
	
	cout << "�p�� a^b = " ;
	while( cin >> a >> b ){
		cout << g( a, b) << endl ;
		cout << "�p�� a^b = " ;
	}
	// return g(1/a ,(-b) ) ;
	// �����D�A�]�� 1/a �|�O���ơA���O���. 
	//--�w�ץ�-- float�B�I�� (7���), �`: �p��t�׸� int��ƪ��C. 
	// 	��i��double����T�ׯB�I�ơA���� 8Bytes (���Ħ�� 15 ��)
	return 0 ;
}

#include<iostream>
using namespace std;
// �y�k1 -��� �ন �r��
// (char)��� 
// �y�k2 -�r�� �ন ���
// (int)�r�� 
int main(){
	int i;
	
	for( i = 0 ; i <= 127 ; ++i ){
		cout << i << "char: " << (char) i << endl ;
	}
	//���J���j�g�r���令�p�g�r��
		
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

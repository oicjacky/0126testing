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
	//�n��ܤ@�Ӧr���A�ڭ̥i�H�Τ@���޸� ' ��Ӧr�����_�� 'C'
	cout << (int)'0' << endl ;
	cout << (int)'A' << endl ;
	cout << (int)'a' << endl ;
	cout << (int)'\0' << endl ;
	cout << (int)'\t' << endl ;
	cout << (int)'\n' << endl ;
	//-----------------------------------------------
	
	char c ;
	cout << "��J�r���μƦr: " ;
	while( cin >> c ){
				
		if( c >= 'a' and c <= 'z' ){
			cout << "�p�g�r��" << endl ;
		}
		if( c >= 'A' and c <= 'Z' ){
			cout << "�j�g�r��" << endl ;
		}
		if( c >= '0' and c <= '9' ){
			cout << "�Ʀr" << endl ;
		}
		cout << "��J�r���μƦr: " ;
	}
	 
	return 0;
} 

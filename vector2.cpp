#include<iostream>
using namespace std;

int main(){
	//��1�C�G���N�BM�A�N��Z�W�P�Ǧ�N��B�Q�d�ߪ����Z��M���C(N,M <= 100)
	//����N�C�G�y��1~�y��N�P�Ǫ����Z�C
	//����M�G���d�ߦP�Ǫ��y���C
	int N, M ;
	
	cout << "�Z�W��N��P��: ";
	cin >> N ;
	
	int i = 0;
	int grade[N];
	while( i < N ){
		cout << "�y��" << i+1 << "���Z��: " ;
		cin >> grade[i] ;
		i = i + 1;
	}
	
	cout << "find who's grade : " << endl ;
	while( cin >> M  ){
		if( M > N ){
			cout << "no such student." << endl ;
			break;
		}
		cout << "the grade is " << grade[M-1] << endl ;
		
	}
	
	return 0;
}

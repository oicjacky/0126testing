#include<iostream>
using namespace std;

int main(){
	//��1�C�G���N�BM�A�N��Z�W�P�Ǧ�N��B�Q�d�ߪ����Z��M���C(N,M <= 100)
	//����N�C�G�y��1~�y��N�P�Ǫ����Z�C
	//����M�G���d�ߦP�Ǫ��y���C
	int N, M ;
	
	cin >> N ;
	
	int i = 0;
	int grade[N];
	while( i < N ){
		cin >> grade[i] ;
		i = i + 1;
	}
	
	cout << "find who's grade : " << endl ;
	while( cin >> M  ){
		cout << "the grade is " << grade[M-1] << endl ;
		if( M > N ){
			cout << "no such student." << endl ;
			break;
		}
	}
	
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	//��J����
	//��1�C: 1�Ӿ��N�A�N���U�Ӧ��X�ӼƦr�C ( 1 <= N <= 100 )
	//��2�C: N�ӫݱƧǪ����
	int N ;
	
	cout << "��JN�N���U�Ӧ��X�ӼƦr: " ;
	cin >> N ;
	
	int num[N] ;
	int i, dum, j ;
	cout << "��J�Ʀr: " ;
	
	for(i = 0 ; i < N ; i++){
		cin >> num[i] ;
	}
	
	for(j=0 ; j < N ; j++){
		for(i = j+1 ; i < N ; i++){
			if( num[j] < num[i] ){
				dum = num[i] ;
				num[i] = num[j] ;
				num[j] = dum ;
			}
		}
	}
	
	//cout << "the sorted number is: " << sort_num << endl ;
	cout << "the sorted number is: " << endl ;
	for(i = 0 ; i < N ; i++){
		cout << num[i] << ", " ;
	}
	return 0;
} 

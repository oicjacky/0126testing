#include<iostream>
using namespace std;

int main(){
	//�����
	int i , j ;
	int x , y ;
	
	cout << "�e��x����y�������, ��Jx�My: " ;
	cin >> x >> y ; 
	
	for(j = 1 ; j <= y ; j++ ){
		for(i = 1 ; i <= x ; i++ ){
		cout << "*" ;
		}
	cout << endl ;
	}
	
	//���y�T����
	int side ;
	
	cout << "�H*���������y�T����, �y��: " ;
	cin >> side ;
	
	for(j = 1 ; j <= side ; j++ ){
		for(i = 1 ; i <= j ; i++ ){
		cout << "*" ;
		}
	cout << endl ;
	}
		
	//���r��
	// 1 1, 2 3, 3 5, ... , n 2n-1
	int hight ;
	int k ;
	
	cout << "�H*���������r��, ���׬�: " ;
	cin >> hight ;
	
	for(j = 1 ; j <= hight ; j++){
		// �L�X����: �Ů��* (���Ů�) ,�ƹ�W()���i�ٲ� 
		for(k = 1 ; k <= hight - j ; k++){
			cout << " " ;
		}
		for(i = 1 ; i <= 2 * j - 1 ; i++ ){
			cout << "*" ;
		}
		for(k = 1 ; k <= hight - j ; k++){
			cout << " " ;
		}
	cout << endl ;
	}
	
	
	return 0;
} 

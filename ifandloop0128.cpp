#include<iostream>
using namespace std;
int main(){
	int input;
	
	cout << "��J���Z�P�_�X��P�_: " ;
	cin >> input;
	if( input >= 60){
		cout << "you pass !" << endl;
	}else{
		cout << "False !" << endl;
	}
	//���Aa, b�A�ЧA�P�_a�O���Ob�����ơC
	//int a,b ;
	//while(cin >> a >> b ){
	//	if(a % b == 0){
	//		cout << "Yes." << endl;
	//	}else{
	//		cout << "No." << endl;
	//	}
	//}
	
	//����100�~�H�e�A�ڰ���k�W�w�k�k���B�̧C���ת��~�֫h���O�� 18 ���� 16 ��
	int sex, age ;
	
	cout << "��J�ʧO(�k=1, �k=��L�Ʀr)�Φ~��: ";
	cin >> sex >> age ;
	if(sex == 1){
		
		if(age >= 18){
			cout << "You are marriageable." ;
		}else{
			cout << "You are NOT marriageable." ;
		}
		
	}else{
		if(age >= 16){
			cout << "You are marriageable." ;
		}else{
			cout << "You are NOT marriageable." ;
		}
	}
	//while�j��
	int index = 1 ;
	int n ;
	
	cout << endl << "input n : " ;
	cin >> n ;
	
	while( index <= n){
		cout << "NO. " << index << endl ;
		index = index + 1 ;
	}
	//��]��=1, �P�_���=2
	int i ;
	cout << "��J: ��]��=1, �P�_���=2 " << endl ; 
	cin >> i ; 
	if( i == 1){
	//��]��
	int input_num , index2 ;
	
	cout << "��]��: " ;
	
	cin >> input_num ; 
	index2 = 1 ;
	while( index2 <= input_num ){
		if(input_num % index2 == 0 ){
			cout << index2 << ", " ;
		}
		index2 = index2 + 1 ;
	}	
	}
	
	if( i == 2){
	//����
	int input_num , index2 = 1, counter = 0 ;
	
	cout << "����: " ;
	
	cin >> input_num ; 
		
	while( index2 <= input_num ){
		if(input_num % index2 == 0 ){
			//cout << index2 << ", " ;
			counter = counter + 1 ;
		}
		index2 = index2 + 1 ;
	} 
	
	if( counter == 2){
		cout << "it's prime." ;
	}else{
		cout << "it's NOT prime.";
		//cout << index2 << counter << endl ;
	}	
	}
	
	
	
	
	return 0;
}



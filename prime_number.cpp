#include<iostream>
using namespace std;
int main(){
	
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
	
	cout << "�P�_���: " ;
	
	cin >> input_num ; 
		
	while( index2 <= input_num ){
		if(input_num % index2 == 0 ){
			cout << index2 << ", " ;
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
	//���յo�{��10��ƥH�W����ƧP�_�X���D:
	//�̧�67629137(8��) 567629137(9��) 6567629137(10��) 16567629137(11��) 
	
	
	return 0;
}



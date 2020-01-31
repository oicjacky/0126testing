#include<iostream>
using namespace std;
int main(){
	
	//т计=1, 耞借计=2
	int i ;
	cout << "块: т计=1, 耞借计=2 " << endl ; 
	cin >> i ; 
	if( i == 1){
	//т计
	int input_num , index2 ;
	
	cout << "т计: " ;
	
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
	//т借计
	int input_num , index2 = 1, counter = 0 ;
	
	cout << "耞借计: " ;
	
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
	//代刚祇瞷癸10计借计耞拜肈:
	//ㄌ67629137(8) 567629137(9) 6567629137(10) 16567629137(11) 
	
	
	return 0;
}



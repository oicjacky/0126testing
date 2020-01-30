#include<iostream>
using namespace std;
int main(){
	int input;
	
	cout << "輸入成績判斷合格與否: " ;
	cin >> input;
	if( input >= 60){
		cout << "you pass !" << endl;
	}else{
		cout << "False !" << endl;
	}
	//給你a, b，請你判斷a是不是b的倍數。
	//int a,b ;
	//while(cin >> a >> b ){
	//	if(a % b == 0){
	//		cout << "Yes." << endl;
	//	}else{
	//		cout << "No." << endl;
	//	}
	//}
	
	//民國100年以前，我國民法規定男女結婚最低限度的年齡則分別為 18 歲及 16 歲
	int sex, age ;
	
	cout << "輸入性別(男=1, 女=其他數字)及年齡: ";
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
	//while迴圈
	int index = 1 ;
	int n ;
	
	cout << endl << "input n : " ;
	cin >> n ;
	
	while( index <= n){
		cout << "NO. " << index << endl ;
		index = index + 1 ;
	}
	//找因數=1, 判斷質數=2
	int i ;
	cout << "輸入: 找因數=1, 判斷質數=2 " << endl ; 
	cin >> i ; 
	if( i == 1){
	//找因數
	int input_num , index2 ;
	
	cout << "找因數: " ;
	
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
	//找質數
	int input_num , index2 = 1, counter = 0 ;
	
	cout << "找質數: " ;
	
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



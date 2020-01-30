#include<iostream>
using namespace std;
int main(){
	//cout函數 
	cout<<"hello, u have done the Hello.cpp programming." <<"abccc" << endl;
	
	cout<<"hello, u have done the Hello.cpp programming."<< endl;
	cout<<"%%%%%%%%%%%"<< endl;
	
	cout<<"hello, u have done the Hello.cpp programming." 
	<<"abccc" 
	<< endl
	<<"hello, u have done the Hello.cpp programming."
	<< endl;
	cout<<"----------------------------------------------"<< endl;
	//加法 
	cout << "1911 + 83 = " << 1911+83 << endl; 
	
	cout<<"----------------------------------------------"<< endl;
	//宣告變數 
	int MP = 500 ;
	
	MP = MP + 10; 
	
	cout<< "Now, MP is " << MP  << endl;
	
	cout<<"----------------------------------------------"<< endl;
	//cin函數
	int input_var ;
	cin >> input_var ; 
	
	cout << "what u input's number plusing 5 is " 
		<< input_var + 5 
		<< endl;
	//付錢 
	int pocket, price;
	cin >> pocket >> price;
	
	cout << "the money u get back is " 
		<< pocket - price 
		<< endl;
	//輸入商品A和商品B的價錢，輸出價錢的和
	//int A, B;
	
	//while( cin >> A >> B ){
	//	cout << A + B << endl;
	//} 
	
	
	//交換輸入的兩數字順序 
	int numA ;
	int numC ;
	int numB ;
	
	cout << "交換輸入的兩數字順序 " << endl;
	cin >> numA >> numB ;

	numC = numA ;
    numA = numB ;
    numB = numC ;

    cout << numA << " " << numB << endl;
			 
	return 0;
}

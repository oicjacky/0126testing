#include<iostream>
using namespace std;
int main(){
	//cout��� 
	cout<<"hello, u have done the Hello.cpp programming." <<"abccc" << endl;
	
	cout<<"hello, u have done the Hello.cpp programming."<< endl;
	cout<<"%%%%%%%%%%%"<< endl;
	
	cout<<"hello, u have done the Hello.cpp programming." 
	<<"abccc" 
	<< endl
	<<"hello, u have done the Hello.cpp programming."
	<< endl;
	cout<<"----------------------------------------------"<< endl;
	//�[�k 
	cout << "1911 + 83 = " << 1911+83 << endl; 
	
	cout<<"----------------------------------------------"<< endl;
	//�ŧi�ܼ� 
	int MP = 500 ;
	
	MP = MP + 10; 
	
	cout<< "Now, MP is " << MP  << endl;
	
	cout<<"----------------------------------------------"<< endl;
	//cin���
	int input_var ;
	cin >> input_var ; 
	
	cout << "what u input's number plusing 5 is " 
		<< input_var + 5 
		<< endl;
	//�I�� 
	int pocket, price;
	cin >> pocket >> price;
	
	cout << "the money u get back is " 
		<< pocket - price 
		<< endl;
	//��J�ӫ~A�M�ӫ~B�������A��X�������M
	//int A, B;
	
	//while( cin >> A >> B ){
	//	cout << A + B << endl;
	//} 
	
	
	//�洫��J����Ʀr���� 
	int numA ;
	int numC ;
	int numB ;
	
	cout << "�洫��J����Ʀr���� " << endl;
	cin >> numA >> numB ;

	numC = numA ;
    numA = numB ;
    numB = numC ;

    cout << numA << " " << numB << endl;
			 
	return 0;
}

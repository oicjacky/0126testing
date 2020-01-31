#include<iostream>
using namespace std;

int main(){
	int select;
	
	cout << "input the command: " << endl;
	cout << "(1)New game. (2)Load. (3)Description. (4 or other)Exit. " << endl;
	// if
	cin >> select ;
	if( select == 1){
		cout << "(1)New game." << endl;
	}
	if( select == 2){
		cout << "(2)Load." << endl;
	}
	if( select == 3){
		cout << "(3)Description." << endl;
	}
	if( select == 4){
		cout << "(4)Exit." << endl;
	}
	// if-else
	if( select == 1){
		cout << "(1)New game." << endl;
	}else if( select == 2){
		cout << "(2)Load." << endl;
	}else if( select == 3){
		cout << "(3)Description." << endl;
	}else {
		cout << "(4)Exit." << endl;
	}
	
	
	return 0;
} 

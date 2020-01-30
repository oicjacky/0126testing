#include<iostream>
using namespace std;

int main(){
	//第1列：整數N、M，代表班上同學有N位、想查詢的成績有M筆。(N,M <= 100)
	//接著N列：座號1~座號N同學的成績。
	//接著M：欲查詢同學的座號。
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

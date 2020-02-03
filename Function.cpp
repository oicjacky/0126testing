#include<iostream>
// #include<函式庫名稱>
//可以用利用cplusplus.com查詢各個函式庫、函式的使用方法
//http://www.cplusplus.com/
using namespace std;
//*宣告函式在 using namespace std; 之下 、 int main() 之上
//回傳值型態 函式名稱(參數1型態 參數名稱1, 參數2型態 參數名稱2, ... ){
//    Do anything you want...
//    return 回傳值;             }
//洛亞網咖收費標準如下:
//前三小時，每小時30元
//第四小時起，每小時20元
//輸入說明
//一個整數 n 代表打咖 n 小時
//輸出說明
//打咖 n 小時共要付多少錢
int pay( int hour){
	if(hour < 3){
		return hour*30;
	}else{
		return 3*30 + (hour-3) * 20  ;
	}
}
// 函式也可以只是單純執行某段程式，而不是為了算出回傳值
// 若是想要宣告沒有回傳值的函式，回傳值型態可以打void
void bird()
{
    cout << "   .-." << endl;
    cout << "  /'v'\\" << endl;
    cout << " (/   \\)" << endl;
    cout << "='=\"=\"===< " << endl;
    cout << "mrf|_|" << endl;
}

void cat()
{
    cout << "         /\\_/\\" << endl;
    cout << "    ____/ o o \\" << endl;
    cout << "  /~____  =o= /" << endl;
    cout << " (______)__m_m)" << endl;
}

int main(){
	
	bird() ;
	cout << "麻雀說你好~" << endl ;
	 
	cat() ;
	cout << "貓咪說你好~" << endl ;
	
	//--------------------------------------------- 
	int n;
	
	cout << "一個整數 n 代表打咖 n 小時: " ;
	while( cin >> n){
		cout << pay(n) << "元" << endl ;
		cout << "一個整數 n 代表打咖 n 小時: " ;
	}
		
	return 0;
}

#include<iostream>
// #include<�禡�w�W��>
//�i�H�ΧQ��cplusplus.com�d�ߦU�Ө禡�w�B�禡���ϥΤ�k
//http://www.cplusplus.com/
using namespace std;
//*�ŧi�禡�b using namespace std; ���U �B int main() ���W
//�^�ǭȫ��A �禡�W��(�Ѽ�1���A �ѼƦW��1, �Ѽ�2���A �ѼƦW��2, ... ){
//    Do anything you want...
//    return �^�ǭ�;             }
//���Ⱥ��@���O�зǦp�U:
//�e�T�p�ɡA�C�p��30��
//�ĥ|�p�ɰ_�A�C�p��20��
//��J����
//�@�Ӿ�� n �N���@ n �p��
//��X����
//���@ n �p�ɦ@�n�I�h�ֿ�
int pay( int hour){
	if(hour < 3){
		return hour*30;
	}else{
		return 3*30 + (hour-3) * 20  ;
	}
}
// �禡�]�i�H�u�O��°���Y�q�{���A�Ӥ��O���F��X�^�ǭ�
// �Y�O�Q�n�ŧi�S���^�ǭȪ��禡�A�^�ǭȫ��A�i�H��void
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
	cout << "�³����A�n~" << endl ;
	 
	cat() ;
	cout << "�߫}���A�n~" << endl ;
	
	//--------------------------------------------- 
	int n;
	
	cout << "�@�Ӿ�� n �N���@ n �p��: " ;
	while( cin >> n){
		cout << pay(n) << "��" << endl ;
		cout << "�@�Ӿ�� n �N���@ n �p��: " ;
	}
		
	return 0;
}

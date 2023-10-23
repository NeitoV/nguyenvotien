#include <iostream>

using namespace std;

int tong(int a, int b);
int hieu(int a, int b){
	int hieu=0;
	cout<<"\nNhap a va b";
	cin>>a>>b;
	hieu = a-b;
	cout<<"\nHieu cua a va b: "<<hieu;
	return hieu
}

int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b);


int tich(int a, int b);
float thuong(int a, int b);

int tich(int a, int b) {
	cout << "\nNhap a :" << endl;
	cin >> a;
	cout << "\nNhap b :" << endl;
	cin >> b;
	int tich = 0;
	tich = a*b;
cout << " \nTich cua a va b la :" << tich << endl;	}
float thuong(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout <<tong(3,2);
	cout<<hieu(10,9);
	cout<< tich(6,9);
	system("pause");
	return 0;
}
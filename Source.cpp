#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b){
	int hieu=0;
	cout<<"\nNhap a va b";
	cin>>a>>b;
	hieu = a-b;
	cout<<"\nHieu cua a va b: "<<hieu;
	return hieu
}
=======
int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b);
>>>>>>> f0b5dd18827daa6671e1a5ae7601e59f876392de
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD
	cout<< hieu(10,5);
=======
	tong(3,2);
>>>>>>> f0b5dd18827daa6671e1a5ae7601e59f876392de
	system("pause");
	return 0;
}
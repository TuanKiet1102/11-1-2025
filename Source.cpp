#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b) {
    return a * b;
}

float thuong(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return 0;
    }
}

int main()
{
    int a, b;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
    cout << "Tich = " << tich(a, b) << endl;
    cout << "Thuong = " << thuong(a, b) << endl;
	system("pause");
	return 0;
}
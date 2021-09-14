#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
 char a;
void ChuyenDoi() {
   
    if ((a >= 'a') && (a <= 'z'))
    {
        int k = int(a) - 32;
        cout << " Ky tu hoa tuong ung voi  " << a << "  la :" << char(k);
    }
    else if ((a >= 'A') && (a <= 'Z'))
    {
        int k = int(a) + 32;
        cout << " Ky tu thuong tuong ung voi " << a << " la  : " << char(k);
    }
    else cout << " number  " << a;
}
int main()
{
    cout << " Nhap 1 ki tu   : ";
    cin >> a;
    ChuyenDoi();
    cout << endl;
    system("pause");
    return 0;
}

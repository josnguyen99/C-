#include<iostream> 
#include<string.h>
using namespace std;

int main()
{

    char a;
    cout << " Nhap 1 ki tu   : ";
    cin >> a;
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
    cout << endl;
    system("pause");
    return 0;
}
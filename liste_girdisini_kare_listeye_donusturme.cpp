#include <iostream>
using namespace std;
void dizidegis(int x) {
    int* p = new int[x];
    for (int a = 1; a <= x; a++) {
        cout << a << " de�erini girin: ";
        cin >> p[a];
        cout << "dizinin " << a << ". de�er: " << p[a] << endl;;
    }
    cout << "arr{";
    for (int _a = 1; _a <= x; _a++) {
        if (_a < x) {
            cout << p[_a] << ", ";
        }
        else {
            cout << p[_a];
        }
    }
    cout << "}" << "\nd�n��t�r�l�yor..." << endl;
    _sleep(1000);
    for (int f = 1; f <= x; f++) {
    p[f] = p[f] * p[f];
    }
    cout << "arr{";
    for (int _b = 1; _b <= x; _b++) {
        if (_b < x) {
            cout << p[_b] << ", ";
        }
        else {
            cout << p[_b];
        }
    }
    cout << "}";
}
int main()  {
    setlocale(LC_ALL, "TR");
    int dizisayi;
    cout << "dizi say�s�n� gir: ";
    cin >> dizisayi;
    dizidegis(dizisayi);
}

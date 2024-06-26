// CPP_SAO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void tg1(int h) {
    cout << "ham ve tam giac 1 độ cao : " <<h<< "\n";
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
            cout << endl;
    }
}
//
void tg2(int h) {
    cout << "ham ve tam giac 2 độ cao : " << h << "\n";

    for (int i = h; i >= 1 ; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
int main()
{
    int h;
    cout << "Nhap vao do cao h:  ";
    cin >> h;
    tg1(h);
    tg2(h);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    int a = 7;
    int b = 12;
    int c = 3;
    int d = 4;

    if ((a != 3 || b < 10 || c == 5)) {
        cout << "a) v \n";
    }
    else {
        cout << "a) f \n";
    }

    if((d > 8 && c == 3 || a >= 10)) {
        cout << "b) v \n";
    }
    else {
        cout << "b) f \n";
    }

    if ((d == 12 && a != 10)) {
        cout << "c) v \n";
    }
    else {
        cout << "c) f \n";
    }

    if ((c == 4 || d <= 6) && (a >= 5 && b != 9) || (!(a < 5))) {
        cout << "d) v \n";
    }
    else {
        cout << "d) f \n";
    }


    if ((a == 3 || b > 10 || d == 8)) {
        cout << "e) v \n";
    }
    else {
        cout << "e) f \n";
    }
}


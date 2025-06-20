#include <iostream>
#include <string>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstring>  
#include <array>
using namespace std;

array <string, 2> Split(string& s, char a)
{

    array <string, 2> Ar;
    byte buff = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == a) buff = 1;
        else
            Ar[buff] += s[i];

    }return Ar;
}

int main() {
    setlocale(LC_ALL, "Bulgarian");

    int* arr = new int [0];
    arr[0] = 22;
    cout <<arr [0];
    delete arr;
    return 0;
}




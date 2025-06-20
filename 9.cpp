#include <iostream>
#include <string>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstring>  
#include <array>
using namespace std;

array <string,2> Split(string& s, char a)
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

    int num[10];
    int hui=5;
    int* aee[hui];
    string name[10];
    string s;
    char ds;

    for (size_t i = 0; i < 4; i++)
    {
        getline(cin, s);
        num[i] = stoi(Split(s, ' ')[0]);
        name[i] = Split(s, ' ')[1];

    }

    for (size_t i = 0; i < 4; i++)
    {
        cout << num[i] << "  " << name[i]<<endl;
    }



    return 0;
}




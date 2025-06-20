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

struct kur {
    int razmer;
    string cvqt;

};

int main() {
    setlocale(LC_ALL, "Bulgarian");
    kur s;
    s.cvqt = "sinyo";
    s.razmer = 23;
    cout << s.cvqt;

}




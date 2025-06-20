#include <iostream>
#include <array>
#include <cstring>
#include <string>
#include <windows.h>
#include <algorithm>

using namespace std;
 int main(){

 setlocale(LC_ALL, "Bulgarian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

 int a[2];
 for (int i : a) {cout<<a;}
 
    sort(a, a + 2);
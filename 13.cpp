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

    class MyClass {
    public:
        int x;
    private:
        int y;
    };
    class Mycuc {
    public:
        void  sub(int a) { a++; }
    };
    class golqm :public MyClass,public Mycuc {
        public golqm (){}

    };

    struct kur {
        int razmer;
        string cvqt;

    };
    union pishki{
        int razmer;
        string cvqt;
    }

    int main() {

golqm carObj1("BMW", "X5", 1999);
    return 0;
        try {
            int age = 15;    
            golqm a = new golqm();
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
            if (age >= 18) {
                cout << "Access granted - you are old enough.";
            }
            else {
                throw (age);
            }
        }
        catch (int myNum) {
            cout << "Access denied - You must be at least 18 years old.\n";
            cout << "Age is: " << myNum;
        }

    }



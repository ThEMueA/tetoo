#include <iostream>

using namespace std;

double cubeSA(double& a) {
    a = pow(a,2) * 4;
    return 0;
}
double cubeV(double& a) {
    a = a * a * a;
    return 0;
}
double cubeTA(double& a) 
{ a = pow(a,2) * 6; return 0; }

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    setlocale(LC_ALL, "Bulgarian");
    /double a, b, c;
    cout << "dohod "<<endl;
    cin >> a;
    cout << "razhodi " << endl;
    cin >> b;
    cout << "spestqvanq " << endl;
    cin >> c;

    a = a - b;
    c = 100 (c / a);
    cout << "dohot " << c <<"%";/

    /double a;
    cin >> a;
    double A = a;
    cubeSA(a);
    cout << "Sa = " << a << endl;;
    a = A;
    cubeTA(a);
    cout << "Ta = " << a<<endl;
    a = A;

    cubeV(a);
    cout << "V = " << a<<endl;
    a = A;

    /

    /int k; cin >> k;
    if (k == 35) cout << "k is 35"<<endl;
    if (k > 0 && k < 100) cout << "k is grater than 0 and lower than 100";/

/
    int a; cin >> a;
    int b; cin >> b;
    if (a == b)cout << "Числата са равни";
    if (a > b)cout << "Първото е по-голямо";
    if (a < b)cout << "Второто е по-голямо";

    cout << (a > b) ? a:b;
    //vrusha bool

    cout << max(a, b);
    //vrusha chislo*/

    int age;
    cin >> age;
    if (age < 0 || age > 120) cout << "nevalidna vuzrast";
    if (age > 0 && age < 120)cout << "validna vuzrast";


}
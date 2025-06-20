#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int n,b;
	cin >> n;
	int a = 10;
	srand(time(0));

	for (int i = 0; i < n; i++) {
		
		b = (rand() % a) + 1;
		cout << b+1<<"";
	}
	if (b == 4||b==8)cout << "R.I.P";


	return 0;
	
}

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int a;
    cin>>a;
    if(a>0)
    {
        if(a%2==0)cout<<"chetno";
        else cout<<"nechetno";
    }

	return 0;
}

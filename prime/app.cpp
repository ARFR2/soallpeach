#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int m=0;
int num=0;
int max_div;

int prime(int n)
{
	if (n<= 3 && n>1 )
        return 1;
	//if ((n - 1) % 6 != 0 && (n + 1) % 6 != 0 )//for better performance(on paper) when numbers is like 1 to 1m (or more) use this.
		//return 0;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    max_div = (int)sqrt(n) +1 ;
    for (m = 5; m < max_div; m = m + 6)
    {
        if (n % m == 0 || n % (m + 2) == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char** argv)
{
	
    ifstream infile(argv[1]);
    while (infile >> num)
    {
        printf("%d\n", prime(num));
    }
    infile.close();
    return 0;
}

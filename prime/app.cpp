#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int m;
static int prime(int n)
{
	if (n<= 3)
        return n !=1;
	//if ((n - 1) % 6 != 0 && (n + 1) % 6 != 0 )//for better performance(on paper) when numbers is like 1 to 1m (or more) use this.
		//return 0;
    if (n % 2 == 0 || n % 3 == 0 )
        return 0;
    int max_div = (int)sqrt(n) +1;
    for (m = 5; m < max_div; m = m + 6)
    {
        if (n % m == 0 || n % (m + 2) == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char** argv)
{
    int num;
	
    FILE *file = fopen(argv[1], "r");
    char buf[2048];
    while (fgets(buf, 2048, file) != NULL)
    {
        num = atoi(buf);
        printf("%d\n", prime(num));
    }
    fclose(file);
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv)
{
	int num = 0;
    bool prime=true;
	ifstream infile(argv[1]);
	while (infile >> num)
	{
        if(num == 2 || num == 3)
        {
            cout << "1" << endl;
        }
		else if ((num - 1) % 6 != 0 && (num + 1) % 6 != 0)
		{
			cout << "0" << endl;
		}
		else
		{
			for (int i = 2; i <= sqrt(num); i++)
			{
				if (num % i == 0)
				{
					cout << "0" << endl;
                    prime=false;
					break;
				}
                
			}
		}
		if (prime=true)
		{
			cout << "1" << endl;
		}
	}
	infile.close();
	return 0;
}
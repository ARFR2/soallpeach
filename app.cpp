#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{

    int num = 0;
    ifstream infile(argv[1]);
    while (infile >> num)
    {

        if ((num + 1) % 6 == 0 || num == 2 || num == 3 || (num - 1) % 6==0)
        {
            cout << "1" <<endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    infile.close();
    return 0;
}
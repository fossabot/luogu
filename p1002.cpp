#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int Bx, By, max, may = 0;
    cin >> Bx >> By >> max >> may;
    int notAllow[9][2];
    notAllow[0][0] = max;
    notAllow[0][1] = may;
    notAllow[1][0] = max - 2;
    notAllow[1][1] = may - 1;
    notAllow[2][0] = max - 2;
    notAllow[2][1] = may + 1;
    notAllow[3][0] = max - 1;
    notAllow[3][1] = may - 2;
    notAllow[4][0] = max - 1;
    notAllow[4][1] = may + 2;
    notAllow[5][0] = max + 1;
    notAllow[5][1] = may - 2;
    notAllow[6][0] = max + 1;
    notAllow[6][1] = may + 2;
    notAllow[7][0] = max + 2;
    notAllow[7][1] = may + 1;
    notAllow[8][0] = max + 2;
    notAllow[8][1] = may - 1;
    for (int i = 0; i < Bx; i++)
	return 0;
}

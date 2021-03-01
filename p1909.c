#include <stdio.h>
int na=0;
long cost=1198100000;
int n[3],p[3];
int main(void)
{
	scanf("%d",&na);
	scanf("%d%d",&n[0],&p[0]);
	scanf("%d%d",&n[1],&p[1]);
	scanf("%d%d",&n[2],&p[2]);
	int tr=0;
	for (int i = 0; i < 3; ++i) {
		while (n[i]*tr<na) {
			tr++;
		}
		cost=(cost<(p[i]*tr))?cost:p[i]*tr;
		tr=0;
	}
	printf("%ld",cost);
	return 0;
}

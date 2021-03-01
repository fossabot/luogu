#include <stdio.h>
double pay = 0.0;
int cost = 0;
int main()
{
    scanf("%d", &cost);
    if (cost <= 150) {
	pay = 0.4463 * cost;
    } else if (150 < cost && cost <= 400) {
	pay = 66.945 + (cost - 150) * 0.4663;
    } else {
	pay = 183.52 + (cost - 400) * 0.5663;
    }
    printf("%0.1f", pay);
    return 0;
}

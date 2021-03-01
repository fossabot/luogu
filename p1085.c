#include <stdio.h>
int unhappy;
int unhappyDay;
int main() {
  for (int i = 0; i < 7; i++) {
    int classtime1, classtime2 = 0;
    scanf("%d%d", &classtime1, &classtime2);
    if ((classtime1 + classtime2) - 8 > 0 &&
        (classtime1 + classtime2) > unhappy) {
      unhappyDay = i + 1;
      unhappy = classtime1 + classtime2;
    }
  }
  printf("%d", unhappyDay);
  return 0;
}

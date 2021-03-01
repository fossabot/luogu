#include <stdio.h>
#include <string.h>

char nums[1010], output[1010];
int len;
int main() {
  scanf("%s", nums);
  len = strlen(nums);
  for (int i = 0; i < len; i++) {
    output[len - 1 - i] = nums[i];
  }
  printf("%s", output);
  return 0;
}

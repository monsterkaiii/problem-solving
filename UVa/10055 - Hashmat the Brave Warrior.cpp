#include <stdio.h>
int main(void) {
  long int a, b;
  while (scanf("%ld %ld", &a, &b) != EOF) {
    //scanf("%d %d", &a, &b);
    if (a>b) {
      printf("%ld\n", a-b);
    } else {
      printf("%ld\n", b-a);
    }
  }
  return 0;
}

#include <stdio.h>
int main(void) {
  int n;
  scanf("%d", &n);
  for (int x = 0; x < n; x++) {
    int s,d;
    scanf("%d %d", &s, &d);
    if (s < d) {
      printf("impossible\n");
    } else {
        if ((s - d) % 2 == 0) { 
          printf("%d %d\n", (s - d) / 2 + d, (s - d ) / 2);
        } else {
          printf("impossible\n");
        }
    }
  }

  return 0;
}

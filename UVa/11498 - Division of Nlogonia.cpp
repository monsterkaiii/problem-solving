#include <stdio.h>
int main(void) {
  int k;
  while (scanf("%d", &k) && k) {
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < k; i++) {
      int n, m;
      scanf("%d %d", &n, &m);
      if (x == n || y == m) {
        printf("divisa");
      } else if (x > n && y > m) {
        printf("SO");
      } else if (x > n && y < m) {
        printf("NO");
      } else if (x < n && y > m) {
        printf("SE");
      } else if (x < n && y < m) {
        printf("NE");
      }
      puts("");
    }
  }
  return 0;
}

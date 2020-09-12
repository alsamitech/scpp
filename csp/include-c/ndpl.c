#include <stdio.h>

int csp(void) {
  printf("Enter String to spam: ");
  char spam[128];
  scanf("%[^\n]", spam);
  while(1) {
    printf("%s\n", spam);
  }
}
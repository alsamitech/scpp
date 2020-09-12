#include <stdio.h>

int tscp(void) {
  printf("Enter String to spam: ");
  char spam[128];
  scanf("%[^\n]", spam);
  int times;
  int count;
  printf("Enter number of times to spam: ");
  scanf("%d", &times);
  while(times > count) {
    printf("%s\n", spam);
    count++;
  }
}
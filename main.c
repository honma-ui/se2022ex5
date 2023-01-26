#include <stdio.h>
#include <string.h>

int main(void) {
  size_t len;
  char str[] = "hello";
  len = strlen(str);
  printf("hello.%s:%d\n", str, len);
  return 0;
}
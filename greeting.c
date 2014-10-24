#include <stdio.h>

int greet(char *name) {
  printf("Hello %s\n", name);
}

int main(int argc, const char *argv[])
{
  greet("mo");
  return 0;
}

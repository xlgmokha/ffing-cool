#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static const char* alias_name = "ALTER_EGO";

char* greet(char* name) {
  char* alias = getenv(alias_name);
  char* buffer = (char*)malloc(128);
  snprintf(buffer, 128, "Hello %s!\n", alias == NULL ? name : alias);
  return buffer;
}

int main(int argc, const char *argv[])
{
  printf("%s\n", greet("mo"));
  return 0;
}

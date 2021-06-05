#include "utils.h"

#include <stdio.h> /* printf, scanf */

char readChar(char s[]) {
  char c;
  printf("%s", s);
  scanf("%c", &c);

  return c;
}
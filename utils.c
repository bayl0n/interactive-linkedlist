#include "utils.h"

#include <stdio.h>  /* printf, scanf */
#include <stdlib.h> /* malloc */

#include "vars.h" /* MAX_BUFFER_SIZE */

/*
 * Accepts an input string and returns a user inputted char
 */
char readChar(char s[]) {
  char c;
  printf("%s", s);
  scanf("%c", &c);

  return c;
}

/*
 * Accepts an input string and returns a user inputted string
 */
char* readString(char s[]) {
  char* newString = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
  printf("%s", s);
  scanf("%s", newString);

  return newString;
}

/*
 * Accepts an input string and returns a user inputted int
 */
int readInt(char s[]) {
  int i;
  printf("%s", s);
  scanf("%d", &i);

  return i;
}
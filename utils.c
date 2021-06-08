#include "utils.h"

#include <stdio.h>  /* printf, scanf, getchar */
#include <stdlib.h> /* malloc */
#include <string.h> /* strlen */

#include "vars.h" /* MAX_BUFFER_SIZE */

/*
 * Accepts an input string and returns a user inputted char
 */
char readChar(char s[]) {
  char c;
  printf("%s", s);
  scanf("%c", &c);
  while (getchar() != '\n')
    ;

  return c;
}

/*
 * Accepts an input string and returns a user inputted string
 */
char* readString(char s[]) {
  char* newString = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
  printf("%s", s);
  scanf("%s", newString);

  while (getchar() != '\n')
    ;
  newString[strlen(newString)] = '\0';
  return newString;
}

/*
 * Accepts an input string and returns a user inputted int
 */
int readInt(char s[]) {
  int i;
  printf("%s", s);
  scanf("%d", &i);
  while (getchar() != '\n')
    ;

  return i;
}
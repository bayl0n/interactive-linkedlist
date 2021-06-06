#include "menu.h"

#include <stdio.h>

#include "utils.h"

void menu() {
  char c;

  menu_help();

  while ((c = readChar("Enter an option [a/d/p/x] -> ")) != 'x') {
    switch (c) {
      case 'a':
        break;
      case 'd':
        break;
      case 'p':
        break;
      default:
        menu_help();
        break;
    }
  }
}

void menu_help() {
  printf("Menu Options\n");
  printf("a = Add a node\n");
  printf("d = Delete a node\n");
  printf("p = Print list\n");
}
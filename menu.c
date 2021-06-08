#include "menu.h"

#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"
#include "utils.h"

void menu() {
  char c;

  Node_t* head = (Node_t*)malloc(sizeof(Node_t));
  head = NULL;

  menu_help();

  while ((c = readChar("Enter an option [a/d/p/x] -> ")) != 'x') {
    switch (c) {
      case 'a':
        insert_menu_list(&head);
        break;
      case 'd':
        break;
      case 'p':
        display_list(head);
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

void insert_menu_list(Node_t** head) {
  int* num = (int*)malloc(sizeof(int));
  *num = readInt("Number to be inserted>");
  insert_first(head, *num);
}
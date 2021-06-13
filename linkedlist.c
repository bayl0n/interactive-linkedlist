#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>

void insert_first(Node_t** head, int data) {
  Node_t* newNode = (Node_t*)malloc(sizeof(Node_t));
  newNode->data = data;
  newNode->next = *head;

  *head = newNode;
}

void display_list(Node_t* head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("\n");
}

void reverse_list(Node_t** head) {}
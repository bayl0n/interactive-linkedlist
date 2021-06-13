#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
  int data;
  struct Node* next;
} Node_t;

void insert_first(Node_t**, int);
void display_list(Node_t*);
void reverse_list(Node_t**);

#endif
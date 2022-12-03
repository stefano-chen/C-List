#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
  int val;
  struct Nodo *next;
} node;

node *head = NULL;

bool isEmpty() { return (head == NULL); }

int size() {
  int len = 0;
  node *p = head;
  while (p != NULL) {
    len += 1;
    p = p->next;
  }
  return len;
}

void append(int val) {
  if (isEmpty()) {
    head = (node *)malloc(sizeof(node));
    head->val = val;
    head->next = NULL;
  } else {
    node *p = head;
    while (p->next != NULL) {
      p = p->next;
    }
    p->next = (node *)malloc(sizeof(node));
    p->next->val = val;
    p->next->next = NULL;
  }
}

void destroy() {
  node *p;
  while (head != NULL) {
    p = head;
    head = head->next;
    free(p);
  }
}

void addTop(int val) {
  node *p = (node *)malloc(sizeof(node));
  p->val = val;
  p->next = head;
  head = p;
}

void printList() {
  if (isEmpty()) {
    printf("Empty List\n");
  } else {
    node *p = head;
    while (p != NULL) {
      printf("%d ", p->val);
      p = p->next;
    }
    printf("\n");
  }
}

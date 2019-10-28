#include "header.h"
#include <stdio.h>
#include <stdlib.h>
void print_list(struct node * p){
  printf("[ ");
  while (p != NULL){
    printf("%d ",p->val);
    p = p->next;
  }
  printf("]\n");
}

struct node* insert_front(struct node * prevNode, int newVal){
  struct node* newNode = malloc(sizeof(struct node));
  newNode->val = newVal;
  newNode->next = prevNode;
  return newNode;
}

struct node* remove_list(struct node * first){
  while (first->next != NULL){
    struct node *rmv = first->next;
    first ->next = (first->next)->next;
    free(rmv);
  }
  struct node *rmv = first;
  first = NULL;
  free(rmv);
  return first;   
}

struct node * remove_node(struct node* front, int data){
  struct node * current = front;
  struct node * prev = front;
  while(current->val != data && current->next != NULL){
    prev = current;
    current = current->next;
  }
  if (current->next == NULL && current->val != data){
    return NULL;
  }
  if (current->val == data){
    prev->next = current->next;
    free(current);
  }
  return front;
}
  
  

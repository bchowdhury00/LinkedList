
#include <stdio.h>

struct node {int val; struct node *next;};

void print_list(struct node* p){
  printf("[ ");
  while (p->next != NULL){
    printf("%d ",p->next);
  }
  

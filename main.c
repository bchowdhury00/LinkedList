#include "linkedList.c"

int main(){
  struct node* p = NULL;
  printf("Printing empty list\n");
  print_list(p);
  printf("Adding 1-9 to the list\n");
  int i;
  for(i = 9; i >= 0; i--){
    p = insert_front(p,i);
  }
  printf("Printing list with 1-9 added\n");
  print_list(p);
  printf("Removing node with value 4 from the list\n");
  remove_node(p,4);
  printf("Printing list with 4 removed\n");
  print_list(p);
  printf("Removing everything from the list\n");
  p = remove_list(p);
  printf("Printing list with everything removed\n");
  print_list(p);
}

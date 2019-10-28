struct node{int val; struct node* next;};
void print_list(struct node* p);
struct node* insert_front(struct node * prevNode, int newVal);
struct node* remove_list(struct node * first);
struct node * remove_node(struct node* front, int data);

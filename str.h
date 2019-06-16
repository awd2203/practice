
typedef struct node{
    char data[30];
    struct node* next;
    struct node* previous;
}Node;

typedef struct List{
  Node* front;
  Node* back;
}List;


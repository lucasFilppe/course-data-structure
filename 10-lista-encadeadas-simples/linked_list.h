#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct _simple_node SimpleNode;
typedef struct _linked_list LinkedList;

SimpleNode SimpleNode_Create(int val);

//cria lista
LinkedList* LinkedList_create;

//adiciona primeiro elemento
void LinkedList_add_first(LinkedList *L, int val);


#endif

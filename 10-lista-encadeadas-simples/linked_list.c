#inlcude "linked_list.h"

typedef struct _simple_node{
  int val;
  struct _simple_node *next;
  
}SimpleNode;

typedef struct _linked_list{
  SimpleNode *begin;
}LinkedList;

SimpleNode* SimpleNode_Create(int val){
  SimpleNode* snode = (SimpleNode*)malloc(sizeof(SimpleNode));
  snode->val = val;
  snode->next = NULL;

  return snode;
}

LinkedList* LinkedList_create(){
  LinkedList *L = (LinkedList*)malloc(sizeof(LinkedList));
  L->begin = NULL;

  return L;
}

void LinkedList_add_first(LinkedList *L, int val){
    SimpleNode *p = SimpleNode_Create(val);
    p->next = L->begin;
    L->begin = p;
  
}
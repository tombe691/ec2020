#include <stddef.h>
#include <stdlib.h>
#include "linked_list.h"

struct node {
  struct node *next;
  void *data;
};

static struct node *new_node(void *d) {
  struct node *p = malloc(sizeof (struct node));
  *p = (struct node) {NULL, d};
  return p;
}    

struct linked_list {
  struct node *first;
  int n; 
};

struct linked_list *new_list(void) {
  struct linked_list *l = malloc(sizeof (struct linked_list));
  *l = (struct linked_list) {NULL, 0};
  return l;
}

int size(struct linked_list *l) {
  return l->n;
}

void add_first(struct linked_list *l, void *new_data) {
  struct node *pnew = new_node(new_data);
  pnew->next = l->first;
  l->first = pnew;
  l->n++;
}

void add_last(struct linked_list *l, void *new_data) {
  struct node *e = new_node(new_data);
  l->n++;
  if (l->first == NULL)   // listan tom?
    l->first = e;
  else {
    struct node *p = l->first;
    while (p->next != NULL)   // sök den sista noden
      p = p->next;
    p->next = e;
  } 
}

void *remove_first(struct linked_list *l) {
  struct node *pfirst = l->first;
  if (pfirst != NULL) {     
    l->first = pfirst->next;
    void *r = pfirst->data;
    free(pfirst);
    l->n--;
    return r;
  }
  else
    return NULL;
}

void *get_first(struct linked_list *l) {
  if (l->first != NULL)
    return l->first->data;
  else
    return NULL;
}

void *get_last(struct linked_list *l) {
    if (l->n > 0) {
      struct node *p = l->first;
      while (p->next != NULL)
         p = p->next;
      return p->data;    
    }
    else
      return NULL;
}

     
 
  
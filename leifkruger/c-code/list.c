#include <stddef.h>
#include <stdlib.h>
#include "list.h"

struct node {
  struct node *next, *prev;
  void *data;
};

struct list {
  struct node *start, *current;
  int n, index; 
};

static struct node *new_node(void *d) {
  struct node *p = malloc(sizeof (struct node));
  *p = (struct node) {NULL, NULL, d};
  return p;
}    

struct list *new_list(void) {
  struct node *p = new_node(NULL); 
  p->next = p; p->prev = p;    // startnoden pekar på sig själv
  struct list *l = malloc(sizeof (struct list));
  *l = (struct list) {p, p, 0, -1};
  return l;
}

static void insert_before(struct list *l, struct node *p, void *new_elem) { 
  struct node *pnew = new_node(new_elem); 
  pnew->next = p;
  pnew->prev = p->prev;
  p->prev->next = pnew;
  p->prev = pnew;
  l->n++; 
  l->current = pnew;
}

static void *remove_node(struct list *l, struct node *p) { 
  if (p != l->start) {     // startnoden kan inte tas bort
    p->prev->next = p->next;
    p->next->prev = p->prev;
    l->n--; 
	l->current = p->next;
	if (l->current == l->start)
      l->index = -1;
    void *r = p->data;
    free(p);
    return r;
  }
  else
    return NULL;
}

static void goto_position(struct list *l, int i) {
  if (i != l->index) {
	if (i > l->index && i < l->n) {
      for (; l->index < i; l->index++)
         l->current = l->current->next; 
    }
	else if (i < l->index && i >= 0) {
      for (; l->index > i; l->index--)
         l->current = l->current->prev; 
    }
    else {
	  l->current = l->start;
	  l->index = -1;
	}
  }
}

int size(struct list *l) {
  return l->n;
}

void add_first(struct list *l, void *new_elem) {
  insert_before(l, l->start->next, new_elem);
  l->index = 0;
}

void add_last(struct list *l, void *new_elem) {
  insert_before(l, l->start, new_elem);
  l->index = l->n - 1;
}  

void *remove_first(struct list *l) {
   return remove_node(l, l->start->next); 
}

void *remove_last(struct list *l) {
  return remove_node(l, l->start->prev); 
}

void *get(struct list *l, int i) {
  goto_position(l, i);
  return l->current->data;
}

void set(struct list *l, int i, void *new_elem) {
  goto_position(l, i);
  if (l->current != l->start)  // startnoden kan inte ändras
    l->current->data = new_elem;
} 

_Bool insert(struct list *l, int i, void *new_elem) {
  if (i == l->n) {
    add_last(l, new_elem);
	return 1;
  }
  else {
    goto_position(l, i);
	if (l->current != l->start) {
      insert_before(l, l->current, new_elem);
	  return 1;
	}
	else
	  return 0;
  } 
}

void *remove_elem(struct list *l, int i) {
  goto_position(l, i);
  return remove_node(l, l->current);
	
}    









   

 
 
  
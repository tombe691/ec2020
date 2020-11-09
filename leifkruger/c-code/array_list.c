#include <stddef.h>
#include <stdlib.h>
#include "array_list.h"

#define CAPACITY 100
struct array_list {
  void *a[CAPACITY];
  int n;
};

struct array_list *new_list(void) {
  struct array_list *l = malloc(sizeof (struct array_list));
  l->n = 0;
  return l;
}

void *get_elem(struct array_list *l, int index) {
  if (index >= 0 && index < l->n)
    return l->a[index];
  else
    return NULL;
}

int size(struct array_list *l) {
  return l->n;
}

_Bool add_last(struct array_list *l, void *new_data) {
  if (l->n < CAPACITY) {
    l->a[l->n++] = new_data;
    return 1;
  }
  else
    return 0;
}

// Övn 14.2
void *remove_last(struct array_list *l) {
  if (l->n > 0) {
    l->n--;
    return l->a[l->n];
  }
  else 
    return NULL;
}

// Övn 14.3
_Bool insert_elem(struct array_list *l, int index, void *new_data) {
   if (index >= 0 && index < l->n && l->n < CAPACITY) {
     for(int i = l->n - 1; i >= index; i--)
       l->a[i+1] = l->a[i];
     l->a[index] = new_data;
     l->n++;
     return 1;
   }
   else
     return 0;
}
            
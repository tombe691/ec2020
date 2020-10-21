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

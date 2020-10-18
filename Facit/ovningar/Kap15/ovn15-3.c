static void add_last_node(struct node **p, struct node *e) {
  if (*p == NULL)
    *p = e;
  else
	add_last_node(&(*p)->next, e);
}

void add_last(struct linked_list *l, void *new_data) {
  struct node *pnew = new_node(new_data);
  add_last_node(&l->first, pnew);
  l->n++;
}

static void remove_last_node(struct node **p) {
  if ((*p)->next == NULL) 
	free(*p);
  else
	remove_last_node(&(*p)->next);
}

void remove_last(struct linked_list *l) {
  if (l->first != NULL) { 
    remove_last_node(&l->first);  
    l->n--;
  }
}

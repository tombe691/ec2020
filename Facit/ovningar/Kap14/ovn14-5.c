void add_first(struct list *l, void *new_elem) {
  insert_before(l, l->start->next, new_elem);
  l->index = 0;
}

void *remove_first(struct list *l) {
   return remove_node(l, l->start->next); 
}

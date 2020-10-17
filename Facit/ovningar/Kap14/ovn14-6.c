void *remove_elem(struct list *l, int i) {
  goto_position(l, i);
  return remove_node(l, l->current);	
}

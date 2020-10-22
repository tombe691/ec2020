static void remove_last_node(struct node *p) {
  if (p->next->next == NULL) {  // är detta nästa sista noden?
	free(p->next);
    p->next = NULL;
  }
  else
	remove_last_node(p->next);
}

void remove_last(struct linked_list *l) {
  if (l->first != NULL) { 
    if (l->first->next == NULL) {  // finns det bara en nod?
      free(l->first);
      l->first = NULL;
    }
    else 
      remove_last_node(l->first);  
    l->n--;
  }
}
// L�gg till f�ljande rad i filen array_list.h

void *remove_last(struct array_list *l) ;

// L�gg till f�ljande funktion i filen array_list.c

void *remove_last(struct array_list *l) {
  if (l->n > 0) {
    l->n--;
    return l->a[l->n];
  }
  else 
    return NULL;
}

            
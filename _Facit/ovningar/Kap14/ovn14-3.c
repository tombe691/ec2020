// Lägg till följande rad i filen array_list.h

_Bool insert(struct array_list *l, int index, void *new_data);

// Lägg till följande funktion i filen array_list.c

_Bool insert(struct array_list *l, int index, void *new_data) {
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

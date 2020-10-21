// Filen array_list.h

struct array_list;

struct array_list *new_list(void);
void *get_elem(struct array_list *l, int index);
int size(struct array_list *l);
_Bool add_last(struct array_list *l, void *new_data);

void *remove_last(struct array_list *l);
_Bool insert_elem(struct array_list *l, int index, void *new_data);
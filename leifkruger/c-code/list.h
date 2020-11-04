// Filen list.h
struct list;
struct list *new_list(void);
int size(struct list *l);
void add_first(struct list *l, void *new_elem);
void add_last(struct list *l, void *new_elem);
void *remove_first(struct list *l);
void *remove_last(struct list *l);
void *get(struct list *l, int i);
void set(struct list *l, int i, void *new_elem);
_Bool insert(struct list *l, int i, void *new_elem);
void *remove_elem(struct list *l, int i); 

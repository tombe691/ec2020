// Filen linked_list.h
struct linked_list;  // deklaration av en ofullständig typ
struct linked_list *new_list(void);
int size(struct linked_list *l);
void add_first(struct linked_list *l, void *new_elem);
void add_last(struct linked_list *l, void *new_data);
void *remove_first(struct linked_list *l);
void *get_first(struct linked_list *l);
void *get_last(struct linked_list *l);

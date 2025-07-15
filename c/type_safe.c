typedef struct {
    int value;
} Foo;
    
List(int) int_list = {0};
list_prepend(&int_list, 3);

List(Foo) foo_list = {0};
list_prepend(&foo_list, (Foo){ 5 });
list_prepend(&foo_list, (Foo){ 3 });

list_for(item, &foo_list) {
    printf("%i\n", item->value);
}

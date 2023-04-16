#include <stdio.h>

struct {
    unsigned int field1 : 1;
    unsigned int field2 : 2;
    struct {
        unsigned int field3 : 3;
        unsigned int field4 : 4;
    } subfield;
} my_struct;

int main() {
    my_struct.field1 = 1;
    my_struct.field2 = 2;
    my_struct.subfield.field3 = 5;
    my_struct.subfield.field4 = 15;

    printf("field1 = %u\n", my_struct.field1);
    printf("field2 = %u\n", my_struct.field2);
    printf("field3 = %u\n", my_struct.subfield.field3);
    printf("field4 = %u\n", my_struct.subfield.field4);
    
    return 0;
}


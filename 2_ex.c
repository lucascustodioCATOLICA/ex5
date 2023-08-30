#include <stdio.h>

int main() {
    int list[] = {66, -44, 2, 1};
    int size_list = sizeof(list) / sizeof(int);

    for (int j = 0; j < size_list; j++) {
        for (int i = 0; i < size_list; i++) {
            if(list[i] > list[i+1]) {
                int temp = list[i+1];
                list[i+1] = list[i];
                list[i] = temp;
            }
        }
    }

    printf("MENOR VALOR: %d \n", list[0]);
    printf("MAIOR VALOR: %d", list[size_list-1]);

    return 0;
}


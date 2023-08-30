#include <stdio.h>

int main() {
    int list[] = {4, 3, 2, 1};
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

    for (int i = 0; i < size_list; i++) {         
         printf("%d ", list[i]);
    }

    return 0;
}


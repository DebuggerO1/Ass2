#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void insert(int table[], int key) {
    int index = hashFunction(key);
    int startIndex = index; 
    do {
        if (table[index] == -1) {
            table[index] = key;
            return;
        }
        index = (index + 1) % TABLE_SIZE;
    } while (index != startIndex);
    printf("Hash table is full. Cannot insert %d\n", key);
}

void display(int table[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] != -1)
            printf("Index %d: %d\n", i, table[i]);
        else
            printf("Index %d: EMPTY\n", i);
    }
}

int main() {
    int table[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = -1;
    }

    int choice, key;
    while(1) {
        printf("\n1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(table, key);
                break;
            case 2:
                display(table);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

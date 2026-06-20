// 1. Two Sum

#include <stdlib.h>

#define TABLE_SIZE 20011

typedef struct Node {
    int key;
    int value;
    struct Node *next;
} Node;

static Node *hashTable[TABLE_SIZE];

static int hash(int key) {
    return ((unsigned int)key) % TABLE_SIZE;
}

static void insert(int key, int value) {
    int h = hash(key);

    Node *node = malloc(sizeof(*node));
    node->key = key;
    node->value = value;
    node->next = hashTable[h];

    hashTable[h] = node;
}

static int find(int key) {
    int h = hash(key);

    Node *curr = hashTable[h];
    while (curr) {
        if (curr->key == key) {
            return curr->value;
        }
        curr = curr->next;
    }

    return -1;
}

static void freeTable(void) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node *curr = hashTable[i];

        while (curr) {
            Node *next = curr->next;
            free(curr);
            curr = next;
        }

        hashTable[i] = NULL;
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];

        int idx = find(complement);

        if (idx != -1) {
            int *result = malloc(2 * sizeof(int));

            result[0] = idx;
            result[1] = i;
            *returnSize = 2;

            freeTable();
            return result;
        }

        insert(nums[i], i);
    }

    freeTable();
    *returnSize = 0;
    return NULL;
}
/**
 * Note: The returned array must be malloced,
 * assume caller calls free().
 */

#include <stdlib.h>

#define PRIME 100003

struct node {
    int index;
    struct node *next;
};

int hash(int value) {
    int h = value % PRIME;
    if (h < 0)
        h += PRIME;
    return h;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    *returnSize = 2;

    int *result = malloc(2 * sizeof(int));

    // Allocate the entire hash table
    struct node *ht = malloc(PRIME * sizeof(struct node));

    // Initialize hash table
    for (int i = 0; i < PRIME; i++) {
        ht[i].index = -1;
        ht[i].next = NULL;
    }

    // -------------------------
    // STEP 1: Build hash table
    // -------------------------

    for (int i = 0; i < numsSize; i++) {

        int key = hash(nums[i]);

        // Empty bucket
        if (ht[key].index == -1) {

            ht[key].index = i;
        }

        // Collision
        else {

            struct node *new_node =
                malloc(sizeof(struct node));

            new_node->index = i;
            new_node->next = NULL;

            struct node *tmp = &ht[key];

            while (tmp->next != NULL) {
                tmp = tmp->next;
            }

            tmp->next = new_node;
        }
    }

    // -------------------------
    // STEP 2: Find complement
    // -------------------------

    for (int i = 0; i < numsSize; i++) {

        int complement = target - nums[i];

        int key = hash(complement);

        // No number exists in this bucket
        if (ht[key].index == -1) {
            continue;
        }

        // Check first node
        if (nums[ht[key].index] == complement &&
            ht[key].index != i) {

            result[0] = i;
            result[1] = ht[key].index;

            free(ht);

            return result;
        }

        // Check collision nodes
        struct node *tmp = ht[key].next;

        while (tmp != NULL) {

            if (nums[tmp->index] == complement &&
                tmp->index != i) {

                result[0] = i;
                result[1] = tmp->index;

                free(ht);

                return result;
            }

            tmp = tmp->next;
        }
    }

    free(ht);

    return result;
}
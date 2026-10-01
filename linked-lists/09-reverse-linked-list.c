#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/* Reverse each link while walking the list once. */
struct ListNode *reverseList(struct ListNode *head) {
    struct ListNode *previous = NULL;
    struct ListNode *current = head;

    while (current != NULL) {
        struct ListNode *nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    return previous;
}

static struct ListNode *createList(const int *values, int size) {
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;

    for (int index = 0; index < size; index++) {
        struct ListNode *node = malloc(sizeof(*node));
        if (node == NULL) {
            while (head != NULL) {
                struct ListNode *nextNode = head->next;
                free(head);
                head = nextNode;
            }
            return NULL;
        }
        node->val = values[index];
        node->next = NULL;
        if (tail == NULL) {
            head = node;
        } else {
            tail->next = node;
        }
        tail = node;
    }
    return head;
}

static void assertListEquals(const struct ListNode *head, const int *values,
                             int size) {
    for (int index = 0; index < size; index++) {
        assert(head != NULL);
        assert(head->val == values[index]);
        head = head->next;
    }
    assert(head == NULL);
}

static void freeList(struct ListNode *head) {
    while (head != NULL) {
        struct ListNode *nextNode = head->next;
        free(head);
        head = nextNode;
    }
}

int main(void) {
    int firstValues[] = {1, 2, 3, 4, 5};
    int firstExpected[] = {5, 4, 3, 2, 1};
    struct ListNode *first = createList(firstValues, 5);
    assert(first != NULL);
    first = reverseList(first);
    assertListEquals(first, firstExpected, 5);
    freeList(first);

    int secondValues[] = {1, 2};
    int secondExpected[] = {2, 1};
    struct ListNode *second = createList(secondValues, 2);
    assert(second != NULL);
    second = reverseList(second);
    assertListEquals(second, secondExpected, 2);
    freeList(second);

    assert(reverseList(NULL) == NULL);
    puts("Reverse Linked List: all tests passed");
    return 0;
}
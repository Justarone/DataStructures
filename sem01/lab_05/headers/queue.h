#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QUEUE_SIZE 100

typedef struct node_t
{
    int data;
    struct node_t *next;
} node_t;

// the queue, which is using list will look like just node
// (I am going to realize interface, where I store just the
// pointer on the first element in the queue)
typedef struct
{
    node_t *pin;  // tail of the queue
    node_t *pout; // head of the queue
    int size;     // size of the queue
} queue_l;

typedef struct
{
    double data[QUEUE_SIZE]; // pointer on the dynamic array, which contains elements of the queue
    int is_empty;            // variable to check the queue overflow
    int pin;                 // index of the place to come in the queue
    int pout;                // index of the place to come out from the queue
} queue_a;

#endif
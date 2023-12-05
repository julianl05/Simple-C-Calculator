#include "ccalc.h"
#include <stdio.h>
#include <stdlib.h>

// Declare a structure type (struct Node) to describe how a list node
// should look like in memory:
struct Node {
  long long v;          // 8 byte signed value
  struct Node *next;    // followed by a pointer to another node
};

/* clistsum: like arraysum but works on a list of elements */
long long
clistsum(long long cres, void *head) {
  struct Node *node = head;

  // You need to iterate over the nodes and for each node
  // do: cres = csum(cres, node->v)
  // To get you started  we already have set a "node" variable above
  // that is set pointing to the first node on the list
  *((int *)0) = 1;

  VPRINT("  FINAL cres:%lld SUM_POSITIVE=%lld SUM_NEGATIVE=%lld : node:%p\n",
	 cres, SUM_POSITIVE, SUM_NEGATIVE, node);
  return cres;
}

// This function should read values from standard in and add nodes
// to the list
void *
clistsum_read(void)
{
  struct Node *head = NULL; // pointer variable to point to the first node of a linked list
  struct Node *tmp = NULL;  // pointer to variable to point to nodes as we create them
  long long val;            // variable to hold values read from standard input
  int n;                    // variable to hold return value from scanf (number of values read)

  // use fprintf to print a message to the user on stderr
  // see man fprintf and C book
  fprintf(stderr, "Enter values (use '.' to end): ");   
  while (1) {
    // use scanf to read in a 64 bit decimal number from stdin (see man scanf and C Book)
    // thankfully scanf will convert the ascii version of the number
    // into a binary value and place that binary value in the val variable
    // given the call below
    n = scanf("%lld", &val);
    VPRINT("n=%d v=%lld\n", n, val);
    if (n!=1) break;
    // Well finally lets use the c library calls to get memory from the heap
    // to build a linked list!
    // Read "man malloc" to learn what the c library functions malloc and free do in detail
    // C book has examples
    //   - malloc will get memory from the heap and return the address.
    //   - remember you can use sizeof(<type>) to determine the size of any C type including
    //     structures that have been declared -- like struct Node ;-)
    // force crash here : replace with your code
    *((int *)0) = 1;
  }
  while (getchar()!='\n');
  return head;
}

void clistsum_free(void *head)
{
  struct Node *hnode = head;  // pointer that always points to the first node
  struct Node *tmp = head;    // tmp pointer that we use to point to the node we are going to free

  // Time to iterate over the list and free the memory back to the heap
  while (hnode != NULL) {
    // see man free and examples in C Book
    // force crash -- replace with your code here
    *((int *)0) = 1;
  }
  return;
}

/***************************************
* CSE2031 – Lab 6 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>
#include <stdlib.h>

void insertBegin(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

main()
{
   head = NULL;

   insertBegin(100);
   insertBegin(200);
   insertBegin(300);
   insertBegin(400);   
   insertBegin(500);

   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");  
}   

void insertBegin(int dat){
   struct node * newNode;
   newNode = malloc(sizeof(struct node));
   newNode -> data = dat;
   newNode -> next = head;
   head = newNode;
}

// The labH1.c there is no dynamic heap memory allocated for the 
// pointer newNode. This means its memory is dumped after the function
// exits.  
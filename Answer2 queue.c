#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct queue {

       int data[MAX];
       int rear;
};
 int font = 0;
 void ins (struct queue *, int);
 void del(struct queue *);
 void display(struct queue *);
 int isFull(int);
 int isEmpty(int );
int main () {

   struct  queue myqueue;
   myqueue.rear=0;

    while (1){
             int ch , item;
        printf("\n Enter your choice : ");
        printf("\n ");
        printf("\n 1.Insert value :");
        printf("\n 2.Delete value : ");
        printf("\n 3.display value : ");
        printf("\n 4.Exit \n ");

       scanf("%d", &ch);


       switch (ch){
           case 1:
               printf(" Enter a value :  ");
               scanf("%d ", &item);
               ins(&myqueue ,item);
               break;
           case 2:
                 del(&myqueue);
                 break;
           case 3:
               display(&myqueue);
               break;

           case 4:
            exit(0);

       }

    }

  return 0;
}

void ins(struct queue *myqueue, int item){
if(isFull(myqueue -> rear)){
      printf("\n My Queue is Full");
  }
  else{
         myqueue ->data[ myqueue -> rear]   = item;
         myqueue -> rear++;
         printf("The vlaue is insert queue %d ",item);
  }

}

void del(struct queue *myqueue){

            if(isEmpty(myqueue ->rear)){

                          printf("\n Queue is Empty ");
            }
            else{
                        printf(" \n %d is deleted", myqueue ->data[font]);

                        for(int i =0 ; i<myqueue ->rear -1 ; i++){

                            myqueue ->data[i] = myqueue ->data[i + 1];
                        }

                           myqueue ->rear--;
            }
}

void  display(struct queue *myqueue){

       if(isEmpty(myqueue ->rear)){

            printf("queue is Empty");
       }
       else{

                              for(int i =0; i<myqueue ->rear; i++){

                                    printf("%d ",myqueue ->data[i]);
                              }
                printf("\n");
       }

}

int isEmpty(int rear){

    if(font == rear){

return 0;
    }
    else{
        return 0;
    }
}

int isFull(int rear){
     if(rear == MAX){
           return 1;
     }
     else{
        return 0;
     }
}

#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 100
int top=-1,arr[MAX],down=0;

// void push(){
//     if(top>99){
//         printf("stack underflow \n");
//     }
//     else{
//         top++;
//         printf("enter the element \n");
//         scanf("%d",&arr[top]);
//     }
// }

// void pop(){
//     if(top<0){
//         printf("stack underflow \n");
//     }
//     else{
//         arr[top]=0;
//         top--;
//     }
// }

// void display(){
//     int x=top;
//     for(x;x>=0;x--){
//         printf("%d ",arr[x]);
//     }
// }

// int main(){
//     printf("stack implementation \n");
//     int choice;
//     do{
//         printf("\n 1.push \n 2.pop\n3.display\n4.exit\n");
//         printf("enter your choice \n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             push();
//             break;
//             case 2:
//             pop();
//             break;
//             case 3:
//             display();
//             break;
//             case 4:
//             exit(0);
//         }
//     }while(1);
// }


// void enqueue(){
//     if(top>99){
//         printf("queue overflow \n");
//     }
//     else{
//         top++;
//         printf("enter the elment \n");
//         scanf("%d",&arr[top]);
//     }
// }

// void dequeue(){
//     if(top<0){
//         printf("queue underflow \n");
//     }
//     else{
//         arr[down++]=0;
//     }
// }

// void display(){
//     for(int i=down;i<=top;i++){
//         printf("%d ",arr[i]);
//     }
// }


// int main(){
//     printf("queue implementation \n");
//     int choice;
//     do{
//         printf("\n 1.enqueue \n 2.dequeue\n3.display\n4.exit\n");
//         printf("enter your choice \n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             enqueue();
//             break;
//             case 2:
//             dequeue();
//             break;
//             case 3:
//             display();
//             break;
//             case 4:
//             exit(0);
//         }
//     }while(choice!=4);
// }

typedef struct node{
    int data;
    struct node *link;
}node;

int main(){
    node *head=NULL;

   node *first=NULL;
   first=(node *)malloc(sizeof(node));
   first->data=76;
   first->link=NULL;

   node *second=NULL;
   second=(node *)malloc(sizeof(node));
   second->data=45;
   second->link=NULL;

   node *third=NULL;
   third=(node *)malloc(sizeof(node));
   third->data=98;
   third->link=NULL;

   head=first;
   first->link=second;
   second->link=third;

while(head!=NULL){
    printf("%d ",head->data);
    head=head->link;
}
}

// call by reference
// void swappp(int *a,int *b){
//     *a=*a + *b;
//     *b=*a - *b;
//     *a=*a - *b;
// }

// int main(){
//     int a=4,b=5;
//     printf("%d %d\n",a,b);
//     swappp(&a,&b);
//     printf("%d %d",a,b);
// }
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int c,top=-1;

// op ballard superb donkey podu

struct node {
  int item;
  struct node* left;
  struct node* right;
}*root,*temp,*a,*stack[MAX];

void push(struct node *y){


    stack[++top]=y;
}

void pop()
{

    if(top==-1)
    {

    }

    else
    {

    a=stack[top];
    --top;


    }

}

void preorder(struct node* root){

temp=root;
while(c<=20){

    if(temp!=NULL){
        printf("%d",temp->item);

        push(temp);

        temp=temp->left;
        c++;
   
    }

    if(temp==NULL) {

        pop();
        temp=a->right;
        c++;
    }
}

}

struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

void insertLeft(struct node* root, int value) {
  root->left = createNode(value);

}

void insertRight(struct node* root, int value) {
  root->right = createNode(value);

}


int main() {

  struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);

  insertLeft(root->left, 4);
  insertRight(root->left, 5);

  preorder(root);

}

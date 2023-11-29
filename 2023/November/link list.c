#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node//?
{
    int data;
    struct Node* next;
}Node;
Node* createNode(int data)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void insertNode(Node **head,int data)
{
    Node *newNode=createNode(data);
    newNode->next=*head;
    *head=newNode;
}
void reverseList(Node **head)
{
    Node *prev=NULL;
    Node *current=*head;
    Node *next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
void add(Node *num1,Node *num2,Node **result)
{
    int carry=0;
    while (num1!=NULL||num2!=NULL||carry)
    {
        int sum=carry;
        if(num1!=NULL)
        {
            sum+=num1->data;
            num1=num1->next;
        }
        if(num2!=NULL)
        {
            sum+=num2->data;
            num2=num2->next;
        }
        carry=sum/10;
        sum=sum%10;
        insertNode(result,sum);
    }
    //reverseList(result);
}
void subtract(Node *num1,Node *num2,Node **result)
{
    int borrow=0;
    while (num1!=NULL)
    {
        int diff=num1->data-borrow;
        if(num2!=NULL)
        {
            diff-=num2->data;
            num2=num2->next;
        }
        if(diff<0)
        {
            diff+=10;
            borrow=1;
        }
        else 
        {
            borrow=0;
        }
        insertNode(result,diff);
        num1=num1->next;
    }
    //reverseList(result);
}
void multiply(Node *num1,Node *num2,Node **result)
{
    Node *tempResult=NULL;
    int position=0;
    while (num2!=NULL)
    {
        Node *currentResult=NULL;
        int carry=0;
        Node *tempNum1=num1;
        for(int i=0;i<position;i++)
        {
            insertNode(&currentResult,0);
        }
        while (tempNum1!=NULL)
        {
            int product=(num2->data *tempNum1->data)+carry;
            carry=product/10;
            product=product%10;
            insertNode(&currentResult,product);
            tempNum1=tempNum1->next;
        }
        if(carry>0)
        {
            insertNode(&currentResult,carry);
        }
        reverseList(&currentResult);
        add(*result,currentResult,&tempResult);
        *result=tempResult;
        num2=num2->next;
        position++;
    }
}
void printNumber(Node *head)
{
    Node *current=head;
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
    printf("\n");
}
void freeList(Node *head)
{
    Node *current=head;
    while (current!=NULL)
    {
        Node *temp=current;
        current=current->next;
        free(temp);
    }
    
}
int main()
{
    int i,n,temp;
    char numm1[100000],numm2[100000];
    Node *num1=NULL;
    Node *num2=NULL;
    Node *result=NULL;
    scanf("%s",numm1);
    scanf("%s",numm2);
    n=strlen(numm1);
    for(i=0;i<n;i++)
    {
        temp=numm1[i]-48;
        insertNode(&num1,temp);
    }
    n=strlen(numm2);
    for(i=0;i<n;i++)
    {
        temp=numm2[i]-48;
        insertNode(&num2,temp);
    }
    add(num1,num2,&result);
    //reverseList(&result);
    printNumber(result);
}
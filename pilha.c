#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    int num;
    struct node *next;
} node;

typedef struct stack_st
{
    node *top;
    int count;
}stack_st;

void init_stack(stack_st *stack)
{
    stack->top = NULL;
    stack->count =0;
}



void insert_stack(stack_st *stack, int x)
{
    node *n = malloc(sizeof(node));
    
    n->num = x;
    
    n->next = stack->top;
    
    stack->top = n;
    
    stack->count++;

}

void remove_stack(stack_st *stack)
{
    node *trash = stack->top;
    
    stack->top = trash->next;
    
    trash->next = NULL;
    
    free(trash);
}

int search_stack(stack_st *stack, int x)
{
    node *aux = stack->top;
    
    while(aux!=NULL)
    {
        if(aux->num == x)
        {
            return 1;
        }
        
        aux= aux->next;
    }
    
    return 0;
}

int print_stack(stack_st *stack)
{
    node *aux = stack->top;
    printf("[topo]->");
    while(aux!=NULL)
    {
        printf("[%d]->",aux->num);
        aux= aux->next;
    }
    printf("NULL\n");
    
    return 0;
}






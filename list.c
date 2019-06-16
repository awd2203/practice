#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"str.h"


void init(List* list){
    list->front = NULL;
    list->back = NULL;
}
void push_back(List* list,char data[30]){
    Node* node=(Node*)malloc(sizeof(Node));
    node->next=NULL;
    node->previous=NULL;
    strcpy(node->data,data);
    if(list->front==NULL && list->back==NULL){
        list->front=node;
        list->back=node;
        
        return;
    }
    else{
    node->previous=list->back;
    list->back->next=node;
    list->back=node;
    
    }
}
void push_front(List* list,char data[30]){
    Node* node=(Node*)malloc(sizeof(Node));
    node->next=NULL;
    node->previous=NULL;
    strcpy(node->data,data);
    if(list->front==NULL && list->back==NULL){
        list->front=node;
        list->back=node;
        return;
    }
    else{
    list->front->previous=node;
    node->next=list->front;
    list->front=node;
    }
}
void pop_back(List* list){
    Node* p;
    if(list->back==list->front){
        list->front=NULL;
        list->back=NULL;
        free(p);
        return;
    }

    if(list->back==NULL)
        return;
    p=list->back;
    list->back=list->back->previous;
    list->back->next=NULL;
    free(p);
}

void pop_front(List* list){
    Node* p;
    p=list->front;
    if(list->back==list->front){
        list->front=NULL;
        list->back=NULL;
        free(p);
        return;
    }
    if(p==NULL)
        return;
    list->front=list->front->next;
    list->front->previous=NULL;
    free(p);
}

void rmByName(List* list, char data[30]){
    Node* p=list->front;
    if(strcmp(p->data,data)==0){
        if(p->next==NULL){
            list->front=NULL;
            list->back=NULL;
        }
        else{
            list->front=p->next;
            list->front->previous=NULL;
        }
        free(p);
        return;
    }
    p=p->next;
    while(p!=NULL){
       
        if(strcmp(p->data,data)==0){
            p->previous->next=p->next;
            if(p->next==NULL){
                list->back=p->previous;
            }
            else{            
                p->next->previous=p->previous;
            }
            free(p);
            return;
        }
        p=p->next;        
    }
        
    

}

void printForward(List* list){
    Node* p= list->front;
    for(int i=1; p != NULL;++i){
        printf("%d %s\n",i,p->data);
        p=p->next;
    }
    printf("\n");
}

void printBackward(List* list){
    Node* p= list->back;
    for(int i=1; p!= NULL;++i){
       printf("%d %s\n",i,p->data);
       p=p->previous;
    }
    printf("\n");

}




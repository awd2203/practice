#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"sum.h"
#include"sub.h"
#include"str.h"



int main(char argc, char* argv[]){
    
   List* list=(List*)malloc(sizeof(List));
   init(list);
   push_back(list,"kim");
   push_back(list,"cho");
   push_front(list,"pakr");
   push_front(list,"do");
   printForward(list);
   printBackward(list);
   pop_back(list);
   printForward(list);
   pop_front(list);
   printForward(list);
   pop_front(list);
   pop_front(list);
   printForward(list);
   
     return 0;
}


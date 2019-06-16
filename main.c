#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"sum.h"
#include"sub.h"
#include"str.h"



int main(char argc, char* argv[]){
    
   List* list=(List*)malloc(sizeof(List));
   init(list);
   int i,flag=0;
   char data[30];

   while(1){
       printf("--------------------choose you want--------------------\n");
       printf("   1.push_back 2.push_front 3.pop_back 4.pop_front   \n");
       printf("   5.rmByname  6.printForward 7. printBackward 8.exit\n");
       printf(">> ");
       scanf("%d",&i);
       switch(i){
           case 1:
               printf("Enter Data >> ");
               scanf("%s",&data);
               push_back(list,data);
               break;
            case 2:
               printf("Enter Data >> ");
               scanf("%s",&data);
               push_front(list,data);
               break;
            case 3:
               pop_back(list);
               break;
            case 4:
               pop_front(list);
               break;
            case 5:
               printf("Enter Data >> ");
               scanf("%s",&data);
               rmByName(list,data);
               break;
            case 6:
               printForward(list);
               break;
            case 7:
               printBackward(list);
               break;
            case 8:
               flag=1;
               break;
            default:
               getchar();
               break;
              
       }
       if(flag==1)
           break;
   }
     return 0;
}


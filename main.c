/*
* Cyprus International University
* Network II Term Project
* 12/12/2018
*
* Ercan Havare
* Koray Koygun
*
*/
#include <stdio.h>
#include <stdlib.h>

void readDeleteMessages();
void writeMessagetoUser();
void changeConfigParameters();

int main(){
  int option;
  do{
    printf("\n");
    printf("========== Short Message Server Project ==========\n");
    printf("Hello #####\n");
    printf("1) Read/Delete Messages\n");
    printf("2) Write Message to User\n");
    printf("3) Change config parameters\n");
    printf("4) Quit\n");

    printf("Option > ");
    scanf("%d",&option);
      switch (option) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:printf("Good bye :)\n"); exit(1);
          break;
      }
  }while(option!=4);
}



void readDeleteMessages(){

}

void writeMessagetoUser(){

}

void changeConfigParameters(){

}

/**
 * Shutdown.c
 *---------------
 *
 * A program that asks you before shutting down the computer with options.
 *
 * This program was created for my personal convenience.
 * Microsoft changed the defualt parameters for shutting down to save
 * the state of some programs. Which I don't like. So I made this program
 * in order to be able to shutdown my computer with one click.
 *
 * It also asks you before actually shutting down to prevent accidents.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void){
  char c;
  while(1){
    printf("Are you sure you want to shutdown? [y/n]\n");
    scanf("%c", &c);
    if(c == 'y' || c == 'Y'){
      printf("Shutting down...\n");
      system("c:\\windows\\system32\\shutdown /s /hybrid /t 5");
      break;
    }else if(c == 'n' || c == 'N'){
      printf("Canceling shutdown...");
      sleep(1);
      break;
    }else{
      printf("Invalid response!\n");
      sleep(1);
      break;
    }
  }
  return 0;
}

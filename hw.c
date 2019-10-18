#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

#define BUFLEN 64

int main(int argc, char **argv)
{
    
    FILE *dosya;
   
    char bilgiler;
    if((dosya = fopen("inputForDebian.csv","r"))!= NULL)
    {
         bilgiler=fgetc(dosya);//ilk bilgiler
    //o son bilgiler mi
         while(bilgiler!=EOF)//feof dosyanın sonu, eofbilgiler dizisinin sonu, sonuysa -1 döndrür
         // eof!=-1
         {
            // printf("%c",bilgiler);
            bilgiler=fgetc(dosya);
         }
    }
    else
    {
        printf("dosya yok");

    }

    int studentid[35][10];char studentname[35][20]; char studentsurname[35][20];
    char coursecode[35][7];int coursecredit[35][1];
    int mid1[35][2];int mid2[35][2];
    int hw1[35][2];int hw2[35][2];int hw3[35][2];int final[35][2];
    char grade[35][2];char status[35][15];

   // int ReplaceCharandString(char* string, char charToFind, char charTjatReplaces){    }

    
    char *pch;
    printf("parçalıyoruz");

    pch = strtok(bilgiler,",");

    while(pch != NULL)
    {
        printf("%sn",pch);
        pch = strtok(NULL,",");
    }
    

 //   for(int i = 0; i<)
   // fscanf("%d %c %c %c %d %d %d %d %d %d %d %c %c",);

    fclose(dosya);
}

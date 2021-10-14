#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

//Napisz program odwracający kolejność znaków w każdej linii pliku
//zadanie 2-8,10 do domu
// ./a.out /home/inf148099/bin/Programowanie/PSW/plik1 
int main(int argc, char* argv[])
{
    int fd = open(argv[0],O_RDWR);
    printf("%d\n",perror);
    char P[100];
    int curr=lseek(fd,0,SEEK_SET),lineend;
    printf("%d\n",curr);
    while(1){
        int poczateklinii=curr;
        printf("aaa\n");
        while ((read(fd,&P[curr-poczateklinii],1))>0 && P[curr-poczateklinii]!='\n'){
            curr=lseek(fd,1,SEEK_CUR);
            printf("%c",P[curr-poczateklinii]);
        }
        lineend=curr;
        while(curr>=poczateklinii){
            write(fd,&P[lineend-curr],1);
            curr=lseek(fd,-2,SEEK_CUR);
        }
        lseek(fd,lineend+1,SEEK_SET);
    }
    
}

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

//Napisz program odwracający kolejność znaków w każdej linii pliku
//zadanie 2-8,10 do domu
// ./a.out /home/inf148099/bin/Programowanie/PSW/plik 
int main(int argc, char* argv[])
{
    int fd = open(argv[1],O_RDWR),n=1,w=0,f=1;
    char P[100],E='\n',tmp;
    int lineend=0,poczateklinii;
    while((n=read(fd,&tmp,1))>0){
        if ( tmp!='\n'){
            P[w++]=tmp;
        }
        else{
			lseek(fd, -w-1, SEEK_CUR);
            w--;
            while(w>=0){
                write(fd,&P[w--],1);
            }
			lseek(fd, 1, SEEK_CUR);
            w=0;
        }
        //write(fd,&E,1);
    }
    lseek(fd, -w, SEEK_CUR);
    w--;
    while(w>=0){
        write(fd,&P[w--],1);
    }
}

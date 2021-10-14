/*Napisz program konwertujący małe litery na duże  w pliku o nazwie wskazanej
jako  argument.  Jeśli  nazwa  pliku  nie  została  podana,  dane  powinny  zostać
odczytane ze standardowego wejścia.*/
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, char* argv[]){
    int fd;
    char dire[100];
    if (argc>1)
        fd=open(argv[1],O_RDWR);
    else{
        scanf("%s",&dire);
        fd=open(dire,O_RDWR);
    }
    char c;
    while(read(fd,&c,1)>0){
        if(c<123 && c>96){
            c=c-32;
            lseek(fd,-1,SEEK_CUR);
            write(fd,&c,1);
        }
     }
}
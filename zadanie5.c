//5.  Napisz program wypisujący od końca zawartość pliku
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    int fd=open(argv[1],O_RDWR),now;
    //printf("?error: %d\n",fd);
    char c[1];
    now = lseek(fd,0,SEEK_END);
    while(now>-2){
        read(fd,c,1);
        lseek(fd,now,SEEK_SET);
        now=now-1;
        printf("%c",c[0]);
     }
}
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <ctype.h>
// Napisz  program  do  rozpoznawania  czy  plik  o  podanej  nazwie  jest  plikiem tekstowym  (plik tekstowy zawiera znaki o kodach 0-127 – można w tym celu użyć funkcji  isascii)
int main(int argc, char* argv[]){
    int fd=open(argv[1],O_RDWR);
    char c;
    while(read(fd,&c,1)){
        if(isascii(c)<1){
            printf("It isn't a text file\n");
            break;
        }
     }
}
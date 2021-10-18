/*NAPISZ PROGRAM, KTóRY W PLIKU O NAZWIE PODANEJ JAKO OSTATNI ARGUMENT ZAPISZE
POłąCZONą ZAWARTOść WSZYSTKICH PLIKóW KTóRYCH NAZWY ZOSTAłY PODANE W LINII
POLECEń PRZED OSTATNIM ARGUMENTEM.*/
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, char* argv[]){
    int fd,dest;
    dest=open(argv[argc-1],O_WRONLY|O_CREAT,0777);
    for (int i=1;i<argc-1;i++){
        fd=open(argv[i],O_RDONLY);
        char c;
        while(read(fd,&c,1)>0){
            write(dest,&c,1);
        }
     }
     return 0;
}
    
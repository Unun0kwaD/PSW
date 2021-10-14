#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

//Napisz program wyszukujący najdłuższą linię w pliku i podający ilość znaków w tej linii.
int main(int argc, char* argv[]){
    int fd=open(argv[1],O_RDWR),maks=0;
    //printf("?error: %d\n",fd);
    char c;
    int i=0;
    while((read(fd, &c, 1))>0){
        if (c!=10){
            i++;
            if (i>maks)
                maks=i;
        }
        else if (c==10){
            i=0;
        }
     }
     printf("Najdłuższa linijka tekstu ma %d znaków\n",maks);
}
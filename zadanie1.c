#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
     int i,n;
     printf ("%d\n", argc);
     for(i=0; i<argc; i++)
          printf("argument %d: %s\n", i, argv[i]);
     int fd1 = open(argv[1],O_RDWR|O_CREAT,777);
     char buf[20];
     while((n=read(fd1, buf, 20)) > 0){
          write(1, buf, n);
     }
}
// ./program0 /home/pawelm/Dokumenty/ANSI_c/PSW/siema

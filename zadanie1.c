#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
     int n;
     int fd1 = open(argv[1],O_RDWR);
     int fd2 = open(argv[2],O_RDWR|O_CREAT,0777);
     char buf[20];
     while((n=read(fd1, buf, 20)) > 0){
          write(fd2, buf, n);
     }
}
// ./program0 /home/pawelm/Dokumenty/ANSI_c/PSW/zadania /home/pawelm/Dokumenty/ANSI_c/PSW/kopiazadania

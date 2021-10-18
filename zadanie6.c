/*NAPISZ PROCEDURę KOPIOWANIA OSTATNICH 10 ZNAKóW, SłóW I OSTATNICH 10 LINII PLIKU
WSKAZANEGO PIERWSZYM ARGUMENTEM DO NOWO STWORZONEGO PLIKU KTóREGO NAZWA
ZOSTAłA WSKAZANA DRUGIM ARGUMENTEM*/
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
     int n,v=0,l_slow=0,l_linii=0;
     int fd1 = open(argv[1],O_RDWR);
     int fd2 = open(argv[2],O_RDWR|O_CREAT,0777);
     char buf[2048],tmp;
     while((n=read(fd1, &buf[v++], 1)) > 0){
     }
    v=v-11;
    for(int i=0;i<10;i++)
        write(fd2, &buf[v+i], 1);
    v+=10;
    int j=0;
    while(l_slow<10){
        tmp=buf[v-j];
        if (tmp==' ' || tmp=='\n')
            l_slow++;
        j++;
    }
    while(j>0){
        write(fd2, &buf[v-j], 1);
        j--;
    }
    int k=0;
    while(l_linii<10){
        tmp=buf[v-k];
        if (tmp=='\n')
            l_linii++;
        k++;
    }
    while(k>0){
        write(fd2, &buf[v-k], 1);
        k--;
    }
}
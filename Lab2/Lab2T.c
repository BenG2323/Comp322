#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/times.h>
#include<fcntl.h>


int main(int argc, const char * argv[]) {
    int p[2];
    pipe(p);
    pid_t PID = 0;
    pid_t PPID = 0;
    int child1 = fork();
    if(child1>0){
        int child2 = fork();
        if(child2>0){
            int status1=-1;
            int status2=-1;
            waitpid(child1,&status1,0);
            waitpid(child2,&status2,0);
            PID = getpid();
            PPID = getppid();
            printf("PPID: %d, PID: %d, C1PID: %d, C2PID: %d, RETVAL1: %d, RETVAL2: %d\n", PPID, PID, child1, child2, status1, status2);
        }
        else if(child2==0){
            FILE *fptr = fopen(argv[2], "w");
            PID = getpid();
            PPID = getppid();
            fprintf(fptr, "Child 2 PPID: %d, PID: %d\n", PPID, PID);
            fclose(fptr);
        }
    }
    else if(child1==0){
        FILE *fptr = fopen(argv[1], "w");
        PID = getpid();
        PPID = getppid();
        fprintf(fptr, "Child 1 PPID: %d, PID: %d\n", PPID, PID);
        fclose(fptr);
    }
	return 0;
}

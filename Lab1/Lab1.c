#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/times.h>

void startClock(void);
void endClock(void);

clock_t startTime;
clock_t endTime;
struct tms startCPU;
struct tms endCPU;

int main(int argc, const char * argv[]) {
    startClock();
    printf("START: %ld\n", time(NULL));
    pid_t PID = 0;
    pid_t PPID = 0;
    int child = fork();
    if(child>0){
        int status=-1;
        waitpid(child,&status,0);
        PID = getpid();
        PPID = getppid();
        printf("PPID: %d, PID: %d, CPID: %d, RETVAL: %d\n", PPID, PID, child, status);
        endClock();
        printf("USER: %jd, SYS: %jd\n", (intmax_t)(endCPU.tms_utime - startCPU.tms_utime), (intmax_t)(endCPU.tms_stime - startCPU.tms_stime));
        printf("CUSER:%jd, CSYS:%jd\n", (intmax_t)(endCPU.tms_cutime - startCPU.tms_utime), (intmax_t)(endCPU.tms_cstime - startCPU.tms_stime));
        printf("STOP: %ld\n", time(NULL));
    }
    else if(child==0){
        PID = getpid();
        PPID = getppid();
        printf("PPID: %d, PID: %d\n", PPID, PID);
    }
	return 0;
}


void startClock() {
    startTime = times(&startCPU);
}


void endClock() {
    endTime = times(&endCPU);
}


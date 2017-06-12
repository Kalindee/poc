#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include <unistd.h>
#define   MAX_COUNT  200
#define   BUF_SIZE   100
#if 0
int  main(void)
{
    pid_t  pid,pidParent;
    int    i;
    char   buf[BUF_SIZE];
    pidParent = getpid();
    printf("pidParent = %d\n",pidParent);
    fork();
    pid = getpid();
    for (i = 1; i <= MAX_COUNT; i++) {
        sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
        write(1, buf, strlen(buf));
    } 
    printf("Exiting from :%d\n",getpid());
}
#endif

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

int  main(void)
{
    pid_t  pid;

    pid = fork();
    if (pid == 0) 
        ChildProcess();
    else 
        ParentProcess();
}

void  ChildProcess(void)
{
    int   i;

    for (i = 1; i <= MAX_COUNT; i++)
        printf("   This line is from child, value = %d\n", i);
    printf("   *** Child process is done ***\n");
}

void  ParentProcess(void)
{
    int   i;

    for (i = 1; i <= MAX_COUNT; i++)
        printf("This line is from parent, value = %d\n", i);
    printf("*** Parent is done ***\n");
}

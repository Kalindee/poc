/* system example : DIR */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */
#include <unistd.h>
int main ()
{
  int i;
  printf ("Checking if processor is available...");
  if (system(NULL)) puts ("Ok");
    else exit (EXIT_FAILURE);
 // printf ("Executing command DIR...\n");
 // i=system ("dir");
  printf ("Executing command PING...\n");
 // i=system ("ping 192.168.82.109 -n 6 > nul");
  i=system ("ping 192.168.82.79");
  printf ("The value returned was: %d.\n",i);
  sleep(10);
 // system
  return 0;
}

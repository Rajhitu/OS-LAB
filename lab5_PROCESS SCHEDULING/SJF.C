#include <stdio.h>


int waitingtime(int proc[], int n,

int burst_time[], int wait_time[]) {
   wait_time[0] = 0;
   for (int i = 1; i < n ; i++ )
   
   wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
   return 0;
}
int turnaroundtime( int proc[], int n,

   int proc[] = { 1, 2, 3};
   
   int n = sizeof proc / sizeof proc[0];
   
   int burst_time[] = {5, 8, 12};
   
   avgtime(proc, n, burst_time);
   return 0;
}
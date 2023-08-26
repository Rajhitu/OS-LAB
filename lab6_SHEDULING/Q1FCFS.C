
#include <stdio.h> 
void findWaitingTime(int processes[], int n, int bt[], int wt[], int at[])
{
    int service_time[n];
    service_time[0] = at[0];
    wt[0] = 0; // calculating waiting time
    for (int i = 1; i < n; i++)
    { // Add burst time of previous processes
        service_time[i] = service_time[i - 1] + bt[i - 1];

        // Find waiting time for current process = sum - at[i]
        wt[i] = service_time[i] - at[i];
        // If waiting time for a process is in negative that means it is already in the ready queue before CPU becomes idle so its waiting time is 0
        if (wt[i] < 0)
            wt[i] = 0;
    }
} // Function to calculate turn around time
void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
{ // Calculating turnaround time by adding bt[i] + wt[i]
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}
// Function to calculate response time
void findResponseTime(int processes[], int n, int rt[], int wt[], int at[])
{ // Calculating response time by adding at[i] + wt[i]
    for (int i = 0; i < n; i++)
        rt[i] = wt[i] + at[i];
} // Function to calculate average waiting and turn-around times.
void findavgTime(int processes[], int n, int bt[], int at[])
{
    int wt[n], tat[n], rt[n];                      // Function to find waiting time of all processes
    findWaitingTime(processes, n, bt, wt, at);     // Function to find turn around time for all processes
    findTurnAroundTime(processes, n, bt, wt, tat); // Function to find response time for all processes
    findResponseTime(processes, n, rt, wt, at);    // Display processes along with all details
    printf("Process\t BT \tAT \tWT \tTAT \tCT \tRT\n");
    int total_wt = 0, total_tat = 0, total_rt = 0;
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        total_rt = total_rt + rt[i];
        int compl_time = tat[i] + at[i];
        printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\n", i + 1, bt[i], at[i], wt[i], tat[i], compl_time, rt[i]);
    }
    printf("Average waiting time = %f\n", (float)total_wt / n);
    printf("Average turn around time = %f\n", (float)total_tat / n);
    printf("Average response time = %f\n", (float)total_rt / n);
}
int main()
{
    int n = 0;
    printf("Enter the no. of process : ");
    scanf("%d", &n); // process id's , Burst time , arrival time of all processes
    int processes[n], burst_time[n], arrival_time[n];
    printf("Enter the process id's, burst time and arrival time : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d entry : ", i + 1);
        scanf("%d%d%d", &processes[i], &burst_time[i], &arrival_time[i]);
    }
    findavgTime(processes, n, burst_time, arrival_time);
    return 0;
}
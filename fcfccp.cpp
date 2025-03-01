#include<bits/stdc++.h>
using namespace std;

void findwaitingTime(int processes[], int n, int bt[], int wt[]) {
    wt[0] = 0;
    for(int i = 1; i < n; i++) {
        wt[i] = bt[i-1] + wt[i-1];
    }
}

void turnaroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void findavgTime(int processes[], int n, int bt[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    findwaitingTime(processes, n, bt, wt);
    turnaroundTime(processes, n, bt, wt, tat);

    cout << "Processes " << " Burst Time " << " Waiting Time " << " Turn Around Time\n";
    for(int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << "   " << i+1 << "\t\t" << bt[i] <<"\t    "
            << wt[i] <<"\t\t  " << tat[i] <<endl;
    }
    cout << "Average waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    int processes[n];
    int burst_time[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Process ID for process " << i + 1 << ": ";
        cin >> processes[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter Burst Time for process " << processes[i] << ": ";
        cin >> burst_time[i];
    }

    findavgTime(processes, n, burst_time);
    return 0;
}



    

     

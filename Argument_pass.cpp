#include<bits/stdc++.h>
#include<mpi.h>
using namespace std;
int main(int argc,char *argv[]){
    MPI_Init(&argc, &argv);
    double start_time = MPI_Wtime();
    
    int rank,size;
    MPI_Comm_rank( MPI_COMM_WORLD , &rank);
    MPI_Comm_size( MPI_COMM_WORLD , &size);

    int K = atoi(argv[1]);
    int M = atoi(argv[2]);
    int N = atoi(argv[3]);
    int P = atoi(argv[4]);
    printf("HEllo form process %d out of %d\n",rank,size);

    double end_time = MPI_Wtime();
    double time_taken = end_time-start_time;
    if(rank == 0)
        printf("Time required for execution: %f\n",time_taken);
    MPI_Finalize();
}

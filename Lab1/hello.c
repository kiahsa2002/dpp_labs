/**********************************************************************
 * A simple "hello world" program for MPI/C
 *
 **********************************************************************/

#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int my_rank;
  MPI_Init(&argc, &argv);               /* Initialize MPI               */
  MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

  printf("Hello World! of rank %d \n", my_rank);             /* Print a message              */

  MPI_Finalize();                       /* Shut down and clean up MPI   */

  return 0;
}

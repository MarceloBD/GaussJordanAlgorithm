#include <stdio.h>
#include <stdlib.h>
#include <omp.h>


#define NRA 100
#define NCA 100

int i, j;

void initialize(double ***);
int findPiv(int col, double **a);

int main(int argc, char* argv[]){
	
	double **a;
	
	initialize(&a);
	int numT = strtol(argv[1],NULL,10); 
//	int numT =1;
	#pragma omp parallel num_threads(numT) 
	{
		int master;

		int n = omp_get_thread_num();

		if (n==0)				//says who is the first master
			master = 1
		else 
			master = 0

		if ()
	

	//	int plin = findPiv(0, a);

	}
	return 0;
}

int testZero(int value){
/* Returns if the value is equals to zero */
	if (value == 0)
		return 1
	else 
		return 0 
}


int findPiv(int col, double **a){
	int lin;
	#pragma omp for 
	for(i=0;i<NRA;i++){
		printf("%f \n", a[i][col] );

	}
	return lin;

}


void initialize(double ***a){
/* Initializes matrices */
	int k, i, j;
	*a = (double **) malloc(sizeof(double *) * NRA);
	  for (k = 0; k < NRA; k++) {
	      (*a)[k] = (double *) malloc(sizeof(double) * NCA);
	  }
  for (i=0; i<NRA; i++)
    for (j=0; j<NCA; j++)
      (*a)[i][j]= rand() % 10 ;
}
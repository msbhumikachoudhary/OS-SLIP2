//Q.1 slip 8, 18

#include<stdio.h>

int main() {
	int n, r, i, j; //n=number of processes, r=no. of resources
	
	//Accept the number of processes and number of resources
	printf("Enter number of processes: ");
	scanf("%d",&n);
	printf("Enter number of resources: ");
	scanf("%d",&r);
	
	int max[n][r], allocation[n][r], need[n][r];
	
	//Input the matrix
	printf("Enter the Max Matrix:\n");
	for(i=0;i<n;i++) {
		printf("Max for Process P%d: ",i);
		for(j=0; j<r;j++) {
			scanf("%d",&max[i][j]);
		}
	}
	
	//Input allocation matrix
	printf("Enter Allocation Matrix:\n");
	for(i=0;i<n;i++) {
		printf("Allocation for Process P%d: ",i);
		for(j=0;j<r;j++) {
			scanf("%d",&allocation[i][j]);
		}
	}
	
	//Calculate Need Matrix
	for(i=0;i<n;i++) {
		for(j=0;j<r;j++) {
			need[i][j] = max[i][j] - allocation[i][j];
		}
	}
	
	//Displaying Need Matrix
	printf("\nNeed Matrix\n");
	for(i=0;i<n;i++) {
		for(j=0;j<r;j++) {
			printf("%d\t",need[i][j]);
		}
		printf("\n");
	}
	
  return 0;
}

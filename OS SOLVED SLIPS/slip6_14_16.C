//Q.1 slip 6, 14, 16

#include<stdio.h>
#include<time.h> //for clock()

int main() {
	int i;
	long sum=0;
	clock_t start = clock();
	for(i=0;i<123456789;i++) {
		sum+=i;
	}
	clock_t end = clock();
	
	//Calculate time taken in seconds
	double totalTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Sum: %ld\n",sum);
	printf("Time taken %f seconds\n",totalTime);
	
	return 0;
}
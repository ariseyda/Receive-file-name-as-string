#include<stdio.h>
#include<time.h>

//Write a computer program that receives file name as string. 
//Open the file using the received string. 
//Display count of numbers in the file. 
//Find average of the numbers. 

int main(){
	
	time_t t;
	srand((unsigned) time(&t));
	
	char fn[40];
	printf("Enter file name:(-----.txt)");
	scanf("%s",fn);
	FILE *f=fopen(fn,"w+");
	
	unsigned int N;
	printf("How many random numbers would you like?:");
	scanf("%d",&N);
	int array[N];
	int i;
	for(i=0;i<N;i++){
		array[i]=(rand()%100);
	}
	fprintf(f,"%s","Array:\n");
	for(i=0;i<N;i++){
		fprintf(f,"%d",array[i]);
		if(i<N-1){
			fprintf(f,"\n");
		}
	}
	int sum=0;
	for(i=0;i<N;i++){
		sum+=array[i];
	}
	
	float avrg=sum/N*1.0;
	
	printf("\nAvrg:%.2f",avrg);
	
	fclose(f);
	
	return 0;
}

#include<stdio.h>

int first_val = 0;
long num1 = 0, num2 = 0;

void error(char which);
void print_numbers(void);
void loop(void);
void limiter();


int main(){	
	
	loop();

	return 0;
}


void loop(void){

	while(1){
		printf("\n");
		printf("if num1 > num2 : num1 = num2 and num2 = num1\n");
		printf("if numx > 2000000 : numx = 2000000\n");
		printf("if numx < -2000000 : numx = -2000000\n");
		printf("\n");
		printf("1. quit \n");
		printf("2. run \n");
		
		if(scanf("%d", &first_val) != 1){
			error(2);
			first_val = 0;
			break;
		}

		if(first_val == 1)
		{
			break;

		}else if(first_val == 2){
			printf("\n");
			printf("\n");

			printf("First number \n");
			scanf("%li", &num1);
			printf("second number \n");
			scanf("%li", &num2);

			limiter();

			print_numbers();
			
			printf("\n");
			printf("\n");

			first_val = 0;		
		}else{
			error(1);
			first_val = 0;

		}	
	}
}


void error(char which){

	printf("\n");
	if(which == 1){
		printf("incorrect number \n");
		printf("1 = run, 2 = wuit \n");

	}else if(which == 2){
		printf("dont use characters or strings \n");

	}
	printf("\n");
}


void print_numbers(void){

	int even_odd = 0;
	long count = 0;

	for(char x = 0; x < 2; x++){
	
		printf("\n");
		printf("\n");
		
		if(x == 0){
			printf("even: \n");
			printf("\n");
			even_odd = 0;
		}else if(x >= 1){
			printf("odd: \n");
			printf("\n");
			
			if(num1 < 0){
				even_odd = -1;
			}else if(num1 >= 0){
				even_odd = 1;
			}
		}


		for(long i = num1; i < num2+1; i++){
			if((x >= 1) && (i > 0)){
				even_odd = 1;
			}
			if((i % 2) == even_odd){
				count += 1;
				printf("%li,", i);
				if((count % 10) == 0){
					printf("\n");
				}
			}
		}
		printf("\n");
		printf("\n");
		printf("count = %li", count);
		printf("\n");
		count = 0;
	}
}



void limiter(){
	if(num1 > 2000000){
		num1 = 2000000;
	}else if(num1 < -2000000){
		num1 = -2000000;
	}

	if(num2 > 2000000){
		num2 = 2000000;
	}else if(num2 < -2000000){
		num2 = -2000000;
	}

	if(num1 > num2){
		long t = num2;
		num2 = num1;
		num1 = t;
	}

}

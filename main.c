#include<stdio.h>

long first_num = 0;
long last_num = 0;
long odd_cnt = 0;
int modulo = 2;
int res = 0;

void chck_num(long *Pn1,long *Pn2);


int main(void)
{
	char user_want;

	while(1)
	{	
		printf("exit = 'q', run = 'r' \n");     
		scanf("%c", &user_want);
        
		if(user_want == 'q')
        	{
               		 break;
        	}
		else if(user_want == 'r')
        	{		
			printf("min = 0, max = 60000 \n");
			printf("\n");
			printf("enter number \n");
			scanf("%li", &first_num);	
			printf("enter last number \n");
			scanf("%li", &last_num);
		
			if(first_num < 0)
			{
				first_num = 0;
			}
			
			if(first_num > 59990)
			{
				first_num = 59990;
			}

			if(last_num > 60000)
			{
				last_num = 60000;
			}
			
			if(last_num < first_num)
			{
				printf("error");
				printf("last num is more than first num");
				printf("\n");
	       		}
			
			if(last_num > first_num)
			{
				odd_cnt = 0;
				chck_num(&first_num, &last_num);
				first_num = 0;
				last_num = 0;
			}		 
			user_want = 0;
        	}
		else if(user_want == 0)
		{
			;		
		}
        	else 
        	{
                	printf("incorrect symbol \n");
			printf("\n"); 
		        printf("\n");	
        	}
	}	
	return 0;
}


void chck_num(long *Pn1, long *Pn2)
{
	for(long i = *Pn1; i < *Pn2; i++)
	{
		res = i % modulo;
		printf("%d \n", res);
		if(res == 1)
		{
			odd_cnt += 1;
			printf("odd number = %li \n", i);
			printf("quantity = %li \n", odd_cnt);
		}
	}
}

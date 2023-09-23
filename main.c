#include<stdio.h>

//int check_num();
//void user(void);


int main(void)
{
	int first_num = 0;
	int last_num = 0;
	int modulo = 2;
	int res = 0;
	int odd_cnt = 0;

	while(1)
	{
		char user_want;
		printf("exit = 'q', run = 'r' \n");     
		scanf("%c", &user_want);
        
		if(user_want == 'q')
        	{
               		 break;
        	}
		else if(user_want == 'r')
        	{
                	continue;

        	}
        	else
        	{
                	printf("incorrect symbol \n");
                	printf("exit = 'q', run = 'r' \n");     
        	}


		printf("min = 0, max = 60000 \n");
		printf("enter number \n");
		scanf("%d", &first_num);	
		printf("enter last number \n");
		scanf("%d", &last_num);
		
		if(first_num < 0)
		{
			first_num = 0;
		}
		else if(first_num > 59000)
		{
			first_num = 59000;
		}

		if(last_num > 60000)
		{
			last_num = 60000;
		}
		else if(last_num < first_num)
		{
			printf("error");
			printf("last num is more than first num");
	        }
		else if(last_num > first_num)
		{
			for(int i = first_num; i < last_num; i++)
			{
				res = i % modulo;
				printf("%d \n", res);
				if(res == 1)
				{
					odd_cnt += 1;
					printf("odd number = %d \n", i);
					printf("quantity = %d \n", odd_cnt);
				}
			}	
		}
	}	
	return 0;
}

/*
int check_num()
{

}


void user(void)
{	
	char user_want;
	printf("exit = 'q', run = 'r' \n");	
	scanf("%c", &user_want);
	
	if(user_want == 'q')
	{
		break;
	}
	else if(user_want == 'r')
	{
		continue;

	}
	else
	{
		printf("incorrect symbol \n");
		printf("exit = 'q', run = 'r' \n");	
	}
}
*/

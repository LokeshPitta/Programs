#include<stdio.h>
#include<stdlib.h>

typedef enum
{
	downstate,
	startingstate,
	runningstate,
	exitingstate,
}state;

int opt=1;
void starting();
void running();
void exiting();
state nextstate=downstate;

int main()
{
	int select;
	printf("\tProcess STARTS\n");
	do
	{
		switch(nextstate)
		{
			case downstate: printf("\nPresent state is downstate\nEnter 1 for starting state : ");
					scanf("%d",&select);
					if(select==1)
					{
						starting();
					}
					else if(select==0)
					{
						printf("\nProgram execution is completed : ");
						exit(0);
					}
					else
					{
						printf("\nstate not changed");
						opt=0;
					}
					break;
		}
	}while(opt==0);
}

void running()
{
	int select;
	printf("\nPresent state is running state : ");
	printf("\nEnter 1 exiting state : ");
	scanf("%d",&select);
	if(select==1)
	{
		exiting();
	}
	else
	{
		printf("\nState not changed : ");
		running();
	}
}

void starting()
{
	int select;
	printf("\nPresent state is starting state");
	printf("\nEnter 0 for exiting state and 1 for runningstate : ");
	scanf("%d",&select);
	if(select==1)
	{
		running();
	}
	else if(select==0)
	{
		exiting();
	}
	else
	{
		printf("\nEnter the correct input either 0 or 1 : ");
		starting();
	}
}

void exiting()
{
	int select;
	printf("\nPresent state is exiting state");
	printf("Enter 1 to downstate : ");
	scanf("%d",&select);
	opt=0;
}

/*
simple menu based program to
	1. CGPA
	2. Attendence Threshold*/

#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, y, grad;
	int x2=0, x3=0;
	float tot,total;
	int x1=0, x=0;
	char grade[11];
	int credits[11];
	printf("______________________________\n");
	printf("\t     MENU \n\
1.SGPA Calculator\n\
2.Attendence Threshold\n______________________________\n\
CHOOSE OPTION TO CONTINUE:");
	scanf("%d",&n);
	printf("\n");
	
	
	//SGPA
	if (n == 1) 
	{
		int x = 1,ch;
		
		printf("Enter the number of courses(1-11): ");
		scanf("%d", &y);

		for (i = 0; i<y; i++)
		{
			printf("Enter course credit: ");
			scanf("%d", &credits[i]);
			printf("Enter course grade: ");
			scanf("%s", &grade[i]);
					
		}
		for (i = 0; i < y; i++)
		{
			if (grade[i] == 'o')
			{
				grad = 10;
			}
			else if(grade[i] == 'A')
			{
				grad = 9;
			}
			else if(grade[i] == 'a')
			{
				grad = 8;
			}
			else if(grade[i] == 'B')
			{
				grad = 7;
			}
			else if(grade[i] == 'b')
			{
				grad = 6;
			}
			else if(grade[i] == 'C')
			{
				grad = 5;
			}
			else if(grade[i] == 'c')
			{
				grad = 4;
			}
			else if(grade[i] == 'f')
			{
				grad = 0;
			}
			x += (grad * credits[i]);
			x1+= credits[i];

			

		}
		tot = x / x1;
		printf("----------------------------\nSGPA= %0.2f\n----------------------------\n",tot);
		
		}
	
	//Attendence Threshold 
	else if (n == 2)
	{
		
		printf("Enter number of hours completed:");
		scanf("%d",&x2);
		printf("Enter number of hours missed:");
		scanf("%d", &x3);
		
		total = floor((x2 - x3) * 0.25);
		printf("----------------------------\nNumber of days off that can be allowed: %0.0f\n----------------------------",total);
	}
		
		

	return 0;
}
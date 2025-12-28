#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int last,new=4,minute=0;
	last=time(NULL);
	
	while(1)
	{
		if((new-time(NULL))!=0)
		{
			if((time(NULL)-last)>=60)
			{
				((time(NULL)-last)%60==0)?++minute:minute;
				printf("%d:%d \t",minute,(time(NULL)-last)%60);
			}
			else{
				printf("%d \t",time(NULL)-last);
			}
		new=time(NULL);
		}
		
	}
}

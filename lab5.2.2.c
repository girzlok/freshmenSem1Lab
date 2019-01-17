/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>

/* This program calculates the number of digits in a number from 1 to 100000*/

void digits(int n);

int main()
{
    int input;

    printf("Please input a number from 1 up to 10000000: ");

    scanf("%d", &input);
	
	//if( input > 10000000 || input < 1)
    if( input > 10000000 && input < 1)
    {
        printf("Invalid number!\n");
        return -1;
    }

    digits(input);

    return 0;
}


/* This function divides a number by the 10^n, to see if the divided number
 * has "n" digits */
void digits(int n)
{
    /*if((double)n/10000000 != 0)
    {
        printf("8 digits\n");
    }
    else if((double)n/1000000 != 0)
    {
        printf("7 digits\n");
    }
    else if((double)n/100000 != 0)
    {
        printf("6 digits\n");
    }
    else if ((double)n/10000 != 0)
    {
        printf("5 digits\n");
    }
    else if ((double)n/1000 != 0)
    {
        printf("4 digits\n");
    }
    else if ((double)n/100 !=0 )
    {
        printf("3 digits\n");
    }
    else if ((double)n/10 != 0)
    {
        printf("2 digits\n");
    }
    else if ((double)n/1 != 0)
    {
        printf("1 digit\n");
    }*/

	if((double)n/10000000 < 1)
    {
		if((double)n/1000000 < 1){
		
			if((double)n/100000 < 1){
				
				if ((double)n/10000 < 1){
					
					if ((double)n/1000 < 1){
						
						if ((double)n/100 < 1){
							
							if ((double)n/10 < 1){
								
								if ((double)n/1 < 1){
									
								}else{
									printf("1 digit\n");
								}
							}else{
								printf("2 digits\n");
							}
						}else{
							printf("3 digits\n");
						}
					}else{
						printf("4 digits\n");
					}
				}else{
					printf("5 digits\n");
				}
			}else {
				printf("6 digits\n");
			}
		} else {
			printf("7 digits\n");
		}
    }else {
		printf("8 digits\n");
	}
	
}

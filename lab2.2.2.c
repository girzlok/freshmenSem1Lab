/*-----------------------------------------------------------------------------
-					          SE 185 Lab 02
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name: James Mechikoff
- 	Section: C
-	NetID: 726219551
-	Date: 9/4/2018
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>


/*-----------------------------------------------------------------------------
-	                            Defines
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-							 Implementation
-----------------------------------------------------------------------------*/
int main()
{

    /* Put your code after this line */
	int x, y, z;
	printf("Enter a width: ");
	scanf("%d",&x);
	printf("Enter a height: ");
	scanf("%d", &y);
	printf("Enter a length: ");
	scanf("%d", &z);
	printf("A %d by %d by %d cube's volume is %d\n", x, y, z, x * y * z);



    return 0;

}

#include <stdio.h>
#include <math.h>
#include <string.h>
 
// C program to print heart pattern
void main()
{
    int size = 10;
    int x,y;
    char* message = " I love You ";
    int n = strlen(message);

    int print_line = 4;

    for ( x = 0; x < size; x++)
    {
	for ( y = 0; y <= 4 * size; y++)
	{
	    double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
	    double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));

	    if (dist1 < size + 0.5 || dist2 < size + 0.5) {
		printf("*");
	    }
	    else {
		printf(" ");
	    }
	}
	printf("\n");
    }

    for ( x = 1; x < 2 * size; x++)
    {
	for ( y = 0; y < x; y++) {
	    printf(" ");
	}

	for ( y = 0; y < 4 * size + 1 - 2 * x; y++)
	{
	    if (x >= print_line - 1 && x <= print_line + 1)
	    {
		int idx = y - (4 * size - 2 * x - n) / 2;
		if (idx < n && idx >= 0)
		{
		    if (x == print_line) {
			printf("%c", message[idx]);
		    }
		    else {
			printf(" ");
		    }
		}
		else {
		    printf("*");
		}
	    }
	    else {
		printf("*");
	    }
	}
	printf("\n");
    }
    getch();
}
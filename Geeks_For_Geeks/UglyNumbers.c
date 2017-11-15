

/*Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:

Print the Nth Ugly Number.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 500

Example:

Input:
2
10
4

Output:
12
4*/


#include <stdio.h>

int main() {
	//code

	int T;
	scanf("%d",&T);

	for (int icounter=0; icounter<T; icounter++)
	{
	    int N;
	    scanf("%d", &N);

	    int ugly=0;
	    int  i=1;

        while(N!=0)
        {
	        int num=i;

	        while(num%2==0)
	            num=num/2;

	        while(num%3==0)
	            num=num/3;

	        while(num%5==0)
	            num=num/5;

            if(num==1)
            {

               ugly=i;
               N--;
            }
            i++;
        }

	    printf("%d",ugly);
	    printf("\n");


	}


	return 0;
}

/*
Given two strings S1 and S2 as input, the task is to merge them alternatively.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two strings S1 and S2.

Output:
For each test case, print the merged string in new line.

Constraints:
1<=T<=100
1<=|strings length|<=104

Example:
Input:
2
Hello Bye
abc def

Output:
HBeylelo
adbecf

*/



#include <stdlib.h>
#include <string.h>

int main() {
	//code
	int T=0;

	scanf("%d",&T);

	for(int i=0;i<T; i++)
	{
	    int j;
	    int k;
	    char *c1;
	    char *c2;
	    c1=(char*)malloc(10000*(sizeof(char)));
	    c2=(char*)malloc(10000*(sizeof(char)));
	    scanf("%s",c1);
	    scanf("%s",c2);

	    int l1=strlen(c1);
	    int l2=strlen(c2);

	    if(l1>l2 || l1==l2)
	    for(j=0, k=0;j<l1 || k<l2;j++, k++)
	    {
	        printf("%c",c1[j]);

	        if(k<l2)
	            printf("%c",c2[k]);
	    }

	    if(l2>l1)
	    for(j=0, k=0;j<l1 || k<l2;j++, k++)
	    {
	        if(j<l1)
	            printf("%c",c1[j]);

	        printf("%c",c2[k]);
	    }

	    printf("\n");

	}





	return 0;
}

/*Given two strings, check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

Input:

The first line of input contains an integer T denoting the number of test cases. Each test case consist of two strings in 'lowercase' only, in a separate line.

Output:

Print "YES" without quotes if the two strings are anagram else print "NO".

Constraints:

1 ≤ T ≤ 30

1 ≤ |s| ≤ 100

Example:

Input:
2
geeksforgeeks
forgeeksgeeks
allergy
allergic

Output:
YES
NO
*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{

    int T=0;
    int a[26];
    int b[26];
    int flag=0;

    scanf("%d",&T);

    for(int icounter=0; icounter<T; icounter++)
    {
        char *c1;
        char *c2;
        c1=(char*)malloc(100*sizeof(char));
        c2=(char*)malloc(100*sizeof(char));

        scanf("%s",c1);
        scanf("%s",c2);

        int l1=strlen(c1);
        int l2=strlen(c2);
        int k=0;

        for(k=0;k<26;k++)
        {
            a[k]=0;
            b[k]=0;
        }

        k=0;


        for(int i=0; i<l1 ;i++)
        {
            k=c1[i]-'a';

            a[k]=a[k]+1;
        }

        k=0;

        for(int i=0; i<l2; i++)
        {
            k=c2[i]-'a';
            b[k]=b[k]+1;
        }



        for(k=0;k<26;k++)
        {
            if(a[k]!=b[k])
            {
                flag=-1;
                break;
            }
        }

        if(flag==-1)
            printf("NO");
        else
            printf("YES");

        printf("\n");

    }


    return 0;
}

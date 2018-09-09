#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char e[30],f[30],inter[30][50],sym[30],final[30];
 int lcs[30][30],i,j,a,b,k=0;
 clrscr();
 printf(" Welcome to Viken's Code on longest common subsequence .\n Enter 1st string (Less than 30 Characters):\n");
 gets(e);
 printf("String 1 entered \n Enter 2nd string to find longest common subsequence from the 1st string:\n");
 gets(f);
 a=strlen(e);
 b=strlen(f);
 for(i=0;i<=a;i++)
     {
     lcs[0][i]=0;
     }
 for(i=0;i<=b;i++)
     {
     lcs[i][0]=0;
     }
 for(i=1;i<=b;i++)
    {
    for(j=1;j<=a;j++)
       {
       if(e[j-1]==f[i-1])
       {
       lcs[i][j]=lcs[i-1][j-1]+1;
       inter[i][j]='d';
       }
     else
     {
      if(lcs[i-1][j]>=lcs[i][j-1])
	{
	 lcs[i][j]=lcs[i-1][j];
	 inter[i][j]='u';
	}
      else
       {
	lcs[i][j]=lcs[i][j-1];
	inter[i][j]='l';
       }
      }
     }
   }

  i=b;
  j=a;
  while(j>0)
       {
       if(inter[i][j]=='d')
	  {
	  sym[k]=e[j-1];
	  k++;
	  i--;
	  j--;
	  }
       else if(inter[i][j]=='u')
	  i--;
       else if(inter[i][j]=='l')
	  j--;
       }
puts(e);
puts(f);
  j=0;
  for(i=k-1;i>=0;i--)
     {
     final[j]=sym[i];
     j++;
     }
 for(i=0;i<=b;i++)
    {
    for(j=0;j<=a;j++)
	printf("%d & %c ",lcs[i][j],inter[i][j]);
	printf("\n");
    }
  printf("\n\n\n   ");
  for(i=0;i<k;i++)
      printf(" The LCS is %c",final[i]);
      printf("\n The number characters in the subsequence %d",k);
 getch();
}
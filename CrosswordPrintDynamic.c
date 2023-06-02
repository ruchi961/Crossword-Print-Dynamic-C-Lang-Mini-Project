#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void printspace(int r)
{     int j;
     for(j=0;j<r;j++)
     {printf(" ");
     }
}
void generate_across(char word[],int f,int r)
{
     int i,k,j;
      printspace(r);
     srand(time(NULL));
     i=rand()%strlen(word);


     for(k=f;k<strlen(word);k++)
     {   if (k!=i)
	      printf("%c",word[k]);
	 else
	      printf("_");
     }
}
void generate_down(char word[],int r,int dn)
{    int s,h,i,k;
     srand(time(NULL));
     i=rand()%strlen(word);
     s=rand()%strlen(word);
     {   if (i!=dn && s!=dn)
	     {
	      printspace(r);

	      printf("%c",word[dn]);

	      }
	 else {
	      printspace(r);
	      printf("_");
	      }
     }

}
void v_double()
{
     int k=0,r=2;
     char word1[]="double";
     generate_across(word1,k,r);


}
void v_default(int u)
{
    int r=2;
    char word2[]="default";

    generate_down(word2,r,u);
}
void v_unsigned(int u)
{
    int r=1;
    char word3[]="unsigned";

    generate_down(word3,r,u);
}
void v_else(int u)
{
    int r=2;
    char word4[]="else";

    generate_down(word4,r,u);
}
void v_int()
{
    int k=0,r=0;
    char word5[]="int";
    generate_across(word5,k,r);
}
void v_do()
{
    int k=0,r=4;
    char word6[]="do";
    generate_across(word6,k,r);
}
void call()
{ int up,dn;

  for(dn=0;dn<8;dn++)
  {

       if(dn==0)
       {
	 v_double();
       }
       else if(dn==6)
       { printf("\n");
       v_int();
       v_unsigned(dn);
       }
       else if(dn==7)
       { printf("\n");
       v_do();
       }
       else
       { printf("\n");
	for(up=0;up<8;up++)
       {
       if(up==2)
       {
	v_default(dn);
	}
	else if(up==4)
	{
	v_unsigned(dn);
	}
	else if(up==7)
	{
	v_else(dn);
	}
	}
   }

  }

}

void main()
{

	call();

	getch();
}

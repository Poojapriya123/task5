1#include<stdio.h>

int main()
{
    int  i,j,k,key;
  int s[5]={12,5,3,34,20};
    printf("the elements of the array before sorting  are \n");
    for(i=0;i<5;i++)
     printf("%d\n",s[i]);

      for(j=1;j<5;j++)
      {
       key=s[j];
       i=j-1;

         while(i>=0 && s[i]>key )

            {
                s[i+1]=s[i];
                 i--;

                 }
         s[i+1]=key;

          }
          printf("the elements of the array  after sorting are\n");
      for(k=0;k<5;k++)
     printf("%d\n",s[k]);


     }


#include"stdio.h"  
#include<stdlib.h>
 int main()  
 {  int i,j,k;  
 	for(i=1;i<=3;++i) 
 	{  for(j=1;j<=3;++j)  
 		{  for(k=1;k<=3;++k) 
			{  if(i==j || j==k || i==k) continue;  
  			   if (i!=1 && k!=1 && k!=3)  
 				{  printf("A vs %c\n",i+'X'-1);  
 				   printf("B vs %c\n",j+'X'-1);  
				   printf("C vs %c\n",k+'X'-1);  
				}  
 			}  
 		}  
 	}  
     
	 system("pause");
	 return 0;  
 }  

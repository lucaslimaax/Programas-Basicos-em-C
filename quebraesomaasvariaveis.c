#include <stdio.h>
 main()
  {
  	int x,soma,n[20],i,j;
  	printf("Entre com um numero:");
  	scanf("%d", &x);
  	i=0; soma=0;
  	while(x>=10) {
  		n[i]=x%10;
  		soma=soma+n[i];
  		x=x/10;
  		i++;
	  }
	  soma=soma+x;
	  n[i]=x;
	  for(j=i; j>=0; j--)
	  {
	  	printf("%d"  , n[j]);
	  	if(j!=0)
	  	printf("+");	
	  }
	  printf("=%d",soma);
	  system("pause >> log");
  }

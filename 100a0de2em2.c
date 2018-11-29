#include <stdio.h>
 main()
  {
  	int soma=0,i;
  	for(i=100; i>=0; i= i-2) {
	printf("   %d   ", i);
	soma = soma + i; 
	  }
	 printf("\n a soma =%d", soma);
	 system("pause >> log"); 
  }

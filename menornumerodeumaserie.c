#include <stdio.h>
 main()
  {
  	int menor,x,c,i=0;
  	printf("entre com alguns numeros");
  	printf("\n digite 'n' para sair\n");
  	while (1) {
  	 printf("\n numero %d:", i+1);
	   c = scanf("%d", &x); if (!c) break;
	   if (i==0)
	   menor = x;
	   else if (x < menor)
	   menor = x;
	   i++;	
	  }
	  printf("\n o menor numero e o : %d", menor );
	  system ("pause >> log");
  }

#include <stdio.h>
 main()
  {
  	float base,result;
  	int expoente,i;
  	printf("entre com a base");
  	scanf("%f", &base);
  	printf("\n entre com o expoente");
  	scanf("%d", &expoente); result=1;
  	 if (expoente > 0)
  	 for (i=0; i<expoente;i++)
  	  result = result*base;
  	  else for ( i=0; i<expoente*-1; i++)
  	   result= result * 1/base;
  	   printf("\n%.2f elevado a %d=%.2f",base,expoente,result);
  	   system ("pause >> log");
  }

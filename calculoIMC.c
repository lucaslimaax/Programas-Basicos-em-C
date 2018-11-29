#include <stdio.h>
 main()
 {
 	float altura, peso, imc;
 	printf("entre com sua altura:");
 	scanf("%f",&altura);
 	printf("\n entre com o peso:");
 	scanf("%f",&peso);
 	imc= peso/(altura*altura);
 	if (imc <= 18)
 	 printf("\n voce esta muito magro.imc=%.2f",imc);
 	else if (imc>18&&imc<=25)
 	 printf("\n imc normal: %.2f",imc);
 	else if(imc>25&&imc<=35)
 	 printf("\n gordo.imc=%.2f",imc);
 	else
 	 printf("\n muito gordo.imc=%.2f",imc);
 	system("pause >> log");
 }

#include <stdio.h>
 main()
 {
 	int d,p,r,b;
 	printf("Entre com um numero BINARIO:  ");
 	scanf("%d", &b);
 	p=1; d=0;
 	while(b>=10) {
 	r=b%10;
	 d=d+r*p;
	 p=p*2;
	 b=b/10;	
	 }
	 d=d+b*p;
	 printf("O Decimal= %d", d);
	 system("pause >> log");
 }    

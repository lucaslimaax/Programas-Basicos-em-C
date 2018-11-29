#include <stdio.h>
 main()
  {
  	int a, b, c;
  	printf("entre com 3 numeros:");
  	scanf("%d %d %d", &a, &b, &c);
  	if(a < b && b < c)
  	 printf("\n%d\n%d\n%d",a,b,c);
  	else if(a < c && c < b)
  	 printf("\n%d\n%d\n%d",a,c,b);
  	else if(b < a && a < c)
  	 printf("\n%d\n%d\n%d",b,a,c);
  	else if(c < a && a < b)
  	 printf("\n%d\n%d\n%d",c,a,b);
  	else if(b < c && c < a)
  	 printf("\n%d\n%d\n%d",b,c,a);
  	else printf("\n%d\n%d\n%d",c,b,a);
  	system("pause >> log");
  }

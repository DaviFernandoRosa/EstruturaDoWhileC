#include <stdio.h>
main ()
{
char nome[30];
int i ;
printf("\n Informe o nome:");
scanf("%s", nome);
i = 0;
do
{
printf("\n %d - %s", i, nome);
i++;
}
while (i != 10);
return (0);
}

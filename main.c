#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador[3] = {0,0,0};
    int nota[50];
		
	printf(" Atencao sao 50 notas digite uma nota seguida da outra\n ");

    for(contador[0] = 0; contador[0] < 3; contador[0]++)
	{
		printf("Digite a nota:");
        scanf("%i",&nota[contador[0]]);
        
        if (nota[contador[0]]>=60)
			contador[1]++;
	    else
			contador[2]++;
	}
	
	printf("%i alunos tiveram nota acima da media e %i abaixo da media.",contador[1],contador[2]);

    getch();
}

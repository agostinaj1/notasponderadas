#include <string.h>
#include <stdio.h>

int main() {
    float nota1,nota2,nota3;
    float notaf ;
    float pond1,pond2,pond3;
    
    char resp[4];
   
    do{
        printf("ingrese la 1er nota, la 2da nota, y la 3er nota \n");
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 10) {
			printf("Error: nota fuera de rango. Fin del programa.\n");
			break;
		}
        scanf("%f", &nota2);
        	if (nota2 < 0 || nota2 > 10) {
			printf("Error: nota fuera de rango. Fin del programa.\n");
			break;
		}
		
        scanf("%f", &nota3);
        if (nota3 < 0 || nota3 > 10) {
			printf("Error: nota fuera de rango. Fin del programa.\n");
			break;}
        
		
		
	
	
		
		
		
        pond1=nota1*0.25;
        pond2=nota2*0.30;
        pond3=nota3*0.45;
            notaf=(pond1)+(pond2)+(pond3);
            printf("la 1er nota es: %.2f \n ", nota1);
            printf("la 2da nota es: %.2f \n ", nota2);
            printf("la 3er nota es: %.2f \n ", nota3);
    
   printf(" la ponderacion de la 1er nota es: %.2f\n", pond1);
   printf(" la ponderacion de la 2da nota es: %.2f\n", pond2);
   printf(" la ponderacion de la 3er nota es: %.2f\n", pond3);
  printf("la nota final es: %.2f \n   ", notaf);
    if (notaf>=6.00){
         
        printf("materia aprobada \n");

    }else {
        
         printf("materia desaprobada \n");
    }
    printf("desea calcular mas notas? RESPONDER SI O NO\n");
    scanf("%s", resp);}
  while (strcmp(resp, "si") == 0);
  
printf("listooo, chaitoooo");


    return 0;

}

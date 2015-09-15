#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        // Variáveis //
    float l, h, k, p,km_atual, f, g, t, a;
    int y, m;
        // Entrada de dados //                    
    printf ("Saida as hh:mm : \n ");
    scanf ("%f", &h);         
    printf ("Informe a kilometragem atual: \n ");
    scanf ("%f", &k);                          
    printf ("Informe a capacidade do tanque: \n ");
    scanf ("%f", &l);
    printf ("Previsao de hora de chegada ao destino hh:mm: \n ");
    scanf ("%f", &g);
    printf ("Inserir dados da parada de abastecimento! \n");
    
   while (m<n)
   {
       printf ("Informe a hora da parada em hh:mm : \n ");
       scanf ("%f", &p);        
       printf ("Informe a kilometragem atual: \n ");
       scanf ("%f", &km_atual);                                                      
       printf ("Informe a quantidade de litros atual de combustivel: \n ");
       scanf ("%f", &t);
       f=(y-k)/(p-h);
       printf ("Velocidade media entre paradas: \n ", "%f");
       printf ("Consumo parcial: %f \n ", (l-t) );
       printf("Previsão hora de chegada: %f \n ", a-(p-h) );
       printf("Ultima parada? y (pressione  1) n (pressione 2);
       scanf ("%d", &y);
           if ( y==1)
           { 
               m=4;
           }
   } 
         
 return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
<<<<<<< HEAD

    // Variáveis //
    //
    // float kmsaida, distancia, kmparada, vm, litroabastecido, hora_chegada, conthora=0, contminutos, litros, litrosabastecidos;
    // int horasaida, minutossaida, horatotal, convminutos, convhora, y, m, n, horaparada, minutosparada;
    // char parada='n';
    //
    // // Entrada de dados //
    //
    // printf ("Informe a hora de saida:\n");
    // scanf ("%d", &horasaida);
    //
    // printf("E os minutos?\n");
    // scanf("%d", &minutossaida);
    //
    // printf ("Informe a kilometragem atual:\n");
    // scanf ("%f", & kmsaida);
    //
    // printf ("Informe qual a distancia total ate o seu  destino:\n");
    // scanf ("%f", &distancia);
    //
    // printf ("Inserir dados da parada de abastecimento!\n");
    //
    //
    // // Laço para quantidade de paradas //
    //
    // while (parada!='s')
    //
    // {
    //  
    //  printf ("Informe a hora da parada:\n");
    //  scanf ("%d", &horaparada);
    //
    //  printf ("E os minutos?\n");
    //  scanf ("%d", &minutosparada);
    //
    //  printf ("Informe a kilometragem atual:\n");
    //  scanf ("%f", &kmparada);
    //
    //  printf ("Informe a quantidade de litros de combustivel abastecido:\n ");
    //  scanf ("%f", &litroabastecido);
    //
    //  vm=(kmparada-kmsaida)/(horaparada-horasaida);
    //
    //  printf ("Velocidade media de %f entre paradas\n", vm);
    //
    //  printf ("Consumo parcial de combustivel: %f\n ", litroabastecido-litros);
    //
    //
    //
    //  if (horasaida>=0)
    //
    //  {
    //
    //  horasaida=horaparada;
    //  minutossaida=minutosparada;
    //  litros=litrosabastecidos;
    //  convminutos=horasaida*60;
    //  horatotal=convminutos+minutossaida;
    //  convhora=horatotal/60;
    //
    //
    //  while (conthora<convhora)
    //  {
    //      conthora++; 
    //      }
    //
    //      contminutos=(convhora-conthora)*60;
    //
    //      }
    //
    //      //printf("Previsão hora de chegada: %f\n ", a-(p-h) );
    //
    //      printf("Ultima parada? s/n");
    //      parada=getch();
    //
    //      }
    //
    //
    //      //system("pause");
    //
    //      return 0;
    //
    //      }







//       printf("Ultima parada? y (pressione  1) n (pressione 2);
  //     scanf ("%d", &y);
    //       if ( y==1)
      //     { 
        //       m=4;
          // }
=======
        /* Variáveis */
    float litros, km_saida, hora_parada, km_atual, vm, hora2, litros_abastecidos, hora_chegada;
    int y, minutos, hora;
        /* Entrada de dados */                    
    printf ("Informe a hora de saida: \n ");
    scanf ("%f", &hora);
    printf("E os minutos \n");
    scanf("%d", &minutos);
    printf ("Informe a kilometragem atual: \n ");
    scanf ("%f", &k);                          
    printf ("Informe a capacidade do tanque: \n ");
    scanf ("%f", &litros);
    printf ("Previsao de hora de chegada ao destino: \n ");
    scanf ("%f", &hora2);
    printf("d", minutos2);
    printf ("Inserir dados da parada de abastecimento! \n");
    
        /* Conversão de horas em minutos */
   
   if (hora>=0)
   {
       convminutos=hora*60;
       horatotal=convhora+minutos;
       convhora=horatotal/60;

   }

        /* Laço para quantidade de paradas */

   while (m<n)
   {
       printf ("Informe a hora da parada em hh:mm : \n ");
       scanf ("%f", &p);        
       printf ("Informe a kilometragem atual: \n ");
       scanf ("%f", &km_atual);                                                      
       printf ("Informe a quantidade de litros atual de combustivel: \n ");
       scanf ("%f", &t);
       f=(y-k)/(p-hora);
       printf ("Velocidade media entre paradas: \n ", "%f");
       printf ("Consumo parcial: %f \n ", (l-t) );
       printf("Previsão hora de chegada: %f \n ", a-(p-h) );
       printf("Ultima parada? sim (pressione  1) nao (pressione 2);
       scanf ("%d", &y);
           if ( y==1)
           { 
               m=4;
           }
>>>>>>> 978e76909ceba85e553431678e7ae17ecf31ed9a
   } 
         
 return 0
 }

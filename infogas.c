#include <stdio.h>
#include <stdlib.h>

    int main(void)

  {

 // Variáveis //
     int parada, n, x, horas;
     float horainicial, mininicial, kminicial, kmtrecho, distancia, kmpara, kmrestante, km0, kmpercorrido, horaparada, minparada, abast, abastacumulado, tempoviagem, tempoinicial, tempoparada, tempo0, vm, previsao, consumo, consumot, vmt, minutos;
 
     printf("\n\n\n\n");
     printf("INSTRUCOES: \nConsidere que a viagem será realizada dentro de um dia, ou seja, não ultrapassará 24 hrs.\nConsidere que o carro inicia a viagem com o tanque abastecido e a cada parada para abastecimento ele complete o tanque. \nDigite primeiramente a hora, e depois os minutos separadamente.\n\n");
 
 // Entradas de dados //
    
     do
     {
     printf ("Informe a hora de saida (H):\n");
     scanf ("%g", &horainicial);

     }while(horainicial<0 || horainicial>=24);
   
     do
     {
          printf("E os minutos (M)?\n");
          scanf("%g", &mininicial);

     }while(mininicial>=60 || mininicial<0);     
                                       
     do
     {
         printf ("Informe a kilometragem atual em km:\n");
         scanf ("%g", & kminicial);

     }while(kminicial<0);
      
     do
     {
         printf ("Informe qual a distancia total ate o seu  destino em km:\n");
         scanf ("%g", &distancia);

     }while(distancia<=0);

     printf("\n\n");
                                                              
 // Conversão horas em minutos //
     tempoinicial= mininicial/60.0+horainicial;
                                                                  
 // Paradas //
     printf ("Boa Viagem!\n\nInserir dados da parada de abastecimento!\n\n\7");
     n=2;
     parada=0;
     km0=kminicial;
     tempo0=tempoinicial;
     abastacumulado=0.0;
                                    
     while (n==2)
     {
          parada=parada+1;                                                                                                                             
          printf("Essa e a parada de numero: %d\n",parada);

          do
          {
               printf ("Informe a hora da parada (H):\n");
               scanf ("%g", &horaparada);
               
               printf ("E os minutos (M)?\n");
               scanf ("%g", &minparada);
               tempoparada= minparada/60.0+horaparada;

          }while(tempo0>tempoparada);
             
          do
          {
               printf ("Informe a kilometragem atual em km:\n");
               scanf ("%g", &kmpara);
          }while(kmpara<km0 || kmpara>(distancia+kminicial));
         
          do
          {
               printf ("Informe a quantidade de litros de combustivel abastecido:\n ");
               scanf ("%g", &abast);
          }while(abast<=0);
  
 // Tempo de viagem //
          tempoviagem=tempoparada-tempo0;
  
 // Espaço percorrido //
          kmtrecho=kmpara-km0;
                                                                                                                                                              
 // Velocidade media //
          vm=kmtrecho/tempoviagem;
                                                                                                                                                                    
 // Consumo //
          consumo=kmtrecho/abast;
                                                                                                                                                                           
 // Acumulação do abastecimento //
          abastacumulado=abastacumulado+abast;
                                                                                                                                                                 
 // Previsão de chegada //
          kmpercorrido=kmpercorrido+kmtrecho;
          kmrestante=distancia-kmpercorrido;
          previsao=kmrestante/vm;
 //Conversão de horas em minutos//
          horas=previsao;
          x=(previsao-horas)*60;
          minutos=x;
                                                                                                                                                             
          printf("Relatorio Parcial: \n\nVelocidade media: %g km/h \n",vm);
          printf("Consumo: %g km/l \n",consumo);
          printf("Previsao de chegada daqui a %d hora(s)",horas);
          printf(" e %g minuto(s) \n\n", minutos);
                                                                               
 // reset de espaço //
          km0=km0+kmtrecho;

 // Reset de tempo //
          tempo0=tempo0+tempoviagem;
 
          do
          {
               printf("Esta é sua ultima parada? para sim pressione 1 / para nao pressione 2.\n");
               scanf("%d", &n); 
          }while(n<1 || n>2);
 
          printf("\n\n");
     }
  
 // Velocidade media total //
     vmt=distancia/(tempo0-tempoinicial);

 // consumo total //
     consumot=distancia/abastacumulado;
 
     printf("Relatorio Final \n\n");
     printf("Velocidade media final: %g km/h \n",vmt);
     printf("Consumo final: %g km/l \n",consumot);
  }

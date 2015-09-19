#include <stdio.h>
#include <stdlib.h>

    int main(void)

  {

 // Variáveis //
     int parada, n;
     float horainicial, mininicial, kminicial, kmtrecho, distancia, kmpara, kmrestante, km0, kmpercorrido, horaparada, minparada, abast, abastacumulado, tempoviagem, tempoinicial, tempoparada, tempo0, vm, previsao, consumo, consumot, vmt;
 
     printf("Considere que a viagem será realizada dentro de um dia, ou seja, não ultrapassará 24 hrs.\n Considere que o carro inicia a viagem com o tanque abastecido e a cada parada para abastecimento ele complete o tanque.\n\n");
 
 // Entradas de dados //
    
     printf ("Informe a hora de saida:\n");
     scanf ("%g", &horainicial);
                          
     printf("E os minutos?\n");
     scanf("%g", &mininicial);
                                       
     printf ("Informe a kilometragem atual:\n");
     scanf ("%g", & kminicial);
                                          
     printf ("Informe qual a distancia total ate o seu  destino:\n");
     scanf ("%g", &distancia);
     printf("\n\n");
                                                              
 // Conversão horas em minutos //
     tempoinicial= mininicial/60.0+horainicial;
                                                                  
 // Paradas //
     printf ("Inserir dados da parada de abastecimento!\n\n");
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
               printf ("Informe a hora da parada:\n");
               scanf ("%g", &horaparada);
               
               printf ("E os minutos?\n");
               scanf ("%g", &minparada);
               tempoparada= minparada/60.0+horaparada;                                           
          }while(tempo0>tempoparada);
             
          do
          {
               printf ("Informe a kilometragem atual:\n");
               scanf ("%g", &kmpara);
          }while(kmpara<km0);
         
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
                                                                                                                                                             
          printf("Velocidade media: %g km/h \n",vm);
          printf("Consumo: %g km/l \n",consumo);
          printf("Previsao de chegada: %g hora(s) \n\n",previsao);
                                                                               
 // reset de espaço //
          km0=km0+kmtrecho;

 // Reset de tempo //
          tempo0=tempo0+tempoviagem;
 
          do
          {
               printf("Ultimo abastecimento? para sim pressione 1 / para nao pressione 2.\n");
               scanf("%d", &n); 
          }while(n<1 || n>2);
 
          printf("\n\n");
     }
  
 // Velocidade media total //
     vmt=distancia/(tempo0-tempoinicial);

 // consumo total //
     consumot=distancia/abastacumulado;
 
     printf("Relatorio final \n\n");
     printf("Velocidade media final: %g km/h \n",vmt);
     printf("Consumo final: %g km/l \n",consumot);
  }

#include <stdio.h>
#include <stdlib.h>

int main(void)

{

    float kmsaida, distancia, kmparada, vm, litroabastecido, horachegada, conthora, contminutos, litrosaida, litrosabastecidos, vmacumulativo, previsao, vmt, convminutos1, horatotal1, convhora1, minutoparada, convprevisao, convhora, horatotal;
    int horasaida, minutossaida, convminutos, y, m, n, horaparada, minutosparada, parada, contparada;
    printf("Considere que a viagem será realizada dentro de um dia, ou seja, não ultrapassará 24 hrs.\nConsidere que o carra inicia a viagem com o tanque abastecido e a cada parada para abastecimento ele complete o tanque.\n\n");
    printf ("Informe a hora de saida:\n");
    scanf ("%d", &horasaida);
    printf("\n");
    printf("E os minutos?\n");
    scanf("%d", &minutossaida);
    printf("\n");
    printf ("Informe a kilometragem atual:\n");
    scanf ("%f", & kmsaida);
    printf("\n);
    printf ("Informe qual a distancia total ate o seu  destino:\n");
    scanf ("%f", &distancia);
    printf("\n\n");
    printf ("Inserir dados da parada de abastecimento!\n\n");
    m=-1;
    for(parada=1;parada>m;parada++)
         {
         printf("Parada - %d\n\7",parada);
         printf ("Informe a hora da parada:\n");
         scanf ("%d", &horaparada);
         printf("\n");
         printf ("E os minutos?\n");
         scanf ("%d", &minutosparada);
         printf("\n");
         printf ("Informe a kilometragem atual:\n");
         scanf ("%f", &kmparada);
         printf("\n");
         printf ("Informe a quantidade de litros de combustivel abastecido:\n ");
         scanf ("%f", &litroabastecido);
         convminutos=horasaida*60;
         horatotal=convminutos+minutossaida;
         convhora=horatotal/60;
         convminutos1=horaparada*60;
         horatotal1=convminutos1+minutosparada;
         convhora1=horatotal1/60;
         vm=(kmparada-kmsaida)/(convhora1-convhora);
         printf ("Relatorio Parcial - %d \n\nVelocidade media de %f km/h entre paradas\n\n", parada, vm);
         printf ("Consumo parcial de combustivel: %g litro(s)\n\n", litroabastecido-litrosaida);
         if (horasaida>=0)
             {
             contminutos=(convhora-conthora)*60;
             previsao=(distancia-(kmparada-kmsaida))/vm;
             convprevisao=previsao-(convhora1-convhora);
             horasaida=horaparada;
             minutossaida=minutosparada;
             litrosaida=litroabastecido;
             conthora=0;
             while (conthora<convhora)
                 {
                 conthora++; 
                 }
             }       
          litrosaida=litrosaida+litroabastecido;
          vmacumulativo=vmacumulativo+vm;
          printf("Previsao de chegada daqui a %g hora(s)\n\n", previsao);
          printf("Ultima parada? s (Pressione 1) / n (Pressione 2) \n");
          scanf("%d", &n);
          if(n==1)
              {  
              break;
              }
          else
              if(n==2)
                  {
                  continue;
                  }
    }
    vmt=vmacumulativo/distancia;
    printf("\n\nRelatorio Final:\n\nVelocidade Media Total: %g km/h\n\n", vmt);
    printf("Consumo Total: %g litro(s)", litrosaida);
    system("pause");
    return 0;
}

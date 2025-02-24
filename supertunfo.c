#include <stdio.h>
int main(){


    int escolha;
    int escolha2;
    int resultado1, resultado2;

    // Variáveis carta 1.
   
    char  código1[20];
    char  nome1[20];
    float população1;
    float área1;
    float PIB1;
    char  número1[4];
    
    // Variáveis carta 2.
    
    char  número2[4]; 
    char  código2[20];
    char  nome2[20];
    float população2;
    float área2;
    float PIB2; 
   
   // Coleta os dados da carta 1.

    printf("Insira o nome da cidade 1: \n");
    scanf("%s", &nome1);
    
    printf("Insira a populaçao da cidade 1: \n");
    scanf("%e", &população1);
    
    printf("Insira a área da cidade 1: \n");
    scanf("%e", &área1);
    
    printf("Insira o PIB da cidade 1: \n");
    scanf("%e", &PIB1);
    
    printf("Insira o numero de pontos turísticos da cidade 1: \n");
    scanf("%s", &número1);

    printf("Insira o códgo da cidade *Ex: A1, A2, B1, B2: \n");
    scanf("%s", &código1); 

    // Mostra os valores das cartas 1.

    printf("Nome da cidade 1: %s\n", nome1);
    printf("População da cidade 1: %f\n", população1);
    printf("Área da cidade 1: %f\n", área1);
    printf("PIB cidade 1: %f\n", PIB1);
    printf("Pontos turísticos da cidade 1: %s\n", número1);
    printf("Códgo da cidade: %s\n", código1);

    // Coleta os dados da carta 2.
   
    printf("Insira o nome da cidade 2: \n");
    scanf("%s", &nome2);
    
    printf("Insira a populaçao da cidade 2: \n");
    scanf("%e", &população2);
    
    printf("Insira a área da cidade 2: \n");
    scanf("%e", &área2);
    
    printf("Insira o PIB da cidade 2: \n");
    scanf("%e", &PIB2);
    
    printf("Insira o numero de pontos turísticos da cidade 2: \n");
    scanf("%s", &número2);

    printf("Insira o códgo da cidade *Ex: A1, A2, B1, B2: \n");
    scanf("%s", &código2); 

    // Mostra os valores da cartas 2.

    printf("Nome da cidade 2: %s\n", nome2);
    printf("População da cidade 2: %f\n", população2);
    printf("Área da cidade 2: %f\n", área2);
    printf("PIB da cidade 2: %f\n", PIB2);
    printf("Pontos turísticos da cidade 2: %s\n", número2);
    printf("Códgo da cidade: %s\n", código2);
 
    //  Escolha de comparação das cartas.

    printf("*** Escolha qual atributo você deseja comparar 1/2 ***\n");
    printf("1. População da cidade\n");
    printf("2. Área da cidade\n");
    printf("3. PIB da cidade\n");
    printf("4. Número de pontos turísticos\n");
     scanf("%d", &escolha);
    
    // Resultado da comparação.

     switch (escolha)
    {
    case 1:
        if(população1 > população2){
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 =  população1 > população2 ? 1 : 0;
        }else if(população1 == população2){
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");
                
        }else{
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = população2 > população1 ? 1 : 0;  
        }
        break;
        
        case 2:
        if(área1 > área2){
            printf("Com base na comparação de área da cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 = área1 > área2 ? 1: 0;
        }else if(área1 == área2){
            printf("Com base na comparação de área entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");  
             
        }else{
            printf("Com base na comparação de área entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = área2 > área1 ? 1: 0;
        } break;
        case 3:
        if(PIB1 > PIB2){
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 = PIB1 > PIB2 ? 1 : 0;
        }else if(PIB1 == PIB2){
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");  
            
        }else{
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = PIB2 > PIB1 ? 1 : 0;
        }break;
        case 4:
        if(número1 > número2){
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 = número1 > número2 ? 1 : 0;
        }else if(número1 == número2){
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");    
            
        }else{
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = número2 > número1 ? 1 : 0;
        } break;
    default:
        printf("Opção inválida.");
        break;
    }
    
    // Escolha do segundo atributo
    
    printf("*** Escolha qual atributo você deseja comparar 2/2 ***\n");
    printf("1. População da cidade\n");
    printf("2. Área da cidade\n");
    printf("3. PIB da cidade\n");
    printf("4. Número de pontos turísticos\n");
    scanf("%d", &escolha2);
    
    if(escolha2 == escolha){
        printf("Você escolheu o mesmo atributo para comparação\n");
        printf("Tente novamente.\n");
        return 0;
        
    }else{
    
    switch (escolha2)
    {
    case 1:
        if(população1 > população2){
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 = população1 > população2 ? 1 : 0;
        
        }else if(população1 == população2){
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n"); 
               
        }else{
            printf("Com base na comparação de população entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = população2 > população1 ? 1 : 0;
        }
        break;
        
        case 2:
        if(área1 > área2){
            printf("Com base na comparação de área da cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 = área1 > área2 ? 1 : 0;
        }else if(área1 == área2){
            printf("Com base na comparação de área entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n"); 
             
        }else{
            printf("Com base na comparação de área entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = área2 > área1 ? 1 : 0;
        } break;
        case 3:
        if(PIB1 > PIB2){
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 = PIB1 > PIB2 ? 1 : 0;
        }else if(PIB1 == PIB2){
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");    
        }else{
            printf("Com base na comparação de PIB entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = PIB2 > PIB1 ? 1 : 0;
        }break;
        case 4:
        if(número1 > número2){
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 1 foi a vencedora\n");
            resultado1 = número1 > número2 ? 1 : 0;
        }else if(número1 == número2){
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 1 e 2 emparatam\n");  
             
        }else{
            printf("Com base na comparação de pontos turísticos entre cidade 1 e 2:\n");
            printf("Cidade 2 foi a vencedora\n");
            resultado2 = número2 > número1 ? 1 : 0;
        } break;
    default:
        printf("Opção inválida.");
        break;
    }
    }
    
    // Confirmação de resultado final
    
    if(resultado1 == resultado2){
        printf("Empatou!\n");
    }
    if (resultado1 > resultado2)
    {
        printf("Parabéns jogador da carta 1, você ganhou!\n");
    }if(resultado2 > resultado1){
        printf("Parabéns jogador da carta 2, você ganhou!\n");
    }
    
    
    
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}
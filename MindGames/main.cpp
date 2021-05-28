#include <iostream>
#include <time.h>                                                               //Habilita a Funcao Time
using namespace std;

int main() {
  int r1,r2,r3,r4,r5,c1,c2,c3,c4,c5,Dif = 2 ,vitoria = 0,                       // Declaração das Variaveis, R's = N Aleatorios, C's= Chute Frac.
  Opcao,espera,chute,msmlugar = 0,msmnumero = 0,vidas,resultado = 0;            // Opcao = Est Menu, Resultado = Acabou o Jogo independete de ganhar.

  string DifWrite = "MEDIO";                                                    // Seta dificulade no Médio
  srand(time(NULL));                                                            // Retira informações da hora para a criação de numeros randomicos

  while(Opcao != 4){                                                            //Laco Para manter o Jogo rodando até que o finalizar seja pressionado

   cout <<"---------------------------------------------------"<<endl;          //Interface Menu
   cout <<"|                                       " <<DifWrite << endl;
   cout <<"|                 1 - Para Jogar                  |"<<endl;
   cout <<"|                                                 |"<<endl;
   cout <<"|         2 - Para Selecionar Dificulade          |"<<endl;
   cout <<"|                                                 |"<<endl;
   cout <<"|               3 - Para Saber Mais               |"<<endl;
   cout <<"|                                                 |"<<endl;
   cout <<"|               4 - Para Finalizar                |"<<endl;
   cout <<"|                                                 |"<<endl;
   cout <<"---------------------------------------------------"<<endl;

   cin >> Opcao;

   switch(Opcao){                                                               // Switch escolhendo a funcao de acordo com a interface

    case 1:                                                                     // Caso 1 Jogar
     system("cls");
     do{                                                                        // Gera numeros randomicos e compara para todos serem diferentes

     r1 = rand()%6+1;
     r2 = rand()%6+1;
     r3 = rand()%6+1;
     r4 = rand()%6+1;
     r5 = rand()%6+1;
     }while(r2 == r1|| r3 == r1 || r3 == r2 || r4 == r1 || r4 == r2 || r4 == r3
           || r5 == r1 || r5 == r2 || r5 == r3 || r5 == r4 );



     switch(Dif){                                                                // Switch que muda o jogo conforme a dificuldade
       case 1:                                                                   // Caso 1 = Facil
          vidas = 8;
        while(resultado == 0 ){                                                  // Enquanto o resultado do jogo for 0, rodara esse laco


       cout <<"------------------------------------------------"<<endl;
       cout <<"|                                              |"  << endl;
       cout <<"| Palpite: ";

       cin >> chute;                                                             //Pega seu Palpite






       c3 = chute%10;                                                           // Separa seu palite em numeros de 1 digito Ex:
       chute = chute/10;                                                        // c3 = 123%10 = 12 sobra 3 = 3
       c2 = chute%10;                                                           // chute = 123/10 = 12.3 = 12
       chute = chute/10;                                                        // c2 = 12%10 = 10 sobra 2 = 2 , chute = 12/10 = 1,2
       c1 = chute%10;                                                           // c1 = 1%10 = 1






        if( r1 == c2 || r1 == c3 ){                                            // Compara se os numeros estao contidos no palpite
          msmnumero++;                                                         // Se estiver adiciona +1 na variavel msmnumero
        }

        if(r2 == c1|| r2 == c3 ){
          msmnumero++;
        }

        if(r3 == c1|| r3 == c2 ){
          msmnumero++;
        }

        if(r1 == c1){                                                          //Compara se os Numeros estao contidos nos lugares certos
          msmlugar++;                                                          //Se sim, adiciona +1 na variavel msmlugar
        }

         if(r2 == c2){
          msmlugar++;
        }

         if(r3 == c3){
          msmlugar++;
        }

        vidas--;                                                             //Vida diminui

        if(msmlugar == 3){                                                   //Se tiver 3 Numeros no msm lugar = vitoria e acaba o jogo
          vitoria = 10;
          resultado = 1;
        }

       if(vidas == 0){                                                      //Se a vida acabar, Sai do jogo.
         resultado = 1;
         vitoria = 20;
       }

       cout <<"| Numeros Certos na Posicao Errada: " << msmnumero<<"          |"<< endl;              //Mostra os numeros no lugar certo e os numeros
       cout <<"| Numeros Certos na Posicao Certa: " << msmlugar  <<"           |"<< endl;             // certos
       cout <<"| Vidas Restantes: "<<vidas <<"                           |"<<endl;
       cout <<"|                                              |"  << endl;

       msmlugar = 0;                                                                                   //Define as variaveis Novamente para 0
       msmnumero= 0;


   }


    switch (vitoria){                                                                                              //Switch Vitoria

        case 10:                                                                                               //Caso 1 msg vitoria e mostra a sequencia

             system("cls");                                                                                //Todos os clear sao utilizados para limpeza CMD

               cout <<"---------------------------------------------------"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                     PARABENS                    |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                   VOCE VENCEU                   |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|             A SEQUENCIA ERA: "<<r1<<r2<<r3 <<  "                |"<<endl;         cout <<"|                                                 |"<<endl;
               cout <<"|                Vidas Restantes: "<<vidas<<"               |"<<endl;
               cout <<"|                                 0 - Prosseguir  |"<<endl;
               cout <<"---------------------------------------------------"<<endl;

              cin>>espera;

              resultado = 0;                                                                                     //Volta o jogo para nao terminado



             break;

             case 20:                                                                                            //Caso 2 msg derrota e mostra sequencia

              system("cls");

               cout <<"---------------------------------------------------"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                     QUE PENA!                   |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                    VOCE PERDEU                  |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|             A SEQUENCIA ERA: "<<r1<<r2<<r3 <<  "              |"<<endl;         cout <<"|                                                 |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                                 0 - Prosseguir  |"<<endl;
               cout <<"---------------------------------------------------"<<endl;

               cin>>espera;

               resultado = 0;                                                                                     //Volta o jogo para nao terminado

               break;
               }
             break;

       case 2:
       vidas = 10;
        while(resultado == 0 ){                                                                        //Mesmo procedimento no codigo de cima


       cout <<"------------------------------------------------"<<endl;                                //Mudando so a Qtd de vidas e tamanho do palpite
       cout <<"|                                              |"  << endl;
       cout <<"| Palpite: ";

       cin >> chute;





       c4 = chute%10;
       chute = chute/10;
       c3 = chute%10;
       chute = chute/10;
       c2 = chute%10;
       chute = chute/10;
       c1 = chute%10;






        if( r1 == c2 || r1 == c3 || r1 == c4 ){
          msmnumero++;
        }

        if(r2 == c1|| r2 == c3 || r2 == c4 ){
          msmnumero++;
        }

        if(r3 == c1|| r3 == c2 || r3 == c4 ){
          msmnumero++;
        }

        if(r4 == c1|| r4 == c2 || r4 == c3 ){
          msmnumero++;
        }



        if(r1 == c1){
          msmlugar++;
        }

         if(r2 == c2){
          msmlugar++;
        }

         if(r3 == c3){
          msmlugar++;
        }

         if(r4 == c4){
          msmlugar++;
        }

        vidas--;

        if(msmlugar == 4){
          vitoria = 10;
          resultado = 1;
        }

       if(vidas == 0){
         resultado = 1;
         vitoria = 20;
       }

       cout <<"| Numeros Certos na Posicao Errada: " << msmnumero<<"          |"<< endl;
       cout <<"| Numeros Certos na Posicao Certa: " << msmlugar  <<"           |"<< endl;
       cout <<"| Vidas Restantes: "<<vidas <<"                           |"<<endl;
       cout <<"|                                              |"  << endl;

       msmlugar = 0;
       msmnumero= 0;


   }


    switch (vitoria){

        case 10:

             system("cls");

               cout <<"---------------------------------------------------"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                     PARABENS                    |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                   VOCE VENCEU                   |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|             A SEQUENCIA ERA: "<<r1<<r2<<r3<<r4 <<  "              |"<<endl;         cout <<"|                                                 |"<<endl;
               cout <<"|                Vidas Restantes: "<<vidas<<"               |"<<endl;
               cout <<"|                                 0 - Proseeguir  |"<<endl;
               cout <<"---------------------------------------------------"<<endl;

              cin>>espera;

              resultado = 0;



       break;

       case 20:

             system("cls");

               cout <<"---------------------------------------------------"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                     QUE PENA!                   |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                    VOCE PERDEU                  |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|             A SEQUENCIA ERA: "<<r1<<r2<<r3<<r4 <<  "              |"<<endl;         cout <<"|                                                 |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                                 0 - Prosseguir  |"<<endl;
               cout <<"---------------------------------------------------"<<endl;

               cin>>espera;

               resultado = 0;

         break;
        }

       break;

       case 3:
        vidas = 12;
        while(resultado == 0 ){


       cout <<"------------------------------------------------"<<endl;
       cout <<"|                                              |"  << endl;
       cout <<"| Palpite: ";

       cin >> chute;




       c5 = chute%10;
       chute = chute/10;
       c4 = chute%10;
       chute = chute/10;
       c3 = chute%10;
       chute = chute/10;
       c2 = chute%10;
       chute = chute/10;
       c1 = chute%10;






        if( r1 == c2 || r1 == c3 || r1 == c4 || r1 == c5){
          msmnumero++;
        }

        if(r2 == c1|| r2 == c3 || r2 == c4 || r2 == c5){
          msmnumero++;
        }

        if(r3 == c1|| r3 == c2 || r3 == c4 || r3 == c5){
          msmnumero++;
        }

        if(r4 == c1|| r4 == c2 || r4 == c3 || r4 == c5){
          msmnumero++;
        }

        if(r5 == c1|| r5 == c2 || r5 == c3 || r5 == c4){
          msmnumero++;
        }

        if(r1 == c1){
          msmlugar++;
        }

         if(r2 == c2){
          msmlugar++;
        }

         if(r3 == c3){
          msmlugar++;
        }

         if(r4 == c4){
          msmlugar++;
        }

         if(r5 == c5){
          msmlugar++;
        }

        vidas--;

        if(msmlugar == 5){
          vitoria = 10;
          resultado = 1;
        }

       if(vidas == 0){
         resultado = 1;
         vitoria = 20;
       }

       cout <<"| Numeros Certos na Posicao Errada: " << msmnumero<<"          |"<< endl;
       cout <<"| Numeros Certos na Posicao Certa: " << msmlugar  <<"           |"<< endl;
       cout <<"| Vidas Restantes: "<<vidas <<"                           |"<<endl;
       cout <<"|                                              |"  << endl;

       msmlugar = 0;
       msmnumero= 0;


   }


    switch (vitoria){

        case 10:

             system("cls");

               cout <<"---------------------------------------------------"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                     PARABENS                    |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                   VOCE VENCEU                   |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|             A SEQUENCIA ERA: "<<r1<<r2<<r3<<r4<<r5 <<  "              |"<<endl;         cout <<"|                                                 |"<<endl;
               cout <<"|                Vidas Restantes: "<<vidas<<"               |"<<endl;
               cout <<"|                                 0 - Proseeguir  |"<<endl;
               cout <<"---------------------------------------------------"<<endl;

              cin>>espera;

              resultado = 0;



        break;

        case 20:

             system("cls");

               cout <<"---------------------------------------------------"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                     QUE PENA!                   |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                    VOCE PERDEU                  |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|             A SEQUENCIA ERA: "<<r1<<r2<<r3<<r4<<r5 <<  "              |"<<endl;         cout <<"|                                                 |"<<endl;
               cout <<"|                                                 |"<<endl;
               cout <<"|                                 0 - Prosseguir  |"<<endl;
               cout <<"---------------------------------------------------"<<endl;

               cin>>espera;

               resultado = 0;

          break;
         }

        break;
      }


    case 5:
     system("cls");

     cout <<"---------------------------------------------------"<<endl;                                 //Tela após o jogo para nao Bugar
     cout <<"|                                                 |"<<endl;                                 //O menu
     cout <<"|                Obrigado Por Jogar!              |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                1 - Para Continuar               |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"---------------------------------------------------"<<endl;

      cin >>espera;

     system("cls");
    break;

    case 2:
     system("cls");

     cout <<"---------------------------------------------------"<<endl;
     cout <<"|                                                 |"<<endl;                      //Menu de Selecioanmento de dificuldade
     cout <<"|                    1 - Facil                    |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                    2 - Medio                    |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                   3 - Dificil                   |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"---------------------------------------------------"<<endl;

     cin >>Dif;
     if (Dif == 1){
       DifWrite = "FACIL";                                                                      //Seta a Dificuldade de acordo com Botao
     }                                                                                          //Pressionado

     if (Dif == 2){
       DifWrite = "MEDIO";
     }

     if (Dif == 3){
       DifWrite = "DIFICIL";
     }

     system("cls");
    break;

    case 3:

     system("cls");
      cout <<"---------------------------------------------------"<<endl;                       //Interface sobre
     cout <<"|                  MASTERMIND GAME                |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                 Desenvolvido por:               |"<<endl;
     cout <<"|                  Felipe Martini                 |"<<endl;
     cout <<"|                  Jeyson Gabriel                 |"<<endl;
     cout <<"|                  Nicolas Souza                  |"<<endl;
     cout <<"|                                                 |"<<endl;
     cout <<"|                    Maio/2021                    |"<<endl;
     cout <<"|            Professor: Rafael Martins    2-Voltar|"<<endl;
     cout <<"---------------------------------------------------"<<endl;

     cin >> espera;                                                                             //Espera alguma Tecla ser Pressionada
     system("cls");
    break;

    case 0:

    break;



    }

   }
}

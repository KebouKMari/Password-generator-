#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 void presentation();
int main()
{
    char password[51];
   char generator[61];
   int taille;
   int resp=1;
   char chiffre[]="0123456789";
   char min[]="abcdefghijklmnopqrstuvwxyz";
   char maj[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char special[]="!@*^$#&";
    presentation();

   do{

   printf("\n\n\n\n               Entrer votre mot de passe  :");
   scanf("%s",password);
   taille=strlen(password);
   taille=taille+10;
   printf("\n\n\n          LE MOT DE PASSE GENERE est : ");
   for(int i=0;i<taille;i++){
    int hasard=rand()%4;

    if(hasard==1){
        generator[i]=maj[rand()%26];
        printf("%c",generator[i]);
    }
    else if(hasard==2){
        generator[i]=special[rand()%7];
        printf("%c",generator[i]);
    }
    else if(hasard==3){
        generator[i]=chiffre[rand()%10];
        printf("%c",generator[i]);
    }
    else{
        generator[i]=min[rand()%26];
        printf("%c",generator[i]);
    }
   }
   printf("\n\n\n");
   system("pause");
   printf("\nVoulez - vous generer un autre mot de passe ??(Taper 1(OUI) et 0(NON) )....");
   scanf("%d",&resp);

   }while(resp==1);
   if(resp!=1){
    printf("         \n\nMerci d'avoir utiliser BLEMA PROTECT\n\n");
    exit(0);
   }

    return 0;
}

void presentation(){
system("color 3F");
printf("\n\n\n ----------------------------------------------------------------------------------------------------------------\n");
printf("                        BIENVENUE DANS LE GENERATEUR DE MOT DE PASSE - By Marivone Kebou \n");
printf("                                  (Securise tes mots de passe des pirates)          \n");
printf(" ------------------------------------------------------------------------------------------------------------------------");

}

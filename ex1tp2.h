int ex1()
{
  int S,b_200=0,b_100=0,b_50=0,b_20=0,b_10=0;
 printf("veuillez entrer la somme d'argent \n");
 scanf("%d",&S);

 while(S>=0){
      if(S>=200){
            S-=200;
        b_200++;

      }
     else if(S>=100){
             S-=100;
        b_100++;
      }
     else if(S>=50){
          S-=50;
        b_50++;
      }
     else if(S>=20){
          S-=20;
        b_20++;
      }
     else if(S>=10){
           S-=10;
        b_10++;
      }
     else{break;}
 }
      printf("le repartition d'argent est:\n %d de 200 \n %d de 100 \n %d de 50 \n %d de 20 \n %d de 10 ",b_200,b_100,b_50,b_20,b_10);
 }





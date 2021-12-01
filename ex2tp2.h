int ex2()
{


 float  PA,CA,FA,FV,PTHT,TVA,TTC,x,y,z;
 char Type;
 system ("color 4A");
 printf("Donner le type de produit \n");
 Type=getchar();
 printf("Donner le prix d'achat \n");
 scanf("%f",&PA);
 if (PA>9000)
 {
     {
     FA=PA*4/100;
     }
 if  (PA>2000)
 {
     FA=PA*0.1;
 }
 else
   {
       FA=0.0;
   }
 }
 CA=PA+FA;
 FV=CA*0.1;
 switch (Type) {
case 'x':
  TVA= 30./100.;

 break;
case 'y':
  TVA= 38./100.;;
 break;
case 'z':
 TVA= 43./100.; ;
 break;
 }
PTHT=CA+FV;
TTC=PTHT+PTHT*TVA;
printf(" prix d'achat est %f \n",PA );
printf(" prix de vente est %f \n",FA);
printf(" TVA est %f,TVA \n");
printf(" prix de vente est %f\n",PTHT);
printf("les frais est %f",FA);
printf(" prix totale est %f",TTC);
return 0;



}

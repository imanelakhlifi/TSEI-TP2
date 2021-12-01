	int ex5(){
// ex5 partie 1
	int Q[25],i,min,n=25;
for (i=0;i<n;i++)
{printf(" veuillez saisir un nombre svp \n");
scanf("%d",&Q[i]);
}
 min=Q[0];
 for (i=1;i<n;i++)
 {
 	if (Q[i]<min)
 	min=Q[i];
 }
 printf(" \n le nombre minimum est:%d",min);

}





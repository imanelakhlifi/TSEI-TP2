   int ex5p2()
{
	int S=0;
	int Q[4];
	int i;
	int n=4;
	for(i=0;i<n;i++)
	{ printf("veuillez saisir un nombre positive svp \n");
	scanf("%d",&Q[i]);
	if (Q[i]<0)
{ 	printf(" c'est une nombre negative veuillez saisir un nbr positive \n");
	scanf("%d",&Q[i]);
	}

	}
 {
S=S+Q[i];
 }
 printf(" LA SOMME EST:%d",S);
}

ex5p3()
{
	int n=5,Q[20],i,compteur=0;
		for(i=0;i<n;i++)
		{ printf("veuillez saisir un nombre positive svp \n");
	scanf("%d",&Q[i]);
	if (Q[i]<0)
{ 	printf(" c'est une nombre negative veuillez saisir un nbr positive \n");
system("pause");
return 0;
	}
}
for(i=0;i<n;i++)
{ if(Q[i]%2!=0)
compteur++;
}

printf(" les nbrs impaire sont :%d \n",compteur);


}

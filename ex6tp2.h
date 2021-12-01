int ex6()
{
  int S=0, n, i;
    printf(" veuillez saisir un nombre parfait \n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i == 0){
            S=S+i;
        }
    }
    if (S== n){
        printf(" c'est un nombre parfait");
    }
    else {
        printf(" ce n'est pas un nombre parfait");
    }
    return 0;
}


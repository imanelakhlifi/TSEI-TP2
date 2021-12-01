int ex4()
{

int nb, A,B,C,D,E,F;
    printf("donner un nombre");
    scanf("%d",&nb);
    if (0<nb<9)
    {
        printf("sa valeur en hexadecimal est:/n%d",nb);
    }
    switch (nb)
    {
        case 10:
        printf("sa valeur en hexadecimal est:/n%d",A);
        break;
        case 11:
        printf("sa valeur en hexadecimal est:/n%d",B);
        break;
        case 12:
        printf("sa valeur en hexadecimal est:/n%d",C);
        break;
        case 13:
        printf("sa valeur en hexadecimal est:/n%d",D);
        break;
        case 14:
        printf("sa valeur en hexadecimal est:/n%d",E);
        break;
        case 15:
        printf("sa valeur en hexadecimal est:/n%d",F);
        break;
    }
    if (nb>15)
    {
        printf("ERREUR");
    }
}

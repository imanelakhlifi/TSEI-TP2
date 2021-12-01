int ex3()
{
      char SF,sexe;
      int age;
    printf("\n entrer votre age\n");
    scanf("%d",&age);
    printf("\n tapez H si vous etes homme ou F si vous etes femme \n");
    scanf("%c",sexe);
    printf("\n tapez C si vous etes celibataire ou M si vous etes marie\n ");
    scanf("%c",&SF);
      if (sexe=='H'&&age<20&&SF=='C'||sexe=='H'&&age>70&&SF=='M'||sexe=='F'&&age<22&&SF=='C'||sexe=='F'&&age>55&&SF=='M')
      {
          printf(" \n n'est pas imposable\n");
      }
      else
      {
          printf("\n imposable \n");
      }
}

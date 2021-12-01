	 int ex7p2()
	 {
	 int S=27, val=1,D;
	printf("donnez la derniere valeur  :\n");
        scanf("%d", &D);
        for( val ; val <= D; val++){
                if(val % 2 == 0) S += (val - 1) * 9;
                else S += (val - 1) * 8;
        }
        printf("la somme est : %d \n", D, S);
}

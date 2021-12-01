
int ex7(){
	int  S=2,val=1,D;
	printf(" DONNEZ LA DERNNIERE VALEUR :\n");
	scanf("%d", &D);
	for( val ; val <= D; val++){
		if(val % 2 == 0) S += (val - 1) + 2;
		else S += (val - 1) + 4;
	}
	printf("LA SOMME  EST : %d \n", D, S);
	}

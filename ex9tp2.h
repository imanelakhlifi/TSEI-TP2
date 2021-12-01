int ex9(){
	int n, R, S = 0,i,j;
	printf("veuillez saisir n ieme valeur a calculer : \n");
	scanf("%d", &n);
	for( i = 1; i <= n; i++){
		R = pow(i, (2*i));
		for(j = 1; j < R; j++){
			R *= j;
		}
		S += R;
	}
	printf("la valeur  %d  de cette serie est: : %d \n", n, S);
}

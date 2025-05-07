main(){
	int a,b,s=0;
	printf("Please Input A Number:-");
	scanf("%d",&b);
	a=1;
	while(a<=b){
		s=s+a;
		a++;
	}
	printf("The Sum Of All Natural Number Are:-%d",s);
}

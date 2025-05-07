main(){
	int a=0,b,c;
	printf("Please Input A Digit:-");
	scanf("%d",&b);
	while(b>0){
		a++;
		b=b/10;
	}
	printf("The Counted Digit Is:-%d",a);
}

main(){
	int b,d,e=0,l;
	printf("Please Input A Number:-");
	scanf("%d",&b);
	l=b%10;
	while(b>0){
		e=b%10;
		b=b/10;
	}
	printf("First Digit Is:-%d",e);
	printf("\nLast Digit Is:-%d",l);
}

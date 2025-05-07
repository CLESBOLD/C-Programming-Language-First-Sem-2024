main(){
	int b,d,e=0;
	printf("Please Input A Number:-");
	scanf("%d",&b);
	while(b>0){
		d=b%10;
		e=e+d;
		b=b/10;
	}
	printf("%d",e);
}

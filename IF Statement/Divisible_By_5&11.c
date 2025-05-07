main(){
	int a;
	printf("Enter A Number");
	scanf("%d",&a);
	if (a%5==0||a%11==0){
		printf("%d Is Divisible",a);
	}
	else{
		printf("%d is Non-Divisible",a);	}
}

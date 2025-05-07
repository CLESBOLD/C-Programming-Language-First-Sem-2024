main(){
	int a;
	printf("Enter A Year");
	scanf("%d",&a);
	if(a%4==0){
		printf("%d Is A Leap Year",a);
	}
	else{
		printf("%d Is Non-Leap Year",a);
	}
}

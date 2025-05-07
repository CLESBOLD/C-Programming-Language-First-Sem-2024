main(){
	int a,b,c,d;
	printf("Please Enter Your Basic Salary:-");
	scanf("%d",&a);
	if(a<=10000){
		b=(a*20)/100;
		c=(a*80)/100;
		d=a+b+c;
		printf("Your Gross Salary Is:-%d",d);
	}
	else if(a<=20000){
		b=(a*25)/100;
		c=(a*90)/100;
		d=a+b+c;
		printf("Your Gross Salary Is:-%d",d);
	}
	else if(a>20000){
		b=(a*30)/100;
		c=(a*95)/100;
		d=a+b+c;
		printf("Your Gross Salary Is:-%d",d);
	}
}

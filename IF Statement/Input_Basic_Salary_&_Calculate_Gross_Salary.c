main(){
	int a,b,c,g;
	printf("Please Input Your Basic Salary:-");
	scanf("%d",&a);
	if(a<=10000){
		b=(a*20)/100;
		c=(a*80)/100;
		g=a+b+c;
		printf("Gross Salary:-%d",g);
	}
	else if(a<=20000){
		b=(a*25)/100;
		c=(a*90)/100;
		g=a+b+c;
		printf("Gross Salary:-%d",g);
	}
	else if(a>20000){
		b=(a*30)/100;
		c=(a*95)/100;
		g=a+b+c;
		printf("Gross Salary:-%d",g);
		}
}

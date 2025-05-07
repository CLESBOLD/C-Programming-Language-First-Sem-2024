main(){
	int a,b,c,d,e,f,g;
	printf("Please Enter The Marks Of Physics");
	scanf("%d",&a);
	printf("Please Enter The Marks Of Chemistry");
	scanf("%d",&b);
	printf("Please Enter The Marks Of Math");
	scanf("%d",&c);
	printf("Please Enter The Marks Of Biology");
	scanf("%d",&d);
	printf("Please Enter The Marks Of Computer");
	scanf("%d",&e);
	f=a+b+c+d+e;
	g=f*100/500;
	if(g>=90){
		printf("You Got A Grade Marks");
	}
		else if (a>=80){
		printf("You Got B Grade Marks");
	}
	else if (a>=70){
		printf("You Got C Grade Marks");
	}
	else if (a>=60){
		printf("You Got D Grade Marks");
	}
	else if (a>=50){
		printf("You Got E Grade Marks");
	}
	else if (a>=40){
		printf("You Got F Grade Marks");
}
	else{
		printf("You Are Failed");
	}
}

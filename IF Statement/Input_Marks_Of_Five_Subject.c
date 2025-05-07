main(){
	int a,b,c,d,e,f,g;
	printf("Please Input Your Physics Marks:-");
	scanf("%d",&a);
	printf("Please Input Your Chemistry Marks:-");
	scanf("%d",&b);
	printf("Please Input Your Math Marks:-");
	scanf("%d",&c);
	printf("Please Input Your Bilogy Marks:-");
	scanf("%d",&d);
	printf("Please Input Your Computer Marks:-");
	scanf("%d",&e);
	f=a+b+c+d+e;
	g=100*f/500;
	if(g>=90){
	printf("You Got A Grade");
	
	}
	else if(g>=80){
	printf("You Got B Grade");
	
	}
	else if(g>=70){
	printf("You Got C Grade");
	
	}
	else if(g>=60){
	printf("You Got D Grade");
	
	}
	else if(g>=50){
	printf("You Got E Grade");
	
	}
	else if(g>=40){
	printf("You Got F Grade");
	
	}
	else{
	printf("You Are Failed");
	
	}	
}

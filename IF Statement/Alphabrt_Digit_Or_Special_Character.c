main(){
	char a;
	printf("Please Enter A Character:-");
	scanf("%c",&a);
	if(a>='a'&&a<='z'){
		printf("%c Is An Alphabet",a);
	}
	else if(a>='0'&&a<='9'){
		printf("%c Is A Digit",a);
	}
	else{
		printf("%c Is A Special Character",a);
	}
}

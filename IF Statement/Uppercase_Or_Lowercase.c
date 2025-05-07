main(){
	char a;
	printf("Enter A Character:-");
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	if(a>='a'&&a<='z'){
		printf("%c Is A Lowercase Aplhabet",a);
	}
	 else{
	 	printf("%c Is A Uppercase Alphabet",a);
	 }
	 else{
	 	printf("%c Is Not An Alphabet",a);
	 }
}

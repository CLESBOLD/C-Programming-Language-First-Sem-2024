main(){
	char a;
	printf("Please Input An Alphabet");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("%c Is A Vowel",a);
	}
	else{
		printf("%c Is A Consonant",a);
	}
}

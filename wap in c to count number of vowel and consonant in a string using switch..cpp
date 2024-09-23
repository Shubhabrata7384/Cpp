#include<stdio.h>
int stringlen(char*str){
	int length =0;
	while(* str!='\0'){
		length++;
		str++;
	}
	return length;
}
int main (){
	char str[50];
	int vow=0,con=0;
	printf("Enter the string:");
	gets(str);
	int length=stringlen(str);
	for(int i=0;i<length;i++){
		switch(str[i]){
			case'a':
		    case'A':
		    case'e':
		    case'E':
		    case'i':
		    case'I':
		    case'o':
		    case'O':
		    case'u':
		    case'U':
		    vow ++;
		    break;
		    default:
		    	con++;
		    	
		}
	}
	printf("Vowel:%d & Consonants:%d",vow,con);
}



#include <stdio.h>
#include <string.h>

char string[200];

int main(){

 int cont, i;
 char c;
 cont = 0;
 i=0;

 while(c!='\n'){
	scanf("%c",&c);
	string[i]= c;
	i++;}
 for(i=0;i<199;i++){
	if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z')){
		if(string[i+1]<'A'||string[i+1]>'z'||(string[i+1]>'Z'&&string[i+1]<'a')){
			cont++;}
	}
	if(string[i]>='0'&&string[i]<='9'){
		if(string[i+1]=='.'||string[i+1]==','){
			if(string[i+2]>='0'&&string[i+2]<='9'){}
			else{
				cont++;}
		}
		else if(string[i+1]>='0'&&string[i+1]<='9'){}
		else{
			cont++;}
	}
			
 }

 printf("%d\n",cont);
 return 0;
}
	


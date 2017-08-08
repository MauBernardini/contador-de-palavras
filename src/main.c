
#include <stdio.h>
#include <string.h>

char string[200];
int caracteres[200];
void qual_caractere (char c, int i);

int main(){

 int cont, i;
 char c;
 cont = 0;
 i=0;

 while(c!='\n'){
	scanf("%c",&c);
	string[i]= c;
	qual_caractere(c,i);
	i++;}
 for(i=0;i++;i<199){
	if(caracteres[i]==0){
		if(caracteres[i+1]!=0){
			cont++;}
			    }
	if(caracteres[i]==1){
		if(caracteres[i+1]==0 || caracteres[i+1]==1){
			cont++;}
		if(caracteres[i+1]==2){
			if(string[i+1]!='.'){
				cont++;}
				      }
			    }
		   }
 printf("%s\n",string);
 for(i=0;i++;i<200){
 printf("%d\n",caracteres[i]);}
 printf("%d\n",cont);
 return 0;
}

void qual_caractere (char c, int i){
  if(c == '-' || c=='.' || c==',' || c==':' || c==';'){
	caracteres[i]=2;}
  if(c==' '||c=='\n'){
	caracteres[i]=1;}
  if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
	caracteres[i]=3;}
  else{
	caracteres[i]=0;}
 return;
}
				



#include<stdio.h>
#define MAX 256
#include<string.h>
int freq(char s[]){
	int len=strlen(s);
	int freq[MAX]={0};
	for(int i=0;i<len;i++){
		freq[int(s[i])]++;
	}
	int same=1,first=0;
	for(int i=0;i<MAX;i++){
		if(freq[i]>0){
		first=freq[i];
			
		}
	}
	for(int i=0;i<MAX;i++){
		if(freq[i]>0&&freq[i]!=first){
			same=0;
			break;
		}
	}
	return same;
}
int main()
{
	char s[50];
	scanf("%s",s);
	if(freq(s))
	printf("same freq");
	else{
		printf("not same freq");
	}
}

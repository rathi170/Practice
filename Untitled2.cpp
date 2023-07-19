#include<stdio.h>
const int m=4;
void mark_row(int a[][m],int n,int m,int i){
	for(int j=0;j<m;j++){
		if(a[i][j]!=0){
			a[i][j]=-1;
		}
	}
}
void  mark_col(int a[][m],int n,int m,int j){
	for(int i=0;i<n;i++){
		if(a[i][j]!=0){
			a[i][j]=-1;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==0){
				mark_row(a,n,m,i);
				mark_col(a,n,m,j);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<m;j++){
			if(a[i][j]==-1)
			printf("0");
			else
			printf("%d",a[i][j]);
		}
	}
}

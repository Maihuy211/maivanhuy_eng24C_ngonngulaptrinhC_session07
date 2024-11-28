# include <stdio.h>
int main(){
    int n,i;
	printf("so phan tu cua mang:  ");
	scanf("%d",&n);
	int a[n];
    for( i=0;i<n;i++){
	do{
	    scanf("%d",&a[i]);
		if(a[i]%2==0){
			printf("nhap lai: \n");
		}
	}while(a[i]%2==0);
}
    return 0;
    }
	

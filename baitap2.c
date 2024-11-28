# include<stdio.h>
int main(){
	int i,n[5];
    printf("nhap cac phan tu: \n");
	for(i=0;i<5;i++){
    printf("nhap n[%d]= ",i);
	scanf("%d",&n[i]);
	}
	printf("cac phan tu co trong mang la: \n");
	for(i=0;i<5;i++){
    printf("n[%d]=%d \n" ,i,n[i]);
	}
	
	
	return 0;
	}

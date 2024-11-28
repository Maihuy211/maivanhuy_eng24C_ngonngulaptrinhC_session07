# include<stdio.h>
int main(){
	int i,n[]={1,2,3,4,5};
	int size=sizeof(n)/sizeof(n[0]);
	printf("do dai cua mang la: %d\n",size);
		printf("cac phan tu co trong mang la \n");
	for(i=0;i<size;i++){
	printf("n[%d]=%d\n",i,n[i]);
	}
	return 0;
	}

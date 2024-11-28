# include<stdio.h>
int main(){
	int n[5]={3,6,7,2,4};
	printf("n[5]={3,6,7,2,4}\n");
	int i,max,min;
	    max=n[0];
	    min=n[0];
	for(i=0;i<5;i++){
	    if(n[i]>max){
	    	max=n[i];
	    	}
	    if(n[i]<min){
	    	min=n[i];
	    	}
	}
	printf("phan tu lon nhat trong mang la: %d\n",max);
	printf("phan tu nho nhat trong mang la: %d\n",min);
    return 0;
	}	


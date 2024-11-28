# include<stdio.h>
int main(){
	int i,n[5]={3,5,6,4,5};
    printf("n[5]={3,5,6,4,5}\n");
	int so_chan=0;
	for(i=0;i<5;i++){
	if(n[i]%2==0){	
        printf("phan tu la so chan trong mang la: ");
		printf("n[%d]=%d \n" ,i,n[i]);
         so_chan=1;
	    }
}
    if(!so_chan){
         printf("trong mang khng co so chan");		
		} 
   return 0;
	}

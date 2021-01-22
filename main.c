


#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);
void display_array(int32_t* pArray,int32_t len);
void swap_arrays(int32_t * pArray1,int32_t* pArray2,int32_t nitem1,int32_t nitem2);

int main(void)
{
	int32_t nItem1,nItem2;
	printf("Array Swapping Program\n");
	printf("Enter no of elements of Array-1 and Array-2:");
	scanf("%d  %d",&nItem1,&nItem2);

	if(nItem1<0 || nItem2<0 ){
		printf("You can not minus please return again");
		return 1;
	}

	int32_t Array1[nItem1];
	int32_t Array2[nItem2];

	for(uint32_t i=0;i<nItem1;++i){
		printf("Enter %d elements of array-1:",i+1);
		scanf("%d",&Array1[i]);
	}

	for(uint32_t i=0;i<nItem2;++i){
			printf("Enter %d elements of array-2:",i+1);
			scanf("%d",&Array2[i]);
		}

	printf("Before Swap:");
	printf("\n");

	display_array(Array1,nItem1);

	printf("\n");

	display_array(Array2, nItem2);

	printf("\n");

	printf("After Swap:\n");

	swap_arrays(Array1, Array2, nItem1, nItem2);


	printf("\n");

		display_array(Array1,nItem1);

		printf("\n");

		display_array(Array2, nItem2);

		printf("\n");

	wait_for_user_input();

	return 0;
}

void wait_for_user_input(void){
	printf("Please enter key to exist the program");

	while(getchar()!='\n'){
	//sadece girişi okuyor ve bir sey yapmıyor
	}

	getchar();

}
void display_array(int32_t* pArray,int32_t len){

	for(uint32_t i =0;i<len;i++){
		printf("%d\t",*(pArray+i));
	}

}

void swap_arrays(int32_t * pArray1,int32_t* pArray2,int32_t nitem1,int32_t nitem2){

	int32_t swap_len= nitem1<nitem2 ? nitem1 : nitem2;

	for(uint32_t i =0;i<swap_len;i++){
		int32_t temp=pArray1[i];
		pArray1[i]=pArray2[i];
		pArray2[i]=temp;
	}
}















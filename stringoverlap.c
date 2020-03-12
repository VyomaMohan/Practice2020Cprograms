#include<stdio.h>

//checks overlap of strings by comparing from the back
/*
Eg:
abcd
   abcd
abcd
  abcd
*/
//Also outputs the max overlap
//Input: Two strings to check for
//Output: What is compared at each stage and the maximum overlap number

main(){
	char str1[100],str2[100];
	int str1_len=0,str2_len=0;
	int itr_val,str_itr;
	int otr_itr,in_itr;
	int i,flag;
	int max_overlap;
	
	scanf("%s",str1);
	scanf("%s",str2);
	
	for(i=0;str1[i];i++)
		str1_len++;
	for(i=0;str2[i];i++)
		str2_len++;
	
	if(str1_len<str2_len)
		itr_val=str1_len;
	else
		itr_val=str2_len;
		
	max_overlap=0;
	
	for(otr_itr=0;otr_itr<itr_val;otr_itr++){
		printf("\n Iteration: %d",otr_itr);
		flag=0;
		for(in_itr=0;in_itr<=otr_itr;in_itr++){
			printf("\n Comparing %c and %c", str1[str1_len-1-(otr_itr-in_itr)],str2[in_itr]);
			if(str1[str1_len-1-(otr_itr-in_itr)]!=str2[in_itr])
				flag=1;
		}
		if(flag==0){
			printf("\n Overlap");
			max_overlap=otr_itr+1;	
		}
		else{
			printf("\n No Overlap");	
		}
	}
	
	printf("\n Max overlap: %d",max_overlap);
	
}

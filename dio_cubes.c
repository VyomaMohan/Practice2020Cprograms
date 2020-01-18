#include<stdio.h>

//code to find solutions for the equation x^3+y^3=z^3+w^3 taking the max values for x,y,z and w from the user
//matrix not optimized

//function to return cube
int cube(int n){
	return n*n*n;
}

main(){
	
	int x,y,z,w;
	int itr1,itr2,itr3,itr4;
	int left_mat[200][200],right_mat[200][200]; //matrices to store the possible values for lhs and rhs respectively
	
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	printf("Enter z:");
	scanf("%d",&z);
	printf("Enter w:");
	scanf("%d",&w);
	
	//calculate possible lhs
	for(itr1=0;itr1<x;itr1++){
		for(itr2=0;itr2<y;itr2++){
			left_mat[itr1][itr2]=cube(itr1+1)+cube(itr2+1);
		}
	}
	
	//calculate possible rhs
	for(itr1=0;itr1<z;itr1++){
		for(itr2=0;itr2<w;itr2++){
			right_mat[itr1][itr2]=cube(itr1+1)+cube(itr2+1);
		}
	}
	
	//compare all lhs to rhs to find the possible values
	for(itr1=0;itr1<x;itr1++){
		for(itr2=0;itr2<y;itr2++){
			for(itr3=0;itr3<z;itr3++){
				for(itr4=0;itr4<x;itr4++){
					if(left_mat[itr1][itr2]==right_mat[itr3][itr4]){
						printf("\nx=%d y=%d z=%d w=%d",itr1+1,itr2+1,itr3+1,itr4+1);
					}
				}
			}
		}
	}
	
	
}
	

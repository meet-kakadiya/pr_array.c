/*
Q4) WAP to print the total sum of a particular Row and Column from an 2-D array.
Enter the Size of Rows: 3
Enter the Size of Columns: 3

Enter the Value of A[0][0]: 1
Enter the Value of A[0][1]: 4
Enter the Value of A[0][2]: 5
Enter the Value of A[1][0]: 78
Enter the Value of A[1][1]: 4
Enter the Value of A[1][2]: 5
Enter the Value of A[2][0]: 2
Enter the Value of A[2][1]: 4
Enter the Value of A[2][2]: 78

Enter the Row number: 2
2 4 78
The Sum of Row is : 84
Enter the Column number: 2
5 5 78
The Sum of Column is : 88
*/
#include<stdio.h>
void main(){
	int row,column;
	printf("Enter the Size of Rows: ");
	scanf("%d",&row);
	printf("Enter the Size of Columns: ");
	scanf("%d",&column);
	printf("\n");
	int i,j;
	int a[row][column];
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		printf("Enter the Value of A[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
		}
	}	
	int cn,rn,rowsum=0,columnsum=0;
	printf("\nEnter the Row number: ");
	scanf("%d",&rn);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(i==rn){
				printf("%d ",a[rownumber][j]);
				rsum+=a[rownumber][j];
			}
		}
	}
	printf("\nThe Sum of Row is : %d",rsum);
	printf("\nEnter the Column number: ");
	scanf("%d",&cn);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(cn==j){
				printf("%d ",a[i][cn]);
				csum+=a[i][cn];
			}
		}
	}
	printf("\nThe Sum of Column is : %d",csum);
}

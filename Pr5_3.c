/*
Q3) WAP to transpose the 2-D array Matrix.
Enter the Size of Row in Array: 3
Enter the Size of Column in Array: 3

Enter the Value for Element A[0][0]: 1
Enter the Value for Element A[0][1]: 2
Enter the Value for Element A[0][2]: 3
Enter the Value for Element A[1][0]: 4
Enter the Value for Element A[1][1]: 5
Enter the Value for Element A[1][2]: 6
Enter the Value for Element A[2][0]: 7
Enter the Value for Element A[2][1]: 8
Enter the Value for Element A[2][2]: 9

The Transpose of Matrix is:
1 4 7
2 5 8
3 6 9
*/
#include<stdio.h>
void main(){
	int row,column;
	printf("Enter the Size of Row in Array: ");
	scanf("%d",&row);
	printf("Enter the Size of Column in Array: ");
	scanf("%d",&column);
	printf("\n");
	int i,j;
	int a[row][column];
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Enter the Value for Element A[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The value of Matrix is:\n ");
	printf("\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}

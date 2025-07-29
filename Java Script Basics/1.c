#include<stdio.h>
int main()
{
int row,col,i,j,k,a[10][10],spmatrix[10][3],transposematrix[10][10];
printf("Enter the row size : ");
scanf("%d",&row);
printf("Enter the column size : ");
scanf("%d",&col);
printf("Enter the elements of the sparse matrix: ");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("\n");
printf("Display Sparse Matrix \n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("%d \t",a[i][j]);
	}
	printf("\n");
}
printf("\n");
//Recording of non-zero elements
k=1;
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		if(a[i][j]!=0)
		{
			spmatrix[k][0]=i;
			spmatrix[k][1]=j;
			spmatrix[k][2]=a[i][j];
			k++;
		}
	}
}
spmatrix[0][0]=row;
spmatrix[0][1]=col;
spmatrix[0][2]=k-1;
printf("Tupple format \n");
for(i=0;i<=spmatrix[0][2];i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d \t",spmatrix[i][j]);
	}
	printf("\n");
}
printf("\n");
//initialize
transposematrix[0][0]=spmatrix[0][1];
transposematrix[0][1]=spmatrix[0][0];
transposematrix[0][2]=spmatrix[0][2];
//traverse and record
k=1;
for(i=0;i<=spmatrix[0][1];i++)
{
	for(j=1;j<=spmatrix[0][2];j++)
	{
		if(spmatrix[j][1]==i)
		{
			transposematrix[k][0]=spmatrix[j][1];
			transposematrix[k][1]=spmatrix[j][0];
			transposematrix[k][2]=spmatrix[j][2];
			k++;
		}
	}
}
printf("Display the tranpose of the sparse matrix \n");
for(i=0;i<=transposematrix[0][2];i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d \t",transposematrix[i][j]);
	}
	printf("\n");
}
}

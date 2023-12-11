/*
Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation: From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.

*/

#include<stdio.h>
#define R 3
#define C 3

int function(int s[][C],int a,int b)
{

	if(s[a][b]==1)
	{
		s[a][b]=2;
	}
	/*function(s,a,b-1);
	  function(s,a-1,b);
	  function(s,a,a+1);
	  function(s,a+1,b);*/
}
int main()
{
	int s[R][C]={{1,1,1},{1,1,0},{1,0,1}};

	int i=0,j=0,a=1,b=1;
	function(s,a,b-1);
	function(s,a-1,b);
	function(s,a,a+1);
	function(s,a+1,b);


	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
}



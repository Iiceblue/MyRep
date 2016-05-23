#include<stdio.h>

int main()
{
	char Array[3][7] = {{'a','B','c','D','e','f','\n'},{'a','b','c','d','e','f','\n'},{'g','f','b','B','F','G','\n'}};
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<7; j++)
		{
			printf("%c",Array[i][j]);
		}
		
	}
	return 0;
}


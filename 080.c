#include <stdio.h>

int main()
{
	
	int x, y, z;
	for(x = 0; x < 10; x++)
		{
			for(y = 0; y < 10; y++)
				{
					for(z = 0; z < 10; z++)
						{
							if(x + y == 5 && y + z == 3 && z + z == 2)
								{
									printf("x = %d, y = %d, z = %d\n", x, y, z);
								}
						}
				}
		}
	return 0;
}

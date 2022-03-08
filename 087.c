#include <stdio.h>
//新同学年龄问题


//判断一个数是几位数
int age_num(int age)
{
	int count = 0;
	while(age)
		{
			count++;
			age /= 10;
		}
	return count;
}


//比较这个数中是否把0~9都用了
int num_cmp(int num1, int num2)
{
	int i;
	int count = 0;
	int save1 = num1;
	int save2 = num2;
	for(i = 0; i < 10; i++)
		{
			num1 = save1;
			num2 = save2;
			while(num1 || num2)
				{
					if(num1%10 == i || num2%10 == i)
						{
							count++;
							break;
						}
					num1 /= 10;
					num2 /= 10;
				}
		}
	if(count == 10)
		{
			return 1;
		}
	return 0;
}

int main()
{
	int i;
	int power;
	
	for(i = 10; i < 25; i++)
		{
			power = i*i*i;
			if(age_num(power/i) == 3)
				{
					if(age_num(power) == 4)
						{
							if(age_num(power*i) == 6)
								{
									if(num_cmp(power,power*i) == 1)
										{
											break;
										}
								}
						}
				}
		}
	printf("the number is %d\n", i);
	return 0;
}

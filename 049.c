#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	for(a = 0; a < 2; a++)
		{
			for(b = 0; b < 2; b++)
				{
					for(c = 0; c < 2; c++)
						{
							for(d = 0; d < 2; d++)
								{
									for(e = 0; e < 2; e++)
										{
											if((a&&b+c+d+e == 3 || !a))
										}
								}
						}
				}
		}
}

//int main()
//{
//	int a, b, c, d, e, n;
//	for(a=0; a<2; a++)
//		{
//			for(b=0; b<2; b++)
//				{
//					for(c=0; c<2; c++)
//						{
//							for(d=0; d<2; d++)
//								{
//									for(e=0; e<2; e++)
//										{
//											n = a+b+c+d+e;
//											if(a==0 && n!=3)
//												{
//													if(b==0 && n != 0)
//														{
//															if(c==0 && n!=1)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//															else if( n==2)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//														}
//													else if( n == 1)
//														{
//															if(c==0 && n!=1)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//															else if( n==2)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//														}
//												}
//											else if( n==4)
//												{
//													if(b==0 && n != 0)
//														{
//															if(c==0 && n!=1)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//															else if( n==2)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//														}
//													else if(n == 1)
//														{
//															if(c==0 && n!=1)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//															else if(n==2)
//																{
//																	if(d==0 && n != 4)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																	else if(n == 5)
//																		{
//																			printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//																		}
//																}
//														}
//												}
//										}
//								}
//						}
//				}
//		}
//	return 0;
//}

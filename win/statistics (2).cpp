/*��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	int chara, space, number, other;
	chara = space = number = other = 0;


	while ((c = getchar()) != '\n')
	{
		if (((c >= 'a')&&(c <= 'z'))||((c >= 'A')&&(c <= 'Z')))
			chara++;
		else if ( c == ' ')
			space++;
		else if((c >= '0')&&(c <= '9'))
			number++;
		else 
			other++;
	}

	printf("char = %d\tspace = %d\tnumber = %d\tother = %d\n",chara,space,number,other);
	system("pause");  
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("#include <iostream>\n\n");
	printf("using namespace std;\n\n");
	printf("int main()\n");
	printf("{\n");
	printf("\tcout << \"Hello World!\" << endl;\n");
	printf("\treturn 0;\n");
	printf("}\n");
	system("pause");
	return 0;
}
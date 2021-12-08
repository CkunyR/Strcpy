#include <stdio.h>
#include <string.h>

//strcpy -> string copy---字符串拷贝
//strlen -> string length---字符串长度

int main()
{
	char arr1[] = "bit";
	char arr2[20] = "************";
	strcpy(arr2, arr1);
	
	printf("%s", arr2);

	return 0;
}
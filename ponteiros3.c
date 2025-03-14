#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n = 27;
	int *ptr = &n;
	int **ptr_ptr = &ptr;
	
	printf("n = %d | &n = %d\n", n, &n);
	printf("n = %d | &n = %d\n", *ptr, ptr);
	printf("n = %d | &n = %d\n", **ptr_ptr, *ptr_ptr);
	
return 0;
}

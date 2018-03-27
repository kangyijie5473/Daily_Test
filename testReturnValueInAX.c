#include <stdio.h>
int add(int a, int b, int c, int d, int e, int f, int g, int h) { // 8 个参数相加
  // int sum = a + b + c + d + e + f + g + h;
  // return sum;
  // 
  	if(a == 1)
  		return a;
  	__asm__ __volatile__ ("movq $0x07, %rax");
  	// return value is in %rax(x64)/ %eax(x86)
}

int main(void) {
  int i = 10;
  int j = 20;
  int k = i + j;
  int sum = add(11, 22,33, 44, 55, 66, 77, 88);
  printf("%d\n", sum);
  int m = k; 

  return 0;
}
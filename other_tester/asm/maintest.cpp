#include <iosteam>

int main() {
  int a = 1, b = 2, c;

  __asm{
    mov eax, a;
    mov ebx, b;
    add eax, ebx;
    mov c, eax;
  }
  return 0;
}

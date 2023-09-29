void decompor(int n) {
  
  if (n <= 2) {
    printf("%d\n", n);
    return;
  }

  
  int fatores[100];
  int num_fatores = 0;

  
  for (int i = 2; i <= sqrt(n); i++) {
    
    while (n % i == 0) {
      fatores[num_fatores++] = i;
      n /= i;
    }
  }

  
  if (n > 1) {
    fatores[num_fatores++] = n;
  }

  
  for (int i = 0; i < num_fatores; i++) {
    printf("%d ", fatores[i]);
  }
  printf("\n");
}

int main() {
  int n;
  printf("Digite um número inteiro maior do que 2: ");
  scanf("%d", &n);

  decompor(n);

  return 0;
}

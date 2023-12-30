#include <stdio.h>

int main() {
    int k_rice, k_veg;
    
    // Ввод значений переменных
    scanf("%d %d", &k_rice, &k_veg);
    
    // Вычисление стоимости обеда
    int cost = k_rice + 2 * k_veg;
    
    // Вывод результата
    printf("%d\n", cost);
    
    return 0;
}


#include <stdio.h>

int main() {
    float amount, discount = 0, delivery = 0, total;
    int type;

    scanf("%f %d", &amount, &type);

    if (amount >= 500) {
        delivery = 0;
        if (type == 1)
            discount = amount * 0.10;
    } else {
        delivery = 50;
    }

    total = amount - discount + delivery;

    printf("Final amount = %.2f\n", total);

    return 0;
}

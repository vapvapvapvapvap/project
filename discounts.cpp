#include "Discounts.h"

double applyDiscounts(double total, int onion, int parsley) {
    double discount = 0;

    // Скидка на петрушевый чай
    if (parsley >= 3) {
        discount += (parsley * 75) * 0.05;
    }

    // Каждый 4-й литр лукового бесплатно
    int freeOnion = onion / 4;
    discount += freeOnion * 80;

    // Общая скидка 13%
    if (total > 1000) {
        discount += total * 0.13;
    }

    return total - discount;
}
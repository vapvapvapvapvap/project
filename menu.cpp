#include "Menu.h"
#include "Products.h"
#include "Cart.h"
#include "Discounts.h"
#include <iostream>

using namespace std;

void runMenu() {
    int apple, orange, onion, parsley;

    showProducts();

    cout << "\nВведите количество:\n";

    cout << "Яблочный: ";
    cin >> apple;

    cout << "Апельсиновый: ";
    cin >> orange;

    cout << "Луковый: ";
    cin >> onion;

    cout << "Петрушевый чай: ";
    cin >> parsley;

    double total = calculateTotal(apple, orange, onion, parsley);
    double finalTotal = applyDiscounts(total, onion, parsley);

    cout << "\nСумма без скидок: " << total;
    cout << "\nИтого со скидками: " << finalTotal << endl;
}
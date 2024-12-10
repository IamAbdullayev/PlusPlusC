#include "Account.h"

/*

1. Explain why public inheritance is suitable for the SavingsAccount class.
-- Я думаю что этот класс (SavingsAccount) не выполняет критическую операцию, она увеличивает баланс клиента.

2. Discuss the advantages of using protected inheritance for the CheckingAccount class.
-- Думаю этот класс (CheckingAccount) выполняет регулярную задачу, например, обслуживание карты и т.д.
-- Поэтому извне к нему доступ запрещен, также это операция вычитания. Чтобы избежать утечки денег необхожимо инкапсуляция.

3. Justify the use of private inheritance for the CreditCardAccount class.
-- Покупка это операция, которая выполняет сам пользователь, поэтому и доступ должен быть приватным.
-- Только сам владелец карты долже иметь доступ к её элементам.

*/


int main() {
    /*    Example Usage    */

    SavingsAccount savings(1001, "John Doe", 1000.0);
    CheckingAccount checking(2001, "Jane Smith", 1500.0);
    CreditCardAccount creditCard(3001, "Alice Johnson", 500.0);

    savings.deposit(500);
    savings.applyInterest(0.05);
    savings.withdraw(200);
    
    checking.applyMonthlyFee(10);

    creditCard.makePurchase(200);
    creditCard.makePurchase(400);

	return 0;
}
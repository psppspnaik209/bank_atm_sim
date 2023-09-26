#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){

double balance = 0;
int choice = 0;

do{
    std::cout << "******************* \n";
      std::cout << "Welcome to X Bank: \n";
    std::cout << "Enter you choice: \n";
    std::cout << "******************* \n";
    std::cout << "1. Show Balance \n" << "2. Deposit Money \n" << "3. Withdraw money \n" << "4. Exit \n";
    std::cin >> choice;

    switch(choice){
      case 1: showBalance(balance);
                break;
      case 2: balance = balance + deposit();
              showBalance(balance);
                break;
      case 3: balance = balance - withdraw(balance);
              showBalance(balance);
                break;
      case 4: std::cout << "Thanks for visiting! \n" << "********************";
                break;
      default: std::cout << "Invalid respone \nPlease try again \n";
    }
  }while(choice != 4);
}


void showBalance(double balance){
            std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){

  double amount = 0;

  std::cout << "Enter the amount you want to deposit: ";
  std::cin >> amount;
  if (amount > 0){
    return amount;
  }
  else{
    std::cout << "\nThats not a valid amount: ";
  }
          return 0;
}

double withdraw(double balance){
  double amount = 0;
  std::cout << "Enter amount you want to withdraw: ";
  std::cin >> amount;

  if (amount > balance){
    std::cout << "You do not have enough funds to withdraw\n";
    return 0;
  }
  else if(amount < 0){
    std::cout << "Thats not a valid amount\n";
    return 0;
  }
  else{
    return amount;
  }
          return 0;
}

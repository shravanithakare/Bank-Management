// Method to Open a new account.
void Bank::open_account()
{
    // Enter Name of a Customer
    name = "xyz Gupta";

    cout << "Enter your full name: "
         << name << endl;

    // Enter City of a Customer
    address = "Banglore";
    cout << "Enter your address: "
         << address << endl;

    // Enter Type of Account(Saving or Current)
    acc_type = 'S';
    cout << "Type of account you want "
         << "to open saving(S) or Current(C): "
         << acc_type << endl;

    // Enter Amount to deposit
    balance = 8000;

    cout << "Enter the amount for deposit: "
         << balance << endl;
    cout << "Account Created Successfully";
}

#include <bits/stdc++.h>
using namespace std;

int usr = 0;

class Account
{
    string name;
    int type;
    long int acno;
    float balance;

public:
    void accept()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter Account number : ";
        cin >> acno;
        cout << "Enter Balance : ";
        cin >> balance;
    }
    void deposit()
    {
        int temp;
        cout << "Enter amount to deposit : ";
        cin >> temp;
        {
            balance = balance + temp;
            cout << "Account Balance : " << balance;
        }
    }
    void withdraw()
    {
        int temp;
        cout << "Enter amount to withdraw : ";
        cin >> temp;
        if (temp > balance)
        {
            cout << "\nInsufficient Balance!!";
        }
        else
        {
            balance = balance - temp;
            cout << "Account Balance : " << balance;
        }
    }
    void display()
    {
        cout << "\nAccount Number : " << acno;
        cout << "\tName : " << name;
        cout << "\tBalance : " << balance;
    }
    long int getac()
    {
        return acno;
    }
    void close_account()
    {
        int temp;
        cout << "Withdrawing amount : " << balance;
        balance = 0;
        cout << "Account Closed";
    }
};

int main()
{
    int ch = 1, n, key, flag = 0;
    Account temp;
    vector<Account> bank;
    while (ch != 0)
    {
        flag = 0;
        cout << "\n0.Exit\n1.Enter Records\n2.Display Records\n3.Deposit\n4.Withdraw\n5.Close Account\nEnter choice : ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            cout << "Thank You!!";
            break;
        case 1:
            cout << "\nEnter Number of Users : ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                Account temp;
                temp.accept();
                bank.push_back(temp);
                usr++;
            }
            break;
        case 2:
            cout << "\nDisplaying Records of all accounts :-\n";
            for (int i = 0; i < usr; i++)
            {
                bank[i].display();
            }
            break;
        case 3:
            cout << "Enter Account number : ";
            cin >> key;
            for (int i = 0; i < usr; i++)
            {
                if (bank[i].getac() == key)
                {
                    bank[i].deposit();
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                cout << "\nRecord not found!!";
            }
            break;
        case 4:
            cout << "Enter Account number : ";
            cin >> key;
            for (int i = 0; i < usr; i++)
            {
                if (bank[i].getac() == key)
                {
                    bank[i].withdraw();
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                cout << "\nRecord not found!!";
            }
            break;
        case 5:
            cout << "Enter Account number : ";
            cin >> key;
            for (int i = 0; i < usr; i++)
            {
                if (bank[i].getac() == key)
                {
                    bank[i].close_account();
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                cout << "\nRecord not found!!";
            }
            break;

        default:
            cout << "\nEnter a valid choice";
        }
    }
}
/*
0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 1

Enter Number of Users : 5
Enter name : Tarang
Enter Account number : 1
Enter Balance : 132222
Enter name : Vatsal
Enter Account number : 2
Enter Balance : 444444
Enter name : Jeel
Enter Account number : 3
Enter Balance : 43212
Enter name : Keval
Enter Account number : 4
Enter Balance : 54323
Enter name : Vandan
Enter Account number : 5
Enter Balance : 87654

0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 2

Displaying Records of all accounts :-

Account Number : 1      Name : Tarang   Balance : 132222
Account Number : 2      Name : Vatsal   Balance : 444444
Account Number : 3      Name : Jeel     Balance : 43212
Account Number : 4      Name : Keval    Balance : 54323
Account Number : 5      Name : Vandan   Balance : 87654
0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 3
Enter Account number : 1
Enter amount to deposit : 10000
Account Balance : 142222
0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 4
Enter Account number : 3
Enter amount to withdraw : 50000

Insufficient Balance!!
0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 4
Enter Account number : 2
Enter amount to withdraw : 20000
Account Balance : 424444
0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 2

Displaying Records of all accounts :-

Account Number : 1      Name : Tarang   Balance : 142222
Account Number : 2      Name : Vatsal   Balance : 424444
Account Number : 3      Name : Jeel     Balance : 43212
Account Number : 4      Name : Keval    Balance : 54323
Account Number : 5      Name : Vandan   Balance : 87654
0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 5
Enter Account number : 5
Withdrawing amount : 87654Account Closed
0.Exit
1.Enter Records
2.Display Records
3.Deposit
4.Withdraw
5.Close Account
Enter choice : 0
Thank You!!
*/
class Bank:
    def __init__(self,balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000
    def get_balance(self):
         print(self.balance)
    def deposite(self,amount):
        if(amount > 0):
            self.balance += amount
            print(f"Deposite Success amount of {amount}")
        else:
             print(f"Deposite Faild,because of lower of amount {amount}")
    def withdraw(self,amount):
        if self.balance > amount and self.min_withdraw < amount and self.max_withdraw > amount:
            self.balance -= amount
            print(f"Withdraw successfull amount of{amount}")
        else:
            print(f"Withdraw filed amount of {amount}")

rupali_bank = Bank(100000)
rupali_bank.get_balance()
rupali_bank.withdraw(30)
rupali_bank.deposite(1)
print(rupali_bank.balance)
    

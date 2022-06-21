# ExceptionHandling

For this challenge we want to integrate our own user-defined exception classes into the Account class
hierarchy.

What you should do is:
1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception message.
   This exception object should be thrown from the Account class constructor if an account object is created with a negative 
   balance.
   
2. Derive InsufficientFundsException from std::exception and implement the what() method to provide an exception message.
   This exception object should be thrown if a withdraw results in a negative balance.
   You should throw this exception object from the Account withdraw method.
   



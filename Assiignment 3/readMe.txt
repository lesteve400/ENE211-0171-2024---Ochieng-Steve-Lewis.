            TASK 1
     1.	A normal variable stores a value directly in it, while a pointer stores the memory address of another variable. Variables access memory directly whereas pointers access memory indirectly through dereferencing.
     2.	A variable declaration reserves memory for data storage while a pointer declaration reserves memory to store an address. The & operator is used to get an address, and the * operator is used to access the value at an address
     3.	Dereferencing means accessing or modifying the value stored at the memory address pointed to by a pointer using the * operator.
     4.	Pointers are preferred when modifying variables inside functions, swapping values, handling large data efficiently and managing dynamic memory.
     5.	Improper use of pointers can cause memory corruption, crashes or undefined behavior. Invalid memory access and uninitialized pointers are common risks.
     6.	In call by value, a copy of the variable is passed, so changes do not affect the original. In call by reference, the address is passed, allowing the function to modify the variable. 
     7.	Practical use scenarios:
             a.	Call by value: Calculations, read only operations.
             b.	Call by reference: Updating variables, swapping variables, memory efficiency.  

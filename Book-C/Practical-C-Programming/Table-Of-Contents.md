# Table of Contents

## Preface
    -> Who this book is for
    -> What this book covers
    -> To get the most out of this book:
        - Download the example code files
        - Download the color images
        - Conventions used
    -> Sections
        - How to do it&#x2026;
        - How it works&#x2026;
        - There's more&#x2026;
        - See also
    -> Get in touch
        - Reviews
### 1 - Working with Arrays
        . Inserting an element in an array
            $ How to do it&#x2026;
            $ How it works...
            $ There's more...
        . Multiplying two matrices
            $ How to do it&#x2026;
            $ How it works...
            There&#x2019;s more&#x2026;
        . Fiding the common elements in two arrays
            $ How to do it&#x2026;
            $ How it works...
        . Fiding the difference between two sets or arrays
            $ How to do it&#x2026;
            $ How it works...
        . Fiding the unique elements in an array
            $ How to do it&#x2026;&#xA0;
            $ How it works...
        . Fiding whether a matrix is sparse
            $ How to do it&#x2026;
            $ How it works...
            $ There's more...
        . Merging two sorted arrays into a single array
            $ How to do it&#x2026;
            $ How it works...

### 2 - Managing Strings
        . Determining whether the string is a palindrome&#xA0;
            $ How to do it&#x2026;
            $ How it works...
        . Finding the ocurrence of the first repetitive character in a string
            $ How to do it&#x2026;
            $ How it works...
        . Displaying the count of each character in a string
            $ How to do it&#x2026;
            $ How it works...
        . Counting vowels and consoants in a sentence
            $ How to do it&#x2026;
            $ How it works...
        . Converting the vowels in a sentence to uppercase
            $ How to do it&#x2026; 
            $ How it works... 

### 3 - Exploring Functions
        . What is a stack?
        . Finding whether a number is an Armstrong number
            $ How to do it&#x2026;
            $ How it works...
        . Returning maximum and minimum values in an array
            $ How to do it&#x2026;
            $ How it works...
        . Finding the greatest common divisor using recursion
            $ How to do it&#x2026;
            $ How it works...
        . Converting a binary number into a hexadecimal number
            $ How to do it&#x2026;
            $ How it works...
        . Fiding whether a number is a palindrome&#xA0;
            $ How to do it&#x2026;
            $ How it works...

### 4 - Preprocessing and Compilation
        . Performing conditional compilation with directives
            $ How to do it...
            $ How it works...
        . Applying assertions for validation
            $ How to do it...
            $ How it works...
        . Using assertions to ensure a pointer is not pointing to NULL
            $ How to do it&#x2026;
            $ How it works...
        . Catching errors early with compile-time assertions 
            $ How to do it...
            $ How it works...
        .Applying stringize and token-pasting operators
            $ How to do it...
            $ How it works...

### 5 - Deep Dive into Pointers
        . What is a pointer?
        . Reversing a string using pointers
            $ How to do it&#x2026;              
            $ How it works...
        . Fiding the largest value in an array using pointers
            $ How to do it &#x2026;
            $ How it works...
        . Sorting a singly linked list
            $ How to do it&#x2026;   
            $ How it works...
                @ Creating a singly linked list
                @ Sorting the singly linked list
                    > The first&#xA0;iteration
                    > The second&#xA0;iteration
                    > The third&#xA0;and fourth&#xA0;iterations
        . Fiding the transpose of a matrix using pointers
            $ How to do it&#x2026;
            $ How it works...
        . Accessing a structure using a pointer
            $ How to do it&#x2026;
            $ How it works...

### 6 - File Handling
        . Functions used in file handling
            $ Functions commonly used in sequential file handling
                @ fopen()
                @ fclose()
                @ fgets()    
                @ fputs()
            $ Functions commonly used in random files
                @ fseek()
                @ ftell()
                @ rewind()
        . Reading a text file and converting all characters after the period into uppercase
            $ How to do id&#x2026;
            $ How it works...   
        . Displaying the contents of a random file in reverse order
            $ How to do it&#x2026;
            $ How it works...  
        . Counting the number of vowels in a file
            $ How to do it&#x2026;
            $ How it works...
        . Replacing a word in a file with another word
            $ How to do it&#x2026;
            $ How it works...
        . Encrypting a file
            $ How to do it&#x2026;
            $ How it works...
            $ See also

### 7 - Implementing Concurrency
        . What are processes and threads?
            $ Mutual exclusion
        . Performing a task with a single thread
            $ How to do it&#x2026;
            $ How it works...
        . Using mutex to share data between two threads
            $ How to do it&#x2026;
            $ How it works...
        . Understanding how a deadlock is created
            $ How to do it&#x2026;
            $ How it works...
        . Avoiding a deadlock
            $ How to do it&#x2026;
            $ How it works...

### 8 - Networking and Inter-Process Communication
        . Communication between processes using pipes
            $ Creating and to connecting processes
                @ pipe()
                @ mkfifo()
                @ write()
                @ read()
                @ perror()  
                @ fork()
            $ One process, both writing and reading from the pipe
                @ How to do it&#x2026;
                @ How it works...
            $ One process writing into the pipe and another process reading from the pipe
                @ How to do it&#x2026; 
                @ How it works...
        . Communicating between processes using FIFO
            $ Writing data into a FIFO
                @ How to do it&#x2026;
                @ How it works...
        . Communicating between the client and server using socket programming 
            $ Client-server model
                @ struct sockaddr_in structure
                @ socket()
                @ memset()
                @ htons()
                @ bind()
                @ listen()
                @ accept()
                @ send()
                @ connect()
                @ recv()
            $ Sending data to the client
                @ How to do it&#x2026;
                @ How it works...
            $ Reading data that's been sent from the server
                @ How to do it&#x2026;
                @ How it works...   
        . Communicating between processes using a UDP socket 
            $ Using a UDP socket for server-client communication
                @ bzero()
                @ INADDR_ANY
                @ sendto()
                @ recvfrom()
            $ Await a message from the client and sending a reply using a UDP socket 
                @ How to do it&#x2026; 
                @ How it works...
            $ Sending a message to the server and receiving the reply from the server using the UDP socket
                @ How to do it&#x2026;
                @ How it works...
            $ Running Cygserver
        . Passing a message from one process to another using the message queue
            $ Functions used in IPC using shared memory and message queues
                @ ftok()
                @ shmget()
                @ shmat()
                @ shmdt()
                @ shmctl()
                @ msgget()
                @ msgrcv()
                @ msgsnd()
            $ Writing a message into the message queue
                @ How to do it&#x2026;
                @ How it works...
            $ Reading a message from the message queue
                @ How to do it&#x2026;
                @ How it works...
        . Communicating between processes using shared memory
            $ Writing a message into shared memory
                @ How to do it&#x2026;
                @ How it works...
            $ Reading a message from shared memory
                How to do it&#x2026;
                How it works...

### 9 - Sorting and Searching
        . Searching for an item using binary search&#xA0;
            $ How to do it...
            $ How it works...
        . Arranging numbers in ascending order using bubble sort
            $ How to do it&#x20206;
            $ How it works...
        . Arranging numbers in ascending order using insertion sort
            $ How to do it...
            $ How it works...
        . Arranging numbers in ascending order using quick sort
            $ How to do it...
                @ Quick sort s
                @ FindingPivot
            $ How it works...
        . Arranging numbers in descending order using heap sort
            $ How to do it...
                @ Creating a max-heap
                @ Deleting the max-heap
            $ How it works...
            $ See also

### 10 - Working with Graphs 
        . Types of graphs 
            $ Directed graphs
            $ Undirected graphs
        . Creating an adjacency matrix representation of a directed graph
            $ How to do it...
            $ How it works...
        . Creating an adjacency matrix representation of an undirected graph
            $ How to do it...
            $ How it works...
        . Creating an adjacency list representation of a directed graph
            $ How to do it...
            $ How it works...
        . Carrying out the breadth-first traversal of a graph
            $ How to do it...
            $ How it works...
        . Carrying out the depth-first traversal of a graph
            $ How to do it...
            $ How it works...
        . Creating minimum spanning trees using Prim's algorithm
            $ How to do it...
            $ How it works...
                @ Displaying the adjacency linked list 
                @ Creating the minimum spanning tree
        . Creating minimum spanning trees using Kruskal's algorithm
            $ How to do it...
            $ How it works...

### 11 - Advanced Data Structures and Algorithms
        . Doubly linked lists (two-way linked lists)
        . Circular linked lists
        . Binary tree
            $ Binary search trees
            $ Traversing trees
        . Implementing a stack using a singly linked list 
            $ How to do it...
            $ How it works...
        . Implementing a doubly or two-way linked list 
            $ How to do it...   
            $ How it works...
        . Implementing a circular linked list
            $ How to do it...
            $ How it works...
        . Creating a binary search tree and performing an inorder traversal on it recursively
            $ How to do it... &#x2013; binary tree
            $ How to do it... &#x2013; inorder traversal of the tree
            $ How it works... &#x2013; binary tree
            $ How it works... &#x2013; inorder traversal of the tree
        . Performing postorder traversal of a binary tree non-recursively
            $ Getting started
            $ How to do it...
            $ How it works...
            $ See also

### 12 - Creativity with Graphics 
        . List of OpenGL functions
        . Drawing four graphical shapes
            $ How to do it...
            $ How it works...
        . Drawing a circle
            $ How to do it...
            $ How it works...
        . Drawing a line between two mouse clicks
            $ How to do it...
            $ How it works...
        . Making a bar graph of the supplied values
            $ How to do it...
            $ How it works...
        . Making an animated bouncing ball
            $ How to do it...
            $ How it works...

### 13 - Using MySQL Database
        . Functions in MySQL
            $ mysql_init()
            $ mysql_real_connect()
            $ mysql_query()
            $ mysql_use_result()
            $ mysql_fetch_row()
            $ mysql_num_fields()
            $ mysql_free_result()
            $ mysql_close()
        . Creating a MySQL database and tables
            $ Create database
            $ Create table
        . Displaying all the built-in tables in a default mysql database
            $ How to do it...
            $ How it works...
        . Storing information in MySQL database
            $ How to do it&#x2026;
            $ How it works...
        . Searching for the desired information in the database
            $ How to do it&#x2026;
            $ How it works...
        . Updating information in the database
            $ How to do it&#x2026;
            $ How it works...
        . Deleting data from the database using C
            $ How to do it&#x2026;f
            $ How it works...

### 14 - General-Purpose Utilities 
        . Dynamic memory allocation 
            $ malloc()
            $ calloc()
            $ realloc()
            $ free()
        . Registering a function that is called when a program exits
            $ How to do it&#x2026;
            $ How it works...
            $ There's more...
        . Measuring the clock ticks and CPU seconds required in the execution of a function
            $ How to do it...
            $ How it works...
        . Performing dynamic memory allocation 
            $ How to do it...
            $ How it works...
        . Handling signals
            $ Signals
                @ signal()
            $ How to do it...
            $ How it works...

### 15 - Improving the Performance of Your Code
        . Using the register keyword in C code for better efficiency
            $ How to do it...
            $ How it works...
        . Taking input faster in C
            $ How to do it&#x2026;
            $ How it works...
        . Applying loop unrolling for faster results 
            $ How to do it&#x2026;
            $ How it works...

### 16 - Low-Level Programming
        . Introduction to bitwise operators
            $ &amp; (binary AND)
            $ | (binary OR)
            $ ^ (binary XOR)
            $ ~ (binary complement)
            $ &lt;&lt; (binary shift left)
            $ &lt;&lt; (binary shift right)
        . Converting a binary number into a decimal using a bitwise operator 
            $ How to do it&#x2026;
            $ How it works...
        . Converting a decimal into binary using a &#xA0;bitwise operator
            $ How to do it&#x2026;
            $ How it works...
        . Converting a decimal number into binary using bit masking&#xA0;
            $ How to do it&#x2026;
            $ How it works...
        . Introduction to assembly coding 
        . Multiplying two numbers using the inline assembly language in C
            $ How to do it&#x2026;
            $ How it works...
        . Dividing two numbers using assembly code in C
            $ How to do it&#x2026;
            $ How it works...

### 17 - Embedded Software and IoT
        . Technical requirements
        . Introduction to embedded systems
        . Introduction to IoT
            $ Introduction to Arduino
        . Toggling the port of a microcontroller in Embedded C (blinking LED)
            $ How to do it&#x2026;
            $ How it works...
        . Incrementing the value of a port in Embedded C
            $ How to do it&#x2026;
            $ How it works...
        . Toggle voltage in output pin using Arduino (blinking LED)
            $ How to do it&#x2026;
            $ How it works...
        . Taking input from the serial port using Arduino
            $ How to do it&#x2026;
            $ How it works...
        . Sensing the temperature using Arduino with the LM35 sensor
            $ Getting ready...
            $ How to do it...
            $ How it works... 

### 18 - Applying Security in Coding
        . Buffer overflow
            $ gets()
            $ fgets()
            $ fpurge(stdin)
            $ sprintf()
            $ snprintf()
            $ strcpy()
            $ strncpy()
        . Understanding how a buffer overflow occurs 
            $ How to do it..
            $ How it works...       . Learning how to avoid a buffer overflow&#xA0;
            $ How to do it...
            $ How it works...
        . Understand how a vulnerability occurs while copying strings
            $ How to do it...
            $ How it works...
        . Learning how to write secure code while copying strings 
            $ How to do it...
            $ How it works...
        . Understanding the erros that occur while formatting strings
            $ How to do it...
            $ How it works... 
        . Learning how to avoid erros while formatting strings 
            $ How to do it...
            $ How it works...
        . Understanding how vulnerabilities occur while accessing files in C
            $ How to do it...
            $ How it works...
        . Learning how to avoid vulnerabilities while writing a file in C
            $ How to do it...
            $ How it works...
         

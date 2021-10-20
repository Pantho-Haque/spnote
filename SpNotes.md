## 2015

### Section A

1.  a) Write down the following algebraic expression in C languages. z=p \*r%q +w/x-y

```c
    z+=p*r;
    z%=q;
    z+=(w/x);
    z-=y;
```

b) In admission test ofKUET 10000 applicants were participated. Test marks of each student are calculated. Now the admission authority needs a C program. to generate the merit listof all applicants. your task is to help them by writing the required program.

```c
        <!-- if u know send the ans -->
```

c) Write a program that converts a given seconds into Hour, Minutes and Seconds.

```c
    #include<stdio.h>
    int main(){
        float seconds , minutes;
        printf("Converting seconds to hour,put in seconds: ");
        scanf("%f",&seconds);
        printf("%f is %f in hours\n",seconds,(seconds/3600));

        printf("Converting minutes to seconds,put in minutes: ");
        scanf("%f",&minutes);
        printf("%f is %f in seconds\n",minutes,(minutes*60));
    }
```

d) Write a program to find out the largest one among three numbers (e.g. 20, 15, 30) using conditional operator only. Sample Input: 20, 15, 30 · Sample Output: 30 is the largest

```c
    #include<stdio.h>
    int main(){
        int a,b,c;
        printf("input 3 numbers: ");
        scanf("%d%d%d",&a,&b,&c);
        (a>b)?
                (a>c)? printf("%d is the largest\n",a)
                    : printf("%d is the largest\n",c)
            :
                (b>c)? printf("%d is the largest\n",b)
                    : printf("%d is the largest\n",c) ;

    }
```

2.  a) What will be the output of following program segment: ·for (int i=l; i<=lO; printf("%d\n", i)){i++;}

```sh
    2
    3
    4
    5
    6
    7
    8
    9
    10
    11
```

b) What is null statement? Explain its usefulness.

```sh
    A null statement is a statement that doesnt do anything, but exists for syntactical reasons.
    it is basically a semicolon.

    a null statement is used to supply an empty loop body to the iteration statement.It may also be used to carry a label just before the closing } of a compound statement.
```

c) Show the difference between the followings:
(i). else-if ladder and switch

            else-if ladder | switch
            ---------------|----------
            containse single expression or multiple | contains single expression
            can evaluate all data types | evaluate either an integer or character
            if condition is not true else statement will execute | if no cases matched default statement will execute


        (ii) break and continue

            break | continue
            ------|---------
            appear in switch and loops | appear only in loops
            terminates the block and gets the control out of the switch or loops | it gets the control to gthe next iteration of the loop

        (iii)while-loop and goto
                while-loop | goto
                -----------|--------
                it works maintaining initialization , condition and increament or decreament of a variable | it works using a label
                this loop itself has a statement to put condition | we must provide additional condition otherwise it may ended up as a infinite loop

        (iv)for loop and do loop
                for loop | do loop
                ---------|---------
                first check the condition adn if true then execute the statements inside it | first run the statement for only one time then check the condition, if true then it takes its next iteration otherwise not

d) What is function prototype? Why is it necessary to use function prototypes in C programs:

```sh

    Function prototype in C is used by the compiler to ensure whether the function call matches the return type and the correct number of arguments or parameters with its data type of the called function.
    In the absence of the function prototype, a coder might call function improperly without the compiler detecting errors that may lead to fatal execution-time errors that are difficult to detect.

```

3.  a) How does implicit type promotion work for the following expression? Explain.y=b-i\*f+l/i . where y, b, I, f, l are integer, double, short int, float, and long int respectively. Also write down some problems that may occur during implicit type promotion.

```c
    i=short int
    l=long int
    f=float
    b=double
    y=int

    so ,
        i*f = (short int * float) = (float)
        l/i =(lont int / short int) = (long int)
        b-(i*f)+(l/i)= (double - long int + float)=(double)
        y(int) = (double) = (int)

        so we can say that y will return a integer value

        and the faction part of our output will be lost
```

b) Explain the four control structures of structured programming.

        (i) Sequence control instruction
            -> execute instructions one by one
        (ii) Decision control instruction
            -> executes the statements if the condition is true
                example : if structure, if-else structure,else-if ladder structure , nested if-else structure
        (iii) Loop control instruction
            -> execute the statements again and again until the condition becomes false.
            example : for-loop , while-loop , do-while loop
        (iv) Case control instruction
            -> check for whice case the value is equal and then execute the statement
            example : switch

c) What is dangling else problem? Explain-using example(s)?

```sh
    When the number of if statement is more or less then that of else statement confusion arises in matching by the compiler.. the problem so called is dangling else .
    example :-
    if A then if B then C1 else C2

    this problem can be solve usong braces
    if A then
    {
        if B then
            C1
        else
            C2
    }

```

4.  a)Is there any difference between character array and string? Explain with example.

```sh
    in case of string there has a null character at the end of the array.
    example:
        char s[10]="pantho";
                or
        char s[10]=["p","a","n","t","h","o","\0"];
    but in a character array there has no null character at the end.
    example:
        char a[10]=["p","a","n","t","h","o"];
```

b) Define recursion. ·wdte a program to solve the following series using recursion. 1^2+2^2+3^2+ ..... +n^2

```c
    Recursion : The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function.

    #include<stdio.h>
    #include<math.h>

    long long  sum(int n){
        if(n==1){
            return 1;
        }
        else{
            return (long long)pow(n,2)+sum(n-1);
        }
    }
    int main(){
        int n;
        printf("input the number: ");
        scanf("%d",&n);
        printf("%lld\n",sum(n));
    }
```

c) Is increment operator a binary or unary operator? What is the output of following program segment?
int a=-1;
int b=a++;
int c=++b;
printf("%d %d %d", a, b, c);

```sh
    Increment operator is a unary operator.

    output: 0 0 0
```

d) Write a program that converts the last character into opposite case of all words in a given string.

```c
        <!-- if u know send the ans -->
```

### Section B

5.  a)What is structure? What are the techniques of comparing two structure variables? Explain with example.

```sh
    a structure is a collection of different datatype variables, which are grouped together under a single name.

    we can compare 2 structures using dot notation.

    #include<stdio.h>
    #include<string.h>
    typedef struct {
                char rice[20];
                float drink;
            } food;
    food dinner={"basmati",10};
    food breakfast={"basmati",10};

    int main(){

        if(dinner.drink == breakfast.drink  && !strcmp(dinner.rice, breakfast.rice)){
            printf("the structures are same");
        }
        else{
            printf("structres are not same");
        }

    }

```

b) Define a structure with subject l , subject2, subje_ct3 and total. Now take marks of the three courses for n students. Calculate the total marks of each student. Also calculate the total marks of each courses obtained by n students.

```c
        <!-- if u know send the ans -->
```

c) How can you initialized a structure variable? Give example.

```c
    typedef struct{
        int a;
        float b;
    }twoNumbers;

    twoNumbers first={10,20.1};

```

6.  a)"An array is one type of pointer"-justify the statement with proper example.

```sh
    actually the name of an array returns the memory location of its first element

    if we declare a array named arr of integer type,
    int arr[5]={10,20}

    here arr is the memory location of arr[0],which containes the value 10 . if we want to access the location of 20 , we can write arr+1.

    this behavior is as same as pointer. so an array is one type of pointer
```

b) What is the difference between call by value & call by reference? Explain with example.

```sh
    if we pass the value during calling a function and that function makes a copy of your variable and process it then this type of function is called call by value function
    example:

    int functionA(int x, int y){
        // statements
        // here x and y are the copy of value we provided
    }

    instead of passing the value if we pass the memory address of variable then it is called call by reference function.

    int functionA(int* x, int* y){
        // statements
        // here x and y are the memory address of variable we passed.
    }

```

c) Write a program that reads an array of integers using pointer & prints its elements in reverse order.

```c
    #include<stdio.h>
    int main(){
        int a[5]={1,2,3,4,5};

        for(int i=4; i>=0 ; i--){
            printf("%d",*(a+i));
        }
    }
```

7.  a)How does a union differ from a structure? Describe with proper examples.

```sh

    in case of union , all of its elements share only one memory location depending which element reserves large byte of memory.

    struct sp{
        char a;
        float b;
    }

    it takes (1+3)+4=8bytes of memory

    union sp{
        char a;
        float b;
    }

    it takes 4 bypes of memory

    union sp{
        char a;
        char b;
    }

    it takes 1byte of memory
```

b) What is the purpose of the typedef feature? Write the output generated by the following program.
#include<stdio.h>
typedef union {
int i;
float f;
}udef;

        void funct (udef u);

        main(){
            udef u;
            u.i=100;
            u.f=0.5;
            funct (u);
            printf("%d %f\n", u.i, u.f);
        }
        void funct( udef u) {
            u.i=200;
            printf("%d %f \n", u.i, u.f);
            return;
        }

```sh
    The purpose of typedef is to assign alternative names to existing types,

    output: error because the data type of main function is not written.
```

c) Differentiate between malloc and calloc with their declarations. How can we change the size of allocated memory?

```sh

    Malloc(memory allocation):
        it returns the address of package of memory
        initializing by garbage values.

        int *p = (int*) malloc(2);

    calloc(contigious allocation):
        it returns the address of packages that is separated by an amount of blocks of same size.
        initializing by zero.

        int *p = (int*) calloc(10,2);

    we can change the size of allocated memory using realloc() function.

        p = realloc(p,3);

```

d) In the enumeration declaration, determine the value of each member.
enum compass { north= -2, south, east=1, west};

```
    values are :
        north = -2
        south = 0
        east = 1
        west = 0
```

e) What is the meaning of "-I." and "-c" in GCC options.State the difference between compilation flag "-I" and without "-I." in GCC command. For example:

        gcc -o output_file_name source_file.c
        gcc -o output_file_name source_file.c -I

```sh
    -I : By default, gcc looks in the current working directory.
    -c : This command compile the program and give the object file as output, which is used to make libraries.

    <!-- if u know send the ans -->

```

8.  b) Use the "stringizing" and "token-pasting" operator to define a macro called display (s, i) that will give output:
    Display->x3=6
    where,
    main(){
    int x3=6;
    //call display macro with proper parameters
    }

```c
        #include<stdio.h>

        #define display(a,b)    printf(#a#b"=%d\n",a##b)

        int main ()
        {
            int x3=6;
            display(x,3);
        }
```

## 2016

### Section A

1.  a)Define identifier and keyword. Find identifiers and keywords from the following program:
    #include<stdio.h>
    void MAX(int val1; int val2)
    {
    if(val1 > val2)
    printf("%du, val1);
    else
    printf("%du, val2);
    }
    int main ()
    {
    int a, b;
    scanf("%d%d",&a, &b);
    MAX (a, b);
    return O;
    }

```sh
    Keywords :  Keywords are predefined word that gets reserved for working
    here : include ,void, int , if, else, printf, main, scanf, return,

    Identifiers: dentifiers are the values used to define different programming items such as variables, integers, structures, unions and others and mostly have an alphabetic character
    here : MAX, val1, val2, a,b
```

    b)  <!-- if u know send the ans -->
    c)  <!-- if u know send the ans -->
    d) 2015-> 7(b) , 2015->5(a)

2.  a)
    ` 2015->2(a) `
    b) What will be the output of the following code segments? Explain.

            (i)
            int x = 2, y = 0;
            int z = (y++) ? 2 :y==1 && x;
            printf ("%d\n", z);

            output : 1

            (ii)
            int a= 2, b = 7, c = 10;
            c = a == b;
            printf("%d", c);

            output : 0

c) Write a program to calculate the sum of the following series for first n terms
1/6 + 1/11 + 1/21 + 1/36 + ...

```c
    #include<stdio.h>
    int main(){
        float s,n,m=6 ;
        printf("put the value of n:");
        scanf("%f",&n);
        for (int i=1 ; i<=n ;i++){
            s+=1/m;
            m+=(5*i);
        }
        printf("%f\n",s);
    }
```

```
d)
<!-- if u know send the ans -->
```

3.  a) 2015->2(c-i)

```
b)
<!-- if u know send the ans -->
```

c)Determine the output of the following programs. Explain your answer.

```
    (i)
    #include<stdio.h>
    int main(){
    static int i=0;
    jump:
    {
    int i=5;
    printf("%d ",i);
    i++;
    }
    if(i<7)
    i++;
    goto jump;
    return 0;
    }

    output : infinite loop printing 5
```

```
    (ii)
    #include<stdio.h>
    int main(){
    int i=2;
    for (++i ; i++ ; ++i){
    printf("%d ",i);
    if(i==3)
    break;
    }
    return 0;
    }

    output : infinite loop , beacuse i never becomes 3.
```

4.  a) Define recursion. Explain the basic Fibonacci problem using recursion for nth position Fibonacci number.

    2015->4(b)

```c
    #include<stdio.h>
    int fib(int n)
    {
        if (n <= 1)
            return n;
        return fib(n-1) + fib(n-2);
    }
    int main(){
        int n;
        printf("input the value of n: ");
        scanf("%d",&n);
        printf("%d\n",fib(n));
        return 0;
    }
```

b) Write a program that may take a number from user in main. c file then sends it to a user defined function "void. COMPUTE(int)" whose definition is in compute. c file. COMPUTE function computes the sum of the digits of the number. In main. c file, print the summation of the digits-of the number. Also use header file for "void COMPUTE(int)".

```c
    <!-- if u know send the ans -->
```

c) Explain the purpose of using header guards with appropriate example.

```c
    <!-- if u know send the ans -->
```

### Section B

5.  a) Declare and initialize a variable of "World" structure and print the member data of that variable.

```
    #include<stdio.h>
    int main ()
    {
        struct Bangladesh{
            char c;
            float d;
        } ;
        struct World{
            int a[3];
            char b;
            struct Bangladesh Khulna;
        };
        // Declare and initialize a variable of "World" structure
        // Print the declared variable
    return 0;
    }
```

```c
    // Declare and initialize a variable of "World" structure
    struct World w={ {1,2,3}, 'A' ,{ 'C', 20.1 } };
    // Print the declared variable
    for(int i=0;i<=2;i++){
        printf("%d",w.a[i]);
    }
    printf("%c %c %f", w.b , w.Khulna.c , w.Khulna.d);
```

b)What are the outputs of the following programs and explain the outputs.
```
    (i)
    #include<stdio.h>
    int main ()
    {
        char str[25]="ABCDEFGHIJ";
        printf("%s\n",str+2);
        return 0;
    }

    Output : CDEFGHIJ
```
```
    (ii)
    #include<stdio.h>
    int main ()
    {
        double values[] [3]={{1.2},{9.2,-1.2},{7.3, 7.9, 4.8}};
        int i= 0, j = 0;
        for( i = 0; i<= 2; i++) {
            for ( j = 0; j < 3; j ++ )
                printf ("%lf", values [i][j]);
            printf ("\n");
        }
    }

    Output :
    1.200000    0.000000    0.000000
    9.200000    -1.200000   0.000000
    7.300000    7.900000    4.800000
```
c) Write a program to split the strings into parts by delimiters like comma, space, dollar sign,and ampersand.

```c
    #include<stdio.h>
    #include<string.h>
    int main ()
    {
        char *tkn , st[30]="hi,there how&are$you";
        const char de[6]=", &$";
        tkn = strtok(st,de);

        while(tkn !=NULL){
            printf("%s \n",tkn);
            tkn=strtok(NULL,de);
        }
    }
```

d) Write down the macro definitions for the followings:

```
        i)To find arithmetic mean of two numbers.

        #define mean(a,b) (a+b)/2

        ii) To convert a uppercase alphabet to lowercase.

        #define toLower(c)  c+32
```

6.  a)Write a program to store information using structures with dynamic memory allocation.

```
    Sample Inputs:
        Enter number of records: 2
        Enter name of the subject and marks respectively:
        Programming
        22
        Enter mane of the subject and marks respectively:
        Structure
        33
    Sample output:
        Displaying Information:
        Programming 22
        Structure 3 3
```

```c
    <!-- if u know send the ans -->
```

b) Point out the errors, ifany, and explain the outputs in the following programs

    (i)
    #include<stdio.h>
    struct s{
        int i;
        struct s *p;
    };
    int main ()
    {
        struct s var1,var2;
        var1.i=100;
        var2.i = 200;
        var1.p = &var2;
        var2.p = &var1;
        printf("\n%d %d",var1.p->i,var2.p->i);
    }

```

    200 100
```

    (ii)
    #include<stdio.h>
    int main ()
    {
        FILE *fp;
        openfile("Myfile.txt",fp);
        if(fp==NULL)
            printf("unable to open file");
    }
    openfile(char *fn , FILE **f){
        *f=fopen(fn,"r");
    }

```
    error will be occured because prototype of open file is not declared.
```

    c)

```c
    <!-- if u know send the ans -->
```

    d) 2015->8(b)

1.  a) Write the value of j and k for each statements

```
    double i=4,*j,*k; //sizeof(double)=8
    j=&i    // assume &i=16
    j=j+1   // j=24
    j=j+3   // j=48
    k=j+4   // k=48+32=70
    k=j-3   // k=48-24=24
```

b) Assume we have two user-definedfunctions:

    float *one(doubie *a, int b) ;
    float two ( /* pass appropriate parameters *I) ;

How to pass function "one" and character 'k' as parameters to function "two"? How to call
function "one" from inside the function "two"? Give sample code of it.

```c
    <!-- if u know send the ans -->
```

c) Describe following declaration involving pointers:

    i)  int *(*k[5]) (cha r (*a)[])
    ii) char (*p(double *a)) (4)

```c
    <!-- if u know send the ans -->
```

d)

```c
    <!-- if u know send the ans -->
```

8.

```c
    <!-- if u know send the ans -->
```

## 2017

### section A

1.  a)hat is cyclic property of data type in C language? Determine and explain the output of the following program:

```
    #include<stdio.h>
    int main ()
    {
        unsigned char b=80, c=20, d=2;
        unsigned char y=(-400), z=20, w=30;
        unsigned char a= b*c/d;
        unsigned char x=y/z*w;
        printf("%d %d",a,x);
        return 0;
    }

    output:32 150
```

b) What do you mean by ternary operator? Write a C program that takes mark of a course and prints the corresponding grade based on th e following table.Use ternary operator to solve it.

```
    ternary operator : condition ? statement1:statement2

        if condition returns true statement1 will be executed
        oteherwise statement2 will execute.

```

c) Every C word is classified as either a keyword or an identifier. Is it true? Justify your answer with example.

```
    true
    2016 -> 1 (a)
```

3.  c)

```
    (i)
    #include <stdio.h>
    int main()
    {
        int tally;
        for (tally=0; tally < 10; ++tally)
        {
            printf("#");
            if (tally > 6)
                continue;
            printf("%d", tally);
        }
    }

    output: #0#1#2#3#4#5#6###

    (ii)
    #include <stdio.h>
    int main()
    {
        static int val = 4;
        if (--val)
        {
            main();
            printf("%d", --val);
        }
    }

    output : -1-2-3
```

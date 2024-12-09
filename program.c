 
1)PROBLEM RECURSION USING PRINT ABCDEFGHIJKLMNO
#include<stdio.h>
void printChars(int i, char ch)
{
	printf("%c ", ch);
	if(i % 5 == 0)
        printf("\n");
 	if(i < 15)
	printChars(i + 1, ch + 1);
}
void main()
{
	printChars(1, 65);
}
OUTPUT:
A B C D E
F G H I J
K L M N O
2)PROBLEM USER ENTER A 10 NUMBER AND COUNT ODD EVEN NUMBERS :
#include<stdio.h>
void main()
{
	int i,a[10],e_sum=0,o_sum=0;
	printf("Enter a numbers:");
	for(i=0;i<10;i++)
	{
    	scanf("%d",&a[i]);
            if(a[i]%2==0)
        	{
            	e_sum=e_sum+a[i];
        	}
        	else
        	{
            	o_sum=o_sum+a[i];
        	}
    	
	}
        	printf("%d %d",e_sum,o_sum);
 
}
OUTPUT:
Enter a numbers:1
2
3
4
5
6
7
8
9
1
e_sum=20,o_sum26
3)SWAP THE NUMBERS USING ARRAYS :
#include<stdio.h>
 
int main()
{
	int a[10] = {5, 3, 5, 6, 7, 8, 3, 2, 1, 2};
	
	for(int i = 0; i <10; i=i+2)
	{
    	int t = a[i];    	
    	a[i] = a[i + 1]; 	
    	a[i + 1] = t;
	}
 
	for(int i = 0; i < 10; i++)
	{
    	printf("%d\t", a[i]);
	}
}
OUTPUT:
3      	5      	6      	5      	8      	7      	2      	3      	2      	1      	
4)WITHOUT USING THIRD VARAIABLE IN ARRAYS :
#include<stdio.h>
 
int main()
{
	int a[10] = {5, 3, 5, 6, 7, 8, 3, 2, 1, 2};
	
	for(int i = 0; i <10; i=i+2)
	{
    	a[i] = a[i]+a[i+1];    	
    	a[i+1] = a[i]-a[i+1]; 	
    	a[i] =a[i]-a[i+1];
	}
 
	for(int i = 0; i < 10; i++)
	{
    	printf("%d\t", a[i]);
	}
}
OUTPUT:
3      	5      	6      	5      	8      	7      	2      	3      	2      	1      	
5)SIMPLE PROBLEM:
#include<stdio.h>
void main()
{
	int i=5;
	while(i-->=0)
	printf("%d ",i);
	i=5;
	printf("\n");
	while(i-->=0)
	printf("%i ",i);
	printf("\n");
	while(i-->=0)
    	printf("%d ",i);
    	printf("\n");
}
OUTPUT:
4 3 2 1 0 -1
4 3 2 1 0 -1
6) SIMPLE PROGRAM:
#include<stdio.h>
void main()
{
	int a=10,b;
	a>=5?b=100:(b=100);
	printf("%d",b);
}
OUTPUT:
100
7)SIMPLE PROGRAM: POSITIVE OR NEGATIVE NUMBER:
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
	printf("positive no");
	else
	printf("negative no");
}
OUTPUT:
Enter a number:5
positive no
8) sum and avg using arrays:
#include<stdio.h>
void main()
{
	int a[5],sum=0,avg=0,i;
	printf("Enter a number:");
	for(i=0;i<5;i++)
	{
    	scanf("%d",&a[i]);
    	sum=sum+a[i];
    	avg=sum/5;
	}
	printf("sum=%d,avg=%d",sum,avg);
}
OUTPUT:
Enter a number:33
22
66
77
88
sum=286,avg=57
9)print no -200 to 200:
#include<stdio.h>
void main()
{
   long int i;
	for(i=-200;i<=200;i++)
	{
    	printf("%d\n",i);
	}
}
OUTPUT:
-200 to 200
10)STAR PATTERN :
#include<stdio.h>
void main()
{
	int i, j;
	for(i = 1; i <= 5; i++)
	{
    	for(j = 1; j <= 5; j++)
    	{
            if(i == 1 || i == 5 || j == 1 || j == 5)
        	{
            	printf("* ");
        	}
        	else
        	{
            	printf("  ");
        	}
    	}
    	printf("\n");
	}
}
OUTPUT:
* * * * *
* 	     *
*   	   *
*  	   *
* * * * *
11)wh ich one is big number:
#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter a 3 no:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2)
	{
    	if(n1>n3)
    	printf("n1 big");
    	else
    	printf("n3 big");
	}
	else
	{
    	if(n2>n3)
    	printf("n2 is big");
    	else
    	printf(" n3 is big");
	}
 
}
OUTPUT:
Enter a number: 5 6 7
n3 is big
12)INCREMENT DECREMENT PROGRAM:
#include<stdio.h>
int main(void)
{
	int a=5,b=5;
	printf("%d,%d\t",++a,b--);
	printf("%d,%d\t",a,b);
	printf("%d,%d\t",++a,b++);
	printf("%d,%d\n",a,b);
	return 0;
	
}
OUTPUT:
6,5   	6,4   	7,4   	7,5
13)CONDITIONAL STMT:
#include<stdio.h>
int main(void)
{
	int a=9,b=15,c=16,d=12,e,f;
	e=!(a<b||b<c);
	f=(a>b)?a-b:b-a;
	printf("e=%d,f=%d\n",e,f);
	return 0;
}
OUTPUT:
e=0,f=6
14)STACK IN C:
#include <stdio.h>
#define NITEMS 10
#define S_FULL -1
#define S_EMPTY -2
#define S_SUCCESS 0
enum stack_operations { PUSH_OP = 1, POP_OP, DISP_OP, Exit_OP };
static int stack[NITEMS];
static int sp = -1;
int push(int data)
{
	if (sp >= NITEMS - 1)
    	return S_FULL;
	else
    	stack[++sp] = data;
	return S_SUCCESS;
}
int pop()
{
	if (sp == -1)
    	return S_EMPTY;
	else
    	return stack[sp--];
}
void display()
{
	if (sp == -1)
	{
    	printf("Stack is empty\n");
    	return;
	}
	for (int i = sp; i >= 0; i--)
	{
    	printf("%d\n", stack[i]);
	}
}
int main()
{
	int ch, item, ret;
	while (1) {
    	printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    	printf("Enter your choice:\n");
    	scanf("%d", &ch);
    	switch (ch)
    	{
        	case PUSH_OP:
            	printf("Enter the element:\n");
            	scanf("%d", &item);
            	ret = push(item);
            	if (ret == S_FULL)
                	printf("Stack is full\n");
            	break;
        	case POP_OP:
            	ret = pop();
            	if (ret == S_EMPTY)
                	printf("Stack is empty\n");
            	else
                	printf("The popped item = %d\n", ret);
            	break;
        	case DISP_OP:
            	display();
            	break;
        	case Exit_OP:
            	return 0;
        	default:
            	printf("Invalid choice! Please try again.\n");
            	break;
    	}
	}
	return 0;
}
OUTPUT:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice:
1
Enter the element:
10
1. Push
2. Pop
3. Display
4. Exit
Enter your choice:
1
Enter the element:
20
1. Push
2. Pop
3. Display
4. Exit
Enter your choice:
2
The popped item = 20
1. Push
2. Pop
3. Display
4. Exit
Enter your choice:
3
10
1. Push
2. Pop
3. Display
4. Exit
Enter your choice:
4
15) QUEUE IN C:
#include <stdio.h>
#define NITEMS 10
#define S_FULL -1
#define S_EMPTY -2
#define S_SUCCESS 0
 
enum stack_operations { ENQUEUE_OP = 1, DEQUEUE_OP, DISP_OP, Exit_OP };
 
static int queue[NITEMS];
static int front = -1;
static int rear = -1;
 
int enqueue(int data) {
	if (rear == NITEMS - 1) {
    	printf("Queue is overflow\n");
    	return S_FULL;
	} else {
    	if (front == -1)
        	front = 0;
    	rear = rear + 1;
    	queue[rear] = data;
	}
	return S_SUCCESS;
}
 
int dequeue() {
	if (front == -1 || front > rear) {
    	printf("Queue is underflow\n");
    	return S_EMPTY;
	} else {
    	int data = queue[front++];
    	return data;
	}
}
 
void display() {
	if (front == -1 || front > rear) {
    	printf("Queue is empty\n");
    	return;
	} else {
    	printf("Queue is:\n");
    	for (int i = front; i <= rear; i++) {
        	printf("%d\n", queue[i]);
    	}
	}
}
 
int main() {
	int ch, item, ret;
	while (1) {
    	printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    	printf("Enter your choice:\n");
    	scanf("%d", &ch);
    	switch (ch) {
        	case ENQUEUE_OP:
            	printf("Enter the element:\n");
            	scanf("%d", &item);
            	ret = enqueue(item);
            	if (ret == S_FULL)
                	printf("Queue is full\n");
            	break;
        	case DEQUEUE_OP:
            	ret = dequeue();
            	if (ret == S_EMPTY)
                	printf("Queue is empty\n");
            	else
                	printf("The dequeued item = %d\n", ret);
            	break;
        	case DISP_OP:
            	display();
            	break;
        	case Exit_OP:
            	return 0;
        	default:
            	printf("Invalid choice! Please try again.\n");
            	break;
    	}
	}
	return 0;
}
OUTPUT:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
1
Enter the element:
10
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
1
Enter the element:
20
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
1
Enter the element:
30
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
1
Enter the element:
40
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
2
The dequeued item = 10
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
2
The dequeued item = 20
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
3
Queue is:
30
40
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:
4
16) WRITE A PROGRAM USING FUNCTION FIND THE BIG NUMBER:
#include<stdio.h>
void fun();
void main()
{
	int a,b;
	printf("Enter a number:\n");
	scanf("%d %d",&a,&b);
	fun(a,b);
}
void fun(int c, int d)
{
	if(c>d)
	printf("a=%d is big",c);
	else
	printf("b=%d is big",d);
}
OUTPUT:
Enter a number:
4
9
b=9 is big
17) WHAT IS LOCAL FUNCTION AND STATIC FUNCTION:
#include<stdio.h>
void fun();
void main()
{
	int a=5;//local varaiables
	fun(a);
}
void fun(int a)
{
	printf("%d",a);
}
OUTPUT:
5
18)STATIC VARAIABLES:
#include<stdio.h>
void fun();
int a=5;//static varaiables
void main()
{
	fun(a);
}
void fun(int a)
{
	printf("%d",a);
}
OUTPUT:
5
19)RECEIVE A USER AND PRINT ADDITION TABLE
#include<stdio.h>
void main()
{
	int a,i;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
    	printf("%d+%d=%d",a,i,a+i);
    	printf("\n");
	}
}
OUTPUT:
Enter a number:5
5+1=6
5+2=7
5+3=8
5+4=9
5+5=10
5+6=11
5+7=12
5+8=13
5+9=14
5+10=15
20)RECEIVE A NUMBER FROM USER FIND THE SUM:
#include<stdio.h>
void main()
{
	int n,sum=0,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    	sum=sum+i;
	}
	printf("sum=%d",sum);
}
OUTPUT:
Enter a number:5
sum=15
21)COUNT ODD AND EVEN NUMBER:
#include<stdio.h>
void main()
{
	int i,a,even=0,odd=0;
	printf("Enter a number:");
	for(i=1;i<=10;i++)
	{
    	scanf("%d",&a);
    	if(i%2==0)
    	{
        	even=even+i;
    	}
    	else
    	{
        	odd=odd+i;
    	}
	}
    printf("even=%d,odd=%d",even,odd);
}
OUTPUT:
Enter a number:6
8
6
5
4
4
3
2
2
8
even=30,odd=25
22)COUNT THE MULTIPLICATION OF 3 :
#include<stdio.h>
void main()
{
	int i,a,count=0;
	printf("enter a number:");
	for(i=1;i<=10;i++)
	{
    	scanf("%d",&a);
    	if(a%3==0)
    	count=count+a;
	}
	printf("count=%d",count);
}
OUTPUT:
enter a number:3
3
4
5
6
7
8
3
2
4
count=15
23)WAP PROGRAM
#include<stdio.h>
void main()
{
	int a,i,even=0,odd=0;
	printf("Enter a number:");
	for(i=1;i<=10;i++)
	{ 
    	scanf("%d",&a);
    	if(a%2==0)
    	{
    	even=a+10;
    	printf("%d",even);
    	}
    	else
    	{
    	odd=a-10;
	    printf("%d",odd);
    	}
	}
}
OUTPUT:
Enter a number:8
18
Enter a number:3
-7
24)LARGEST AND SMALLEST NUMBER:
#include<stdio.h>
void main()
{
	int i,j,high,small;
	int a[3][10];
	printf("enter anumber:");
	for(i=0;i<3;i++)
	{
 	   for(j=0;j<10;j++)
    	{
        	scanf("%d",&a[i][j]);
            	high=a[0][0];
            	small=a[0][0];
        	if(high>a[i][j])
        	high=a[i][j];
        	if(small<a[i][j])
        	small=a[i][j];
    	}
	}
    printf("small=%d,high=%d",high,small);
}
OUTPUT:
enter anumber:44
55
66
33
22
33
44
55
66
77
88
99
55
33
223
3
4
5
6
7
8
8
6
54
4
4
4
4
4
4
4
4
4
4
433
small=44,high=433
25)SEARCH A NUMBER:
#include<stdio.h>
void main()
{
	int i, j, n;
	int found = 0; 
int a[3][4] = {10, 11, 12, 13, 20, 21, 22, 23, 30, 31, 32, 33};
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i = 0; i < 3; i++)
	{
    	for(j = 0; j < 4; j++)
    	{
        	if(a[i][j] == n)
        	{
        	    printf("Present\n");
            	found = 1; 
            	break;
        	}
    	}
    	if(found)
    	{
        	break; 
    	}
	}
	if(!found)
	{
    	printf("Not present\n");  
	}
}
OUTPUT:
Enter a number: 10
Present
26)PRINT A PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    	printf("*");
	}
}
OUTPUT:
Enter a number:5
*****
27)PATTER PROGRAM
#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
    	if(i%2==0)
    	printf("#");
    	else
    	printf("*");
	}
}
OUTPUT:
*#*#*#*#*#
28)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
  	  if(i%2==0)
    	printf("%d",i);
    	else
    	printf("*");
	}
}
OUTPUT:
*2*4*6*8*10
29)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=12;i++)
	{
    	if(i==1||i==4||i==7||i==10)
    	{
        	printf("$");
    	}
    	else if(i==2||i==5||i==8||i==11)
    	{
        	printf("%d",i);
    	}
    	else
    	{
        	printf("*");
    	}
    	printf("\n");
	}
}
OUTPUT:
$
2
*
$
5
*
$
8
*
$
11
*
30)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	printf("*");
    	}
    	printf("\n");
	}
}
OUTPUT:
*****
*****
*****
*****
*****
31)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
    int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	if(i%2==0)
        	printf("$");
        	else
        	printf("*");
    	}
    	printf("\n");
	}
}
OUTPUT:
*****
$$$$$
*****
$$$$$
*****
32)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	if(j%2==0)
        	printf("$");
        	else
        	printf("*");
    	}
    	printf("\n");
	}
}
OUTPUT:
*$*$*
*$*$*
*$*$*
*$*$*
*$*$*
33)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	if(i%2==0)
        	printf("*");
        	else
        	printf("%d",j);
 	   }
    	printf("\n");
	}
}
OUTPUT:
12345
*****
12345
*****
12345
34)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	if(j%2==0)
        	printf("%d",i);
            else
        	printf("*");
    	}
    	printf("\n");
	}
}
OUTPUT:
*1*1*
*2*2*
*3*3*
*4*4*
*5*5*
35)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
    	    printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
11111
22222
33333
44444
55555
36)PATTERN:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	printf("%d",j);
    	}
    	printf("\n");
	}
}
OUTPUT:
12345
12345
12345
12345
12345
37)PATTERN:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
    	for(j=1;j<=5;j++)
    	{
        	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
55555
44444
33333
22222
11111
38)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=5;j>=1;j--)
    	{
        	printf("%d",j);
    	}
    	printf("\n");
	}
}
OUTPUT:
54321
54321
54321
54321
54321
39)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=i;j++)
    	{
        	printf("%d",j);
    	}
    	printf("\n");
	}
}
OUTPUT:
1
12
123
1234
12345
40)PATTERN :
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=i;j++)
    	{
        	if(i%2==0)
        	printf("*");
        	else
        	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
1
**
333
****
55555
41)PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=i;j++)
    	{
        	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
1
22
333
4444
55555
42)PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
    	for(j=1;j<=i;j++)
    	{
        	printf("*");
    	}
    	printf("\n");
	}
}
OUTPUT:
*****
****
***
**
*
43)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
    	for(j=1;j<=i;j++)
    	{
        	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
55555
4444
333
22
1
44)PATTERN :
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
        for(j=5;j>=i;j--)
    	{
        	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
11111
2222
333
44
5
45)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
    	for(j=5;j>=i;j--)
   	 {
        	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
5
44
333
2222
11111
46)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	if(i==1||i==5||j==1||j==5)
        	printf("*");
        	else
        	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
*****
*222*
*333*
*444*
*****
45)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
        for(j=1;j<=5;j++)
    	{
        	if(i==1||i==5||j==1||j==5)
        	printf("*");
        	else
        	printf(" ");
    	}
    	printf("\n");
	}
}
OUTPUT:
*****
*   *
*   *
*   *
*****
46)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=5;j++)
    	{
        	if(i%2==0)
        	printf("  *");
        	else
        	printf("*");
    	}
    	printf("\n");
	}
}
OUTPUT:
*****
  *  *  *  *  *
*****
  *  *  *  *  *
*****
47)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=i;j++)
    	{
        	printf("%d",i);
    	}
    	printf("\n");
	}
	for(i=4;i>=1;i--)
	{
    	for(j=1;j<=i;j++)
    	{
    	printf("%d",i);
    	}
    	printf("\n");
	}
}
OUTPUT:
1
22
333
4444
55555
4444
333
22
1
48)PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
    	for(j=1;j<=i;j++)
    	{
            if(i==j)
        	printf("%d",i);
        	else
        	printf(" ");
    	}
    	printf("\n");
	}
}
OUTPUT:
	5
   4
  3
 2
1
49)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
 	   for(j=5;j>=i;j--)
    	{
        	if(i==j)
        	printf("%d",i);
        	else
        	printf(" ");
    	}
    	printf("\n");
	}
}
OUTPUT:
	1
   2
  3
 4
5
50)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
 int i,j;
 for(i=1;i<=5;i++)
 {
 	for(j=1;j<=i;j++)
 	{
     	printf(" 	%d",i);
 	}
 	printf("\n");
 }
}
OUTPUT:
 	1
 	2     2
 	3     3 	3
 	4     4 	4 	4
 	5     5 	5 	5     5
51)PATTERN PROGRAM:
 #include<stdio.h>
void main()
{
 int i,j;
 for(i=1;i<=5;i++)
 {
     for(j=1;j<=5;j++)
     {
         if(i==j)
         printf("/");
         else if((i==6-j)&&(i!=j))
         printf("/");
         else
         printf("*");
     }
     printf("\n");
 }
}
OUTPUT:
/***/
*/*/*
**/**
*/*/*
/***/
52)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=5-i)
            printf(" ");
            else
            printf("%d",i);
        }
        printf("\n");
    }
}
OUTPUT:
    1
   22
  333
 4444
55555
53)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }
}
OUTPUT:
1
12
123
1234
12345
1234
123
12
1
22.11.2024:
54)PROGRAM:
#include<stdio.h>
void main(){
    int a=8,c;
    c=++a;
    printf("a=%d,c=%d\n",a,c);
    c=a++;
    printf("a=%d,c=%d\n",a,c);
    c=--a;
    printf("a=%d,c=%d\n",a,c);
    c=a--;
    printf("a=%d,c=%d\n",a,c);
}
OUTPUT:
a=9,c=9
a=10,c=9
a=9,c=9
a=8,c=9
55)SAMPLE PORGRAM:
#include<stdio.h>
void main()
{
    int count=0;
    while(count!=5)
    {
        count++;
    }
    printf("%d",count);
}
OUTPUT:
5
56)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int count=0;
    do
    {
        count++;
    }
    while(count!=5);
    printf("%d",count);
}
OUTPUT:
5
57)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int i,count=0;
    for(i=0;i<5;i++)
    count++;
    printf("count=%d",count);
}

OUTPUT:
count=5
58)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        if(i==4)
        continue;
    }
    printf("%d",i);
}
OUTPUT:
5
59)SAMPLE PROGRAM:
POSITIVE OR NEGATIVE NUMBER:
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a<0)
    printf("negative number");
    else
    printf("positive number");
}
OUTPUT:
Enter a number:6
positive number
Enter a number:-6
negative number
60)SAMPLE PROGRAM:
#include <stdio.h>

void main() 
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch (a<0) 
    {
        case 0: 
            printf("Positive number\n");
            break;
        case 1:
                    printf("Negative number\n");
                    break;
    
        
    }
}
OUTPUT:
Enter a number: 7
Positive number
Enter a number: -9
Negative number
61)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int i,a,b,sum=0;
    printf("Enter a two no:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
        printf("%dsum=%d\n",i,sum);
        if(sum>=100)
         break;
    }
    if(sum>=100){
     printf("%d",i);   
    }
    
}
OUTPUT:
Enter a two no:6 8
6sum=6
7sum=13
8sum=21
62)SIMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int i,a,b,sum=0;
    printf("Enter a two no:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
        printf("%dsum=%d\n",i,sum);
        if(sum>=100)
         break;
    }
    
    printf("%d",i);
}
OUTPUT:
Enter a two no:5 95
5sum=5
6sum=11
7sum=18
8sum=26
9sum=35
10sum=45
11sum=56
12sum=68
13sum=81
14sum=95
15sum=110
15
63)SIMPLE PROGRAM;
#include<stdio.h>
void main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
OUTPUT:
A
AB
ABC
ABCD
ABCDE
64)SIMPLE PROGRAM:
#include <stdio.h>
int main() 
{
    int i, j;
    for (i = 65; i <= 69; i++) 
    {
        for (j = i; j >= 65; j--) 
        {
            printf("%c ", j); 
        }
        printf("\n"); 
    }
    return 0; 
}

OUTPUT:
A 
B A 
C B A 
D C B A 
E D C B A 
65)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    goto pos;
    else
    goto nega;
    pos: printf("positive no\n");
           goto end;
    nega: printf("negative no\n");
            goto end;
    end: printf("end of program\n");
}
OUTPUT:
Enter a number:8
positive no
end of program
Enter a number:-5
negative no
end of program
23/10/2024
66)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=4;k>=1;k--)
    {
        for(l=1;l<=k;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}
OUTPUT:
*
**
***
****
*****
****
***
**
*
28/10/2024
67)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int a[10],i,even=0,odd=0;
    printf("enter 10 no: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("even=%d,odd=%d",even,odd);
}

OUTPUT:
enter 10 no: 
2
2
2
2
2
3
3
3
3
3
even=5,odd=5
68)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int a[10],i,sum=0;
    printf("enter 10 no: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
}
OUTPUT:
enter 10 no: 
2
2
2
2
2
2
2
2
2
2
sum=20
69)SIMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int a[10],i,num=0;
    printf("enter 10 no: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==5)
        {
        num++;
        }
    }
    printf("num=%d",num);
}
OUTPUT:
enter 10 no: 
5
5
5
5
4
3
2
7
6
4
num=4
70)SIMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int a[10],i,sum=0,e_even=0,o_odd=0;
    printf("Enter 10 num:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
        e_even=a[i]+e_even;
        }
        else
        {
            o_odd=o_odd+a[i];
        }
    }
    printf("%d%d",e_even,o_odd);
}
OUTPUT:
Enter 10 num:
2
2
2
2
2
3
3
3
3
3
10, 15
71)SIMPLE PROGRAM:
#include <stdio.h>
void sortArray(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
}
int main() 
{
    int arr[] = {4, 6, 8, 9, 2, 3, 5}; 
    int n = 7;
    sortArray(arr, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
 
#include <stdio.h>
void sortArray(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
}
int main() 
{
    int arr[] = {4, 6, 8, 9, 2, 3, 5}; 
    int n = 7;
    sortArray(arr, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
 OUTPUT:
Sorted array in ascending order:
2 3 4 5 6 8 9 
72)USER ENTER TWO NUMBER THAT NUMBERS SUM:
#include<stdio.h>
void main()
{
    int a,b,sum=0;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
}
OUTPUT:
Enter two numbers:4
7
sum=22
73)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
    
            printf("%d",j);
        }
        printf("\n");
    }
}
OUTPUT:
54321
54321
54321
54321
54321
73)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
OUTPUT:
1
12
123
1234
12345
74)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
OUTPUT:
55555
4444
333
22
1
6/11/2024:
BITWISE OPERATORS:
75)PATTERN PROGRAM:
#include<stdio.h>
void main()
{
    int a=2,b=4,c;
    c=a&b;
    printf("c=%d",c);
    c=a|b;
     printf("c=%d",c);
     c=~a;
      printf("c=%d",c);
      c=a^b;
       printf("c=%d",c);
       c=a<<1;
        printf("c=%d",c);
        c=a>>1;
         printf("c=%d",c);
    
}
OUTPUT:
c=0c=6c=-3c=6c=4c=1
76)SAMPLE PROGRAM:
USER ENTER NUMBER HOW MANY NUMBERS HIGH:
#include<stdio.h>
void main()
{
    int a,count=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a>0)
    {
        if(a&1)
        count++;
        a=a>>1;
    }
    printf("%d",count);
}
OUTPUT:
Enter a number:6
2
77)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    if(printf("hello"))
    {
        
    }
}
OUTPUT:
hello
78)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    int i=5;
    while(i--)
    {
        printf("hi\n");
    }
}
OUTPUT:
hi
hi
hi
hi
hi
79)SAMPLE QUESTIONS:
#include <stdio.h>

// Function to check if two integers have the same or opposite signs
int checkSigns(int a, int b) {
    // Extract the sign bits using right shift by 31
    int signA = a >> 31;
    int signB = b >> 31;

    // XOR the sign bits; if the result is 0, they have the same sign
    // If the result is 1, they have opposite signs
    return (signA ^ signB) == 0;  // Return 1 if same signs, 0 if opposite signs
}

int main() {
    int num1, num2;

    // Take input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if they have the same or opposite signs
    if (checkSigns(num1, num2)) {
        printf("The two integers have the same sign.\n");
    } else {
        printf("The two integers have opposite signs.\n");
    }

    return 0;
}

OUTPUT:
Enter two integers: 5 -7
The two integers have opposite signs.
Enter two integers: -3 -8
The two integers have the same sign.
Enter two integers: 10 15
The two integers have the same sign.
80)SAMPLE PROGRAM:
WHAT IS OUTPUT:
#include<stdio.h>
void main()
{
    int i;
    for(i=-1;i<=10;i++)
    {
        if(i<5)
        continue;
        else
        break;
        printf("hi");
    }
}
OUTPUT:
0
81)SAMPLE PROGRAM:
	#include<stdio.h>
void main()
{
    float a=1.1;
    double b=1.1;
    if(a==b)
    printf("hi");
    else
    printf("hello");
}
OUTPUT:
Hello
82)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    printf("%d",printf("hai"));
}
OUTPUT:
Hai3
83)SAMPLE PROGRAM:
#include<stdio.h>
void main()
{
    printf(1+"%d",4);
}
OUTPUT:
D4
09/12/2024;/MONDAY
84) STRUCTURES DISPLAY THE USER ENTER STUDENT DETAILS:
#include<stdio.h>
struct student 
{
char name[20];
int age;
float marks;
}; 
int main()
{
struct student a;
printf("enter a name,age,rollno:");
scanf("%s %d %f",a.name,&a.age,&a.marks);
printf("name=%s,age=%d,marks=%f",a.name,a.age,a.marks);
}
OUTPUT:
Enter a name age and marks: tharani 20 90.0
name=tharani,age=20,marks=90.0000000
85)STRUCTRES :
#include<stdio.h>
struct student
{
    char name[20];
    int age;
    float mark;
};
void main()
{
    
    struct student a ={"tharani",20,90};
    printf("%s,%d,%f",a.name,a.age,a.mark);
}
OUTPUT:
Tharani,20,90.0000000
86)STRUTURES USING ARRAYS :
#include<stdio.h>
struct student
{
    char name[200];
    int age;
    float mark;
};
void main()
{
    
    struct student a[3]={ {"tharani",20,90},{"abi",50,98},{"thara",88,99}};
    for(int i=0;i<3;i++)
    {
    printf("%s,%d,%f",a[i].name ,a[i].age, a[i].mark);
    }
}
OUTPUT:
Tharani,,20,90.0000000,abi,50,98.0000000,thara,88,99.0000000
87)STRUCTURES WITHIN ARRAYS:
#include<stdio.h>
struct student
{
    char name[200];
    int age;
    float mark;
};
void main()
{
    
    struct student a[3];
    for(int i=0;i<3;i++)
    { 
    scanf("%s %d %f",a[i].name,&a[i].age,&a[i].mark);
    printf("%s,%d,%f",a[i].name ,a[i].age, a[i].mark);
    }
}
OUTPUT:
tharani 3 20
tharani,3,20.000000
thara 33 30
thara,33,30.000000
abi 33 90
Abi,33,90.0000004
88)STRUCTURES USING 3 STUDENT FOR 4 MARK FIND THE SUM:
#include <stdio.h>
struct Student
{
    char name[50];
    int rollNumber;
    float marks[4]; 
};
int main()
{
    struct Student students[3]; 
    int i, j,sum=0;
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n",i);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read name
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 4 subjects:\n");
        for (j = 0; j < 4; j++) 
        {
            printf("Subject %d: ", j );
            scanf("%f", &students[i].marks[j]);
            sum=sum+students[i].marks[j];
        }
        printf("\n");
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: ");
        for (j = 0; j < 4; j++) 
        {
            printf("%.2f ", students[i].marks[j]);
            
        }
        
        printf("\n\n");
        printf("sum=%d",sum);
    }

    return 0;
}

OUTPUT:
Enter details for student 0:
Name: the
Roll Number: 3
Enter marks for 4 subjects:
Subject 0: 50
Subject 1: 55
Subject 2: 55
Subject 3: 55

Enter details for student 1:
Name: dddd
Roll Number: 4
Enter marks for 4 subjects:
Subject 0: 55
Subject 1: 55
Subject 2: 45
Subject 3: 45

Enter details for student 2:
Name: rssdr
Roll Number: 4
Enter marks for 4 subjects:
Subject 0: 43
Subject 1: 33
Subject 2: 33
Subject 3: 22


Student Details:
Student 1:
Name: the
Roll Number: 3
Marks: 50.00 55.00 55.00 55.00 

sum=546Student 2:
Name: dddd
Roll Number: 4
Marks: 55.00 55.00 45.00 45.00 

sum=546Student 3:
Name: rssdr
Roll Number: 4
Marks: 43.00 33.00 33.00 22.00 

sum=546
89)STRUCTURES FIND THE AVARAGE OF 3 STUDENT 3 SUBJECT MARK:
#include <stdio.h>
struct Student
{
    char name[50];
    int rollNumber;
    float marks[3]; 
};
int main()
{
    struct Student students[3]; 
    int i, j,sum=0,avg=0;
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n",i);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read name
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 4 subjects:\n");
        for (j = 0; j < 4; j++) 
        {
            printf("Subject %d: ", j );
            scanf("%f", &students[i].marks[j]);
            sum=sum+students[i].marks[j];
            avg=sum/3;
        }
        printf("\n");
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: ");
        for (j = 0; j < 4; j++) 
        {
            printf("%.2f ", students[i].marks[j]);
            
        }
        
        printf("\n\n");
        printf("sum=%d",sum);
        printf("avg=%d",avg);
    }

    return 0;
}
OUTPUT:
Enter details for student 0:
Name: tharani 
Roll Number: 20
Enter marks for 4 subjects:
Subject 0: 44
Subject 1: 55
Subject 2: 44
Subject 3: 44

Enter details for student 1:
Name: thara
Roll Number: 60
Enter marks for 4 subjects:
Subject 0: 22
Subject 1: 22
Subject 2: 22
Subject 3: 22

Enter details for student 2:
Name: aabi
Roll Number: 23
Enter marks for 4 subjects:
Subject 0: 11
Subject 1: 12
Subject 2: 13
Subject 3: 14


Student Details:
Student 1:
Name: tharani
Roll Number: 20
Marks: 44.00 55.00 44.00 4464665810531492785669757992960.00 

sum=325avg=108Student 2:
Name: thara
Roll Number: 60
Marks: 22.00 22.00 22.00 17104818382244981180989440.00 

sum=325avg=108Student 3:
Name: aabi
Roll Number: 23
Marks: 11.00 12.00 13.00 14.00 

sum=325avg=108
90)


















    








 


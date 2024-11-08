/*
#include<iostream>
using namespace std;

int main(){
    // cout<<" 1. hello world ";

    // cout<<" \n 2. this is just testing";

    // cout<<" \n 3. to add 4 gaps b/w text we write \t to have the gaps.";

    // cout<<" \n 4. to delete the previous character\b just add\b";// but it doesnt work on last word :)

    // cout<<" \n 5. to type inverted commas just write \"thats nice!\"";

    // cout<<" \n 6. to print a slash just write \\thats ez\\";
*/

// 1. (!Function!) to convert a negative answer to positive {modulus}
/*
void subtract(int x, int y){
int g;

if (x<y)
{
    g=(x-y)*-1;
    cout<<g;
}

else if (x>y)
{
   g=x-y;
   cout<<g;
}

}
*/

/*

                                // (PF small details) //

using namespace std;
#include <iostream>

int main(){
    int a=5,b=10;

    //cout<<a+b<<endl;
    //cout<<a++<<endl;        // postfix increment
    //cout<<++a<<endl;        // prefix increment
    //cout<<+a<<endl;
    //a+= b                 // perform the function a+b and store its value in a
    //a-= b ;                 // perform the function a-b and store its value in a
    //cout<<a<<endl;
    //cout<<b<<endl;

    //cout<<(a==b)<<endl;     //this gives answer in boolean form false=0 and true=1
    //cout<<(a||b)<<endl;     //this gives answer in boolean form false=0 and true=1
    //cout<<(a&&b)<<endl;     //this gives answer in boolean form false=0 and true=1
    //a&b;                    // does nothing
    //cout<<a;

    return 0;
}
*/

// 2. EVEN OR ODD (!PROGRAM!) //

/*
int EvenOrOdd(int x)
{
int var;
var = x % 2;
//cout << var << endl;

if (var == 0)
{
    cout << "even" << endl;
}

else if (var == 1)
{
    cout << "odd" << endl;
}

return;
}

 int main()
{
int a;
int b;
cin >> a;
cin >> b;

for (int i = a; i < b + 1; i++)
{
    if (i == 1)
    {
        cout << "one" << endl;
    }

    else if (i == 2)
    {
        cout << "two" << endl;
    }

    else if (i == 3)
    {
        cout << "three" << endl;
    }

    else if (i == 4)
    {
        cout << "four" << endl;
    }

    else if (i == 5)
    {
        cout << "five" << endl;
    }

    else if (i == 6)
    {
        cout << "six" << endl;
    }

    else if (i == 7)
    {
        cout << "seven" << endl;
    }

    else if (i == 8)
    {
        cout << "eight" << endl;
    }

    else if (i == 9)
    {
        cout << "nine" << endl;
    }

    else if (i > 9)
    {
        EvenOrOdd(i);
    }
    /*
        else if (i==11)
        {
            cout<<"odd";
        }

         else if (i==12)
        {
            cout<<"even";
        }

         else if (i==13)
        {
            cout<<"odd";
        }

    else
    {
        cout << " enter the value above 0"<<endl;
    }
}
return 0;
}
    */

// 3. (!PROGRAM!) FOR PRINTING LARGEST OF FOUR INTEGERS //

/*

int main(){
int a , b, c, d;
cin>>a;
cin>>b;
cin>>c;
cin>>d;

if (a>b && a>c && a>d)
{
    cout<<a;
}

else if (b>a && b>c && b>d)
{
    cout<<b;
}

else if (c>a && c>b && c>d)
{
    cout<<c;
}

else if (d>a && d>b && d>c)
{
    cout<<d;
}

return 0;
}
*/

// 4. (!PROGRAM!) TO PRINT A TABLE //

/*
#include<iostream>
using namespace std;

int main(){
int a;
cout<<" Type a number "<<endl;
cin>>a;
for (int i = 1; i < 11; i++)
{
    cout<<a<<" x "<<i<<" = "<<a*i<<endl;
}

return 0;
}
*/

// (!PROGRAM!) WRITING ALL THE EVEN VALUE FROM 0 TO 100 //

/*
#include<iostream>
using namespace std;

int main(){
for (int i = 0; i <= 100; i+=2) }--->  // IMP NOTE: here we have incremented the value by 2.
{
    cout<<i<<endl;
}

return 0;
}
*/

// (!PROGRAM!) TO INPUT NUMBERS INTO AN ARRAY //

/*
    #include<iostream>
    using namespace std;

    int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }

    for (int i = a-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    }
*/

/*
//                                // [Program to take 3 numbers and output median from them after arranging
//                                   them in ascending order.] //

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout<<" Enter your first number"<<endl;
    cin>>a;
    cout<<" Enter your second number"<<endl;
    cin>>b;
    cout<<" Enter your third number"<<endl;
    cin>>c;

    if (a>b && a>=c)
    {
        if (b>c)
        {
            cout<<" Median is : "<<b;
        }
        else
        {
            cout<<" Median is : "<<c;
        }
    }

    else if (b>a && b>=c)
    {
        if (a>c)
        {
            cout<<" Median is : "<<a;
        }
        else
        {
            cout<<" Median is : "<<c;
        }
    }

    else if (c>a && c>=b)
    {
        if (a>b)
        {
            cout<<" Median is : "<<a;
        }
        else
        {
            cout<<" Median is : "<<b;
        }
    }

    else if (a==b && b==c)
    {
        cout<<" Median is : "<<b;
    }

    return 0;
}
*/

/*
                                            (Random Program)

#include <iostream>
using namespace std;

int main (){
    double roomp, nofroom, discount, total, bookingd;
    roomp=100.0;

    cout<<" Enter the number of rooms "<<endl;
    cin>>nofroom;
    cout<<" Enter the number of days you will be staying "<<endl;
    cin>>bookingd;

    if (nofroom>10 && nofroom<21)
    {
        discount=0.1*(roomp*nofroom);
        cout<<" the discount is 10% which is : "<<discount<<endl;
        total=(roomp*nofroom)-discount;
        if (bookingd>5)
        {
            total=total-(total*0.05);
            cout<<" the total price is : "<<total;
        }
        else
        {
        cout<<" the total price is : "<<total;
        }
    }

    else if (nofroom>20 && nofroom<31)
    {
        discount=0.2*(roomp*nofroom);
        cout<<" the discount is 20% which is : "<<discount<<endl;
        total=(roomp*nofroom)-discount;
        if (bookingd>5)
        {
            total=total-(total*0.05);
            cout<<" the total price is : "<<total;
        }
        else
        {
        cout<<" the total price is : "<<total;
        }
    }

    else if (nofroom>30)
    {
        discount=0.1*(roomp*nofroom);
        cout<<" the discount is 30% which is : "<<discount<<endl;
        total=(roomp*nofroom)-discount;
        if (bookingd>5)
        {
            total=total-(total*0.05);
            cout<<" the total price is : "<<total;
        }
        else
        {
        cout<<" the total price is : "<<total;
        }
    }

    else if (nofroom<10)
    {
        total=(roomp*nofroom);
        if (bookingd>5)
        {
            total=total-(total*0.05);
            cout<<" the total price is : "<<total;
        }
        else
        {
        cout<<" the total price is : "<<total;
        }
    }


    return 0;
}
*/

/*

                        //(PROGRAM to count the number of odd and even digits and printing which is more.)//

#include <iostream>
using namespace std;

int main (){
    int num, ones, tens, thousands, tenthousands, even, odd;
    even=0;
    odd=0;
    cout<<"Enter a 4-digit number ";
    cin>>num;

    ones = num%10;
    //cout<<ones<<endl;
    num = num/10;

    tens = num%10;
    //cout<<tens<<endl;
    num = num/10;

    thousands = num%10;
    //cout<<thousands<<endl;
    num = num/10;

    tenthousands = num%10;
    //cout<<tenthousands<<endl;

    if (ones%2==0)
    {
        even=even+1;
    }
    else if(ones%2==1)
    {
        odd=odd+1;
    }

    if (tens%2==0)
    {
        even=even+1;
    }
    else if(tens%2==1)
    {
        odd=odd+1;
    }

    if (thousands%2==0)
    {
        even=even+1;
    }
    else if(thousands%2==1)
    {
        odd=odd+1;
    }

    if (tenthousands%2==0)
    {
        even=even+1;
    }
    else if(tenthousands%2==1)
    {
        odd=odd+1;
    }

    if (odd>even)
    {
        cout<<"More Odd Digits";
    }

    else if (even>odd)
    {
        cout<<"More Even Digits";
    }

    else if(odd==even)
    {
        cout<<"Equal Number of Even and Odd Digits";
    }


    return 0;
}
*/

/*

                             // ( Printing Factorial of a number ) //

using namespace std;
#include <iostream>

int main(){
    int num ,fac=1;
    cout << "enter your number "<<endl;
    cin>> num;

    for (int i = num ; i >=2 ; i--)
    {
        fac = fac * i;
    }
    cout<<"factorial is : "<< fac << endl;
    cout<<num;

    return 0;
}
*/

/*

                                   // ( Program to input and ouput alphabets ) //

using namespace std;
#include <iostream>


int main(){
    char ch;

    // Ask the user for a single character input
    cout << "Enter a single English character (uppercase or lowercase): ";
    cin >> ch;

    // Check if the input is a lowercase letter
    if (ch >= 'a' && ch <= 'z') {
        for (char i = ch; i <= 'z'; i++) {
            cout << i << " ";
        }
    }
    // Check if the input is an uppercase letter
    else if (ch >= 'A' && ch <= 'Z') {
        for (char i = ch; i <= 'Z'; i++) {
            cout << i << " ";
        }
    }
    // If input is not a valid letter
    else {
        cout << "Invalid input! Please enter a valid English letter.";
    }

    cout << endl;
    return 0;
}
*/

/*

                                           // ( IMPORTANT NOTE ) //

using namespace std;
#include <iostream>

int main(){
    int num=84;
    if (num%12)        // this means if 84 % 12 = 1 ---> 1 = true ----> then enter into this if statement.
                       // else if 84 % 12 = 0 false then go down
    {
        cout<< " YES ";
    }

    else
    cout << " NO ";


    return 0;
}
*/

/*
//Q1.(FAIQ)
using namespace std;
#include <iostream>

int main(){
   int num;
    cout << "Input : ";
    cin >> num;
    cout<<"output : "<<endl;

    for (int i = 1; i <= num; i++) {
        for (int j = num; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = num ; i >= 1; i--) {
        for (int j = num; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
//Q1.(HAFSAN)
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Input : ";
    cin >> number;

    for (int r = 1; r <= number; r++) {
        for (int space = number; space > r; space--) {
            cout << " ";
        }
        for (int ast = 1; ast <= (2 * r - 1); ast++) {  //-->ast=asterick
            cout << "*";
        }
        cout << endl;
    }


    for (int r = number; r >= 1; r--) {
        for (int space = number; space > r; space--) {
            cout << " ";
        }
        for (int ast = 1; ast <= (2 * r - 1); ast++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
//Q3.(FAIQ)
#include <iostream>
using namespace std;

int main() {
    int num,count=0,a=0,b=0,c=0,d=0,e=0;

    cout << "Enter up to 5 values (enter 0to stop): " << endl;

    while (count < 5) {
        cin >> num;
        if (num == 0) break;

        switch (count) {
        case 0: a = num; break;
        case 1: b = num; break;
        case 2: c = num; break;
        case 3: d = num; break;
        case 4: e = num; break;
        }
        count++;
    }


    if (count > 0) {
        cout << a << " : ";
        if (a<0)
        {
            a=a*-1;
        }
        for (int j = 0; j < a; j++) cout << "*";
        cout << endl;
    }

    if (count > 1) {
        cout << b << " : ";
        if (b<0)
        {
            b=b*-1;
        }
        for (int j = 0; j < b; j++) cout << "*";
        cout << endl;
    }
    if (count > 2) {
        cout << c << " : ";
        if (c<0)
        {
            c=c*-1;
        }
        for (int j = 0; j < c; j++) cout << "*";
        cout << endl;
    }
    if (count > 3) {
        cout << d << " : ";
        if (d<0)
        {
            d=d*-1;
        }
        for (int j = 0; j < d; j++) cout << "*";
        cout << endl;
    }
    if (count > 4) {
        cout << e << " : ";
        if (e<0)
        {
            e=e*-1;
        }
        for (int j = 0; j < e; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
*/

/*
//Q3.(HAFSAN)
#include <iostream>
using namespace std;

int main() {
    int inputValue, counter = 0;
    int value1 = 0, value2 = 0, value3 = 0, value4 = 0, value5 = 0;

    cout << "Enter up to 5 values (enter 0 to stop): " << endl;

    while (counter < 5) {
        cin >> inputValue;
        if (inputValue == 0) break;

        switch (counter) {
        case 0: value1 = inputValue; break;
        case 1: value2 = inputValue; break;
        case 2: value3 = inputValue; break;
        case 3: value4 = inputValue; break;
        case 4: value5 = inputValue; break;
        }
        counter++;
    }

    if (counter > 0) {
        cout << value1 << " : ";
        for (int i = 0; i < value1; i++) cout << "*";
        cout << endl;
    }

    if (counter > 1) {
        cout << value2 << " : ";
        for (int i = 0; i < value2; i++) cout << "*";
        cout << endl;
    }

    if (counter > 2) {
        cout << value3 << " : ";
        for (int i = 0; i < value3; i++) cout << "*";
        cout << endl;
    }

    if (counter > 3) {
        cout << value4 << " : ";
        for (int i = 0; i < value4; i++) cout << "*";
        cout << endl;
    }

    if (counter > 4) {
        cout << value5 << " : ";
        for (int i = 0; i < value5; i++) cout << "*";
        cout << endl;
    }

    return 0;
}
*/

/*
//Q7.(FAIQ)
#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"enter an integer : ";
    cin >> num1;
    cout<<endl;
    cout<<"enter an integer : ";
    cin >> num2;
    cout<<endl;

    int sumd1 = 0, sumd2 = 0;
    int i = 1;
    do {
        if (num1 % i == 0) {
            sumd1 += i;
        }
        i++;
    } while (i < num1);

    int j = 1;
    do {
        if (num2 % j == 0) {
            sumd2 += j;
        }
        j++;
    } while (j < num2);

    int q1 = sumd1 / num1;
    int q2 = sumd2 / num2;

    if (q1 == q2) {
        cout << num1 << " and " << num2 << " are friendly pair " << endl;
}
    else {
        cout << num1 << " and " << num2 << " are not friendly pairs." << endl;
    }

        return 0;
}
*/

/*
Q7.(HAFSAN)
#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter your number 1 : ";
    cin >> number1;
    cout << endl;

    cout << "Enter your number 2 : ";
    cin >> number2;
    cout << endl;

    int sumdivisors1 = 0, sumdivisors2 = 0;


    int counter1 = 1;
    do {
        if (number1 % counter1 == 0) {
            sumdivisors1 += counter1;
        }
        counter1++;
    } while (counter1 < number1);


    int counter2 = 1;
    do {
        if (number2 % counter2 == 0) {
            sumdivisors2 += counter2;
        }
        counter2++;
    } while (counter2 < number2);

    int ratio1 = sumdivisors1 / number1;
    int ratio2 = sumdivisors2 / number2;

    if (ratio1 == ratio2) {
        cout << number1 << " and " << number2 << " are friendly pairs." << endl;
    } else {
        cout << number1 << " and " << number2 << " are not friendly pairs." << endl;
    }

    return 0;
}
*/

/*
//Q8.(HAFSAN)
#include <iostream>
using namespace std;

int main(){
char num;
bool check = true;
int ans=0 , status = 1;
int point = 0;
cout << "enter hexa number with the condition that start entering from LSB TO MSB" << endl;
for (;check;) {
    cin >> num;
    if (num == '#') {
        break;
    }
    if (num >= '0' && num <= '9') {
        ans = num - '0';
    }
    else if (num >= 'A' && num <= 'F') {
        ans = num - 'A' + 10;
    }
    else if (num >= 'a' && num <= 'f') {
        ans = num - 'a' + 10;
    }
    else {
        cout << "wrong entry" << endl;
        continue;
    }
    point = point + (ans * status);
    status=status*16;
   }
 cout << "FINAL RESULT : " << point;
 return 0;
}
*/

/*
//Q8.(FAIQ)
#include <iostream>
using namespace std;

int main(){
    float decV=0;
    float dig =1;
    char digit;

    cout<<"enter hexadecimal number (right to left) : ";

    for (int i = 0; ; i++)
    {
        cin>>digit;
        if (digit=='-1')
            break;
        else if (digit>'0' && digit < '10')
        {
            decV += (digit-'0')*dig;
        }
        else if (digit>='A'&& digit<='F')
        {
            decV += (digit-'A'+10)*dig;
        }
        else if(digit >='a'&&digit<='f'){
            decV+=(digit - 'a'+10)*dig;
        }
        dig *= 16;

    }

    cout<<"Decimal Value is : "<<decV<<endl;
    return 0;
}
*/

/*

                                // (Program to check for a prime number) //

#include <iostream>
using namespace std;

int main(){
   int num;
   cout<<"enter a number"<<endl;
   cin>>num;

   if(num==1 || num==2 || num==3 || num==5 || num==7){
    cout<<"it is a prime number. ";
   }

   else if (num%2==0 || num%3==0 || num%5==0 || num%7==0)
   {
    cout<<"it is not a prime number. ";
   }

   else{
    cout<<"it is a prime number. ";
   }


    return 0;
}
*/

/*

                              // (Program of Fibonacci sequence using While loop (FAIQ)) //

#include <iostream>
using namespace std;

int main(){
    int num1=1,num2=1,num3,target;

    cout<<"enter yout target";
    cin>>target;

            cout<<num1<<endl;
            cout<<num2<<endl;
        num3=num2+num1;
        while (num3<=target)
        {
        //num3=num2+num1;
        cout<<num3<<endl;

            if (num3==target)
            {
                cout<<"num 1 is : "<<num1<<endl<<"num 2 is : "<<num2<<endl;
                break;

            }
            else{
        num1=num2;
        num2=num3;
        num3=num2+num1;
        }
        }

        if (num3==target)
        {
            cout<<"it is a part";
        }
        else
        {
            cout<<"it isnt a part ";
        }


    return 0;
}
*/

/*

                          // (Program of Fibonacci sequence using While loop (ZAEEM)) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int target;
    cout<<"Enter a target ";
    cin>>target;
    int first=0;
    int second=1;
    int sum=first+second;
    bool flagFound=false;
    while (sum<=target){
        //cout<<"sum"<<sum<<endl;
        if (target==sum){
            flagFound= true;
            break;
        }
        else{
            int third=first+second;
            first=second;
            second=third;
        }
        sum=first+second;
    }
    cout<<"flagFound"<<flagFound<<endl;
    if (flagFound){
        cout<<"Target Found: "<<first<<"+"<<second<<endl;
    }
    else
    {
        cout<<"Target Not Found"<<endl;

    }


    return 0;
}
*/

/*

                                   (Program to Calculate GCD Using while loops and if statements)

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num1,num2,newNum;
    cout<<" enter number 1 "<<endl;
    cin>>num1;
    cout<<" enter number 2 "<<endl;
    cin>>num2;

    while(num1>0 && num2>0){          //]
        if (num1 > num2)              //]           (Calculating Greatest Common Divisor)
        {                             //]
            newNum=num1%num2;         //]    1.Replace Larger Number: Replace the larger number with the
            num1=newNum;              //]      remainder of the larger number divided by the smaller number.
        }                             //}--> 2.Repeat Until Zero: Continue this process until one of the
        else if (num2 > num1)         //]      numbers becomes zero.
        {                             //]    3.Result: The non-zero number is the GCD of the original two
            newNum=num2%num1;         //]      numbers.
            num2=newNum;              //]                (This was given in the lab 4 manual.)
        }                             //]
    }                                 //]
cout<<"num 1 is : "<<num1<<" and num 2 is : "<<num2<<endl;
if (num1>num2)
{
    cout<<"GCD is : "<<num1;
}
else if (num2>num1)
{
    cout<<"GCD is : "<<num2;
}
    return 0;
}
*/

/*

                    //(Program to count even numbers entere until -1 is entered using while loop) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num,count=0,even=0,od=0;
    cout<<"Enter a number "<<endl;
    cin>>num;

    while (num!=-1)
    {
        if (num%2==0)
        {
            even++;
        }
        else if (num%2==1)
        {
            odd++;
        }
        count++;
        cin>>num;
    }
    cout<<"Total numbers entered are : "<<count<<endl;
    cout<<"Total even numbers are : "<<even;
    return 0;
}
*/

/*

                               // (Program to calculate powers of a number) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int baseNum,exp,newNum,count=1;
    cout<<"Enter base number "<<endl;
    cin>>baseNum;
    cout<<"Enter exponent "<<endl;
    cin>>exp;
    int inc=baseNum;

    while (count!=exp)
    {
        newNum=inc*baseNum;
        inc=newNum;
        count++;
    }
    cout<<"the answer is : "<<newNum<<endl;
    return 0;
}
*/

/*

                // (Program to check whether a number is palindrome or not using while loops) //

#include <iostream>
using namespace std;

int main() {
    int originalNum,count=0,reversedNum;
    cout<<"enter a number"<<endl;
    cin>>originalNum;
    //cout<<num<<endl;
    int reversedwholenum=0;
    int num=originalNum;
    while(num>0){
        reversedNum=num%10;
        cout<<reversedNum<<endl;
        num=num/10;
        reversedwholenum=reversedwholenum*10+reversedNum;
        count++;
    }
    cout<<"the total digits are : "<<count<<endl;
    cout<<"the reversed num is : "<<reversedwholenum<<endl;
    cout<<originalNum<<endl;
    if (reversedwholenum==originalNum)
    {
        cout<<"it is palindrome "<<endl;
    }
    else if(reversedwholenum!=originalNum)
    {
        cout<<"it isnt a palindrome "<<endl;
    }

    return 0;
}
*/

/*

                        // (Program of the number guessing game using while loop and if statement.) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    int num,randomNum = rand()%100+1,count=1;      // }---> this was given in the lab manual 5.
    cout<<"Random number is : "<<randomNum<<endl;
    cout<<"welcome to the number guessing game"<<endl;
    cout<<"Guess a number between 1 and 100 "<<endl;
    cout<<"attempt 1 : ";
    cin>>num;
    while (num!=randomNum)
    {
        if (num>randomNum)
        {
            cout<<"Too high! Try again ";
        }
        else if (num<randomNum)
        {
            cout<<"Too low! Try again ";
        }
        count++;
        cin>>num;
    }
    cout<<"Congratulations! You have guessed it in : "<<count<<" attempts";
    return 0;
}
*/

/*

                 // (Program to make a DIAMOND SHAPE using Nested FOR Loops !!IMP!!) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num,z=0;
    cout<<"Enter the number of lines ";
    cin>>num;
        int copyNum=num;
        int copyNum2=num;
    for (int i = 0; i < num; i++)
    {
        for (int z = copyNum-1; z > 0; z--)
        {
            cout<<" ";
        }
        copyNum=copyNum-1;

        for (int j = -1; j < i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = copyNum2; j < num; j++)
        {
            cout<<" ";
        }
        copyNum2=copyNum2-1;

        for (int k = num; k > i; k--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;

    }


    return 0;
}
*/

/*

                    //  (Program to write numbers and draw the same number of stars using While and For
                    //   loops and If statements) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num,a=0,b=0,c=0,d=0,e=0,count=0,index=0;
    // cout<<"Enter a number (0 to stop): ";
    // cin>>num;
    //a=num;
    while (count<5)
    {
        cout<<"Enter a number (0 to stop): ";
        cin>>num;

        if (num==0)
        {
            break;
        }
        if (num!=0 && count==0)
        {
            a=num;
            count++;
        }
        else if (num!=0 && count==1)
        {
            b=num;
            count++;
        }
        else if (num!=0 && count==2)
        {
            c=num;
            count++;
        }
        else if (num!=0 && count==3)
        {
            d=num;
            count++;
        }
        else if (num!=0 && count==4)
        {
            e=num;
            count++;
        }
    }

    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    cout<<"c :"<<c<<endl;
    cout<<"d :"<<d<<endl;
    cout<<"e :"<<e<<endl;
    cout<<"count is : "<<count<<endl;


       for (int i = 0; i < count; i++)
       {
        if (i==0)
        {
            cout<<a<<":";
           for (int j = 0; j < a; j++)
           {
               cout<<"*";
           }
        }
        if (i==1)
        {
            cout<<b<<":";
           for (int j = 0; j < b; j++)
           {
               cout<<"*";
           }
        }
        if (i==2)
        {
            cout<<c<<":";
           for (int j = 0; j < c; j++)
           {
               cout<<"*";
           }
        }
        if (i==3)
        {
            cout<<d<<":";
           for (int j = 0; j < d; j++)
           {
               cout<<"*";
           }
        }
        if (i==4)
        {
            cout<<e<<":";
           for (int j = 0; j < e; j++)
           {
               cout<<"*";
           }
        }
        cout<<endl;
       }
    return 0;
}
*/

/*

                              // (Program to find Square Root) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    double num, guess, guessNew, diff, accuracy;
    cout << "Enter a number " << endl;
    cin >> num;
    accuracy = 0.0000001;
    guess = num / 2.0;                            //]
    //cout<<guess<<endl;                          //]
    guessNew = (guess + (num / guess)) / 2.0;     //}----> this formula was given in the Lab 5 manual.
    //cout<<guessNew<<endl;
    diff = guess - guessNew;
// cout<<diff<<endl;
//     guess=guessNew;
//     guessNew = (guess + (num / guess)) / 2.0;
//     cout<<guessNew;
//     guess=guessNew;
//     guessNew = (guess + (num / guess)) / 2.0;
//     cout<<guessNew;
    while (diff > accuracy)
    {
        guess=guessNew;
        guessNew = (guess + (num / guess)) / 2.0;
        diff= guess - guessNew;
    }
    cout << "the square root is : " << guessNew;
    return 0;
}
*/

/*

     //(Program to enter alphabets and tell whether they are in alphabetical order !! IMP !! BOOL used )//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char alphabet, prevalphabet, currentalphabet;
    // bool yes;

    bool isAlphabeticalOrder=true; // will be true if in order else false


    cout << "Enter an alphabet ";
    cin >> alphabet;

    prevalphabet = alphabet;

    if (prevalphabet >= 'A' && prevalphabet <= 'Z')
    {
        prevalphabet = prevalphabet + 32;
    }

    // cout<<"alphabet is : "<<alphabet;
    while (alphabet != '0')
    {
        cout << "Enter an alphabet ";
        cin >> currentalphabet;
        // cout<<prevalphabet<<endl;
        // cout<<currentalphabet<<endl;


        // Converts uppercase character to lowercase character
        if (currentalphabet >= 'A' && currentalphabet <= 'Z')
        {
            currentalphabet = currentalphabet + 32;
        }


        // cout<<currentalphabet<<endl;
        if (currentalphabet == '0')
        {
            break;
        }
        else if (prevalphabet > currentalphabet)
        {
            // cout<<prevalphabet<<endl;
            // cout<<currentalphabet<<endl;
            isAlphabeticalOrder = false;
            prevalphabet = currentalphabet;
            // cout<<prevalphabet<<endl;
        }

        else if (currentalphabet > prevalphabet)
        {
            // yes = true;
            prevalphabet = currentalphabet;
        }
    }

    if (isAlphabeticalOrder == true)
    {
        cout << "they are in alphabetical order";
    }
    else if (isAlphabeticalOrder == false)
    {
        cout << "they are not in alphabetical order";
    }
    return 0;
}
*/

/*

//(Program to input the numbers until we enter 0 and then tel the max an min value using while loop and is statement)//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int initialNum,num,max=0,min=0;
    cout<<"Enter a number ";
    cin>>initialNum;
    if (initialNum == 0)
    {
        cout<<"No number was entered "<<endl;
        //return 0;
    }
    max=initialNum;
    min=initialNum;
    num=initialNum;
    // cout<<"max is "<<max;
    // cout<<"min is "<<min;


    while (num!=0)
    {

        if (num>max)
        {
            max=num;
        }
        else if (num<min)
        {
            min=num;
        }
        cout<<"Enter a number ";
        cin>>num;
    }

    cout<<"max is : "<<max<<endl;
    cout<<"min is : "<<min;
    return 0;
}
*/

/*

                      // ( Program to convert hexadecimal value into decimal value ) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int digits,num,hexvalue=0,base=1;
    cout<<"Enter the total digits in heaxdecimal ";
    cin>>digits;

    for (int i = 0; i < num; i++)
    {
        cout<<"Enter number "<<i+1<<endl;
        cin>>num;

        hexvalue=hexvalue+(num*base);
        base=base*16;
    }
    cout<<"the value is "<<hexvalue;
    return 0;
}
*/

/*

                                // ( Program of the SNAKE GAME ) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int main(){
    int option;
    char option2;
    bool gameplay=true;
    int p1score=0;
    int p2score=0;
    srand(static_cast<unsigned int>(time(0)));
    int randomNum= rand() % 6+1;
    while (gameplay)
    {
        cout<<"Player 1 its your turn "<<endl;
        cout<<"Press 1 to roll the dice, or 2 to exit : ";
        cin>>option;


        if (option == 2)
        {
            break;
        }


        else if (option == 1)
        {

        cout<<"You rolled a "<<randomNum<<endl;
        p1score=p1score+randomNum;
        if (p1score==25||p1score>25)
        {
        cout<<"Player 1s score is : "<<p1score<<endl;
        cout<<"Player 1 wins with a score of 25 ! "<<endl;
        cout<<"Play again ? (Y/N) : ";
        cin>>option2;


        if (option2=='Y'||option2=='y')
        {
            gameplay=true;
        }

        else if (option2=='N'||option2=='n')
        {
            gameplay=false;
            break;
        }
        }


        if (p1score == 3 || randomNum == 3)
        {
            p1score=22;
            cout<<"You hit ladder ! Climb to position 22. "<<endl;
            cout<<"Player 1s score is : "<<p1score<<endl;
        }

        else if (p1score == 5 || randomNum == 5)
        {
            p1score=8;
            cout<<"You hit ladder ! Climb to position 8. "<<endl;
            cout<<"Player 1s score is : "<<p1score<<endl;
        }

        else if (p1score == 11 || randomNum == 11)
        {
            p1score=25;
            cout<<"You hit ladder ! Climb to position 25. "<<endl;
            cout<<"Player 1s score is : "<<p1score<<endl;
        }

        else if (p1score == 19 || randomNum == 19)
        {
            p1score=7;
            cout<<"You hit Snake ! Go down to position 7. "<<endl;
            cout<<"Player 1s score is : "<<p1score<<endl;
        }

        else if (p1score == 24 || randomNum == 24)
        {
            p1score=16;
            cout<<"You hit Snake ! Go down to position 16. "<<endl;
            cout<<"Player 1s score is : "<<p1score<<endl;
        }

        else
        {
            cout<<"Player 1s score is : "<<p1score<<endl;
        }

        }


        if (p1score==25||p1score>25)
        {
        //cout<<"Player 1s score is : "<<p1score;
        cout<<"Player 1 wins with a score of 25 ! "<<endl;
        cout<<"Play again ? (Y/N) : ";
        cin>>option2;


        if (option2=='Y')
        {
            gameplay=true;
        }

        else if (option2=='N')
        {
            gameplay=false;
            break;
        }
        }


cout<<endl;



                // Player 2s turn //

        cout<<"Player 2 its your turn "<<endl;
        cout<<"Press 1 to roll the dice, or 2 to exit : ";
        cin>>option;


        if (option == 2)
        {
            break;
        }


        else if (option == 1)
        {

        cout<<"You rolled a "<<randomNum<<endl;
        p2score=p2score+randomNum;
        if (p2score==25||p2score>25)
        {
        cout<<"Player 2s score is : "<<p2score<<endl;
        cout<<"Player 2 wins with a score of 25 ! ";
        cout<<"Play again ? (Y/N) : ";
        cin>>option2;


        if (option2=='Y')
        {
            gameplay=true;
        }

        else if (option2=='N')
        {
            gameplay=false;
            break;
        }
        }


        if (p2score == 3 || randomNum == 3)
        {
            p2score=22;
            cout<<"You hit ladder ! Climb to position 22. "<<endl;
            cout<<"Player 2s score is : "<<p2score<<endl;
        }

        else if (p2score == 5 || randomNum == 5)
        {
            p2score=8;
            cout<<"You hit ladder ! Climb to position 8. "<<endl;
            cout<<"Player 2s score is : "<<p2score<<endl;
        }

        else if (p2score == 11 || randomNum == 11)
        {
            p2score=25;
            cout<<"You hit ladder ! Climb to position 25. "<<endl;
            cout<<"Player 2s score is : "<<p2score<<endl;
        }

        else if (p2score == 19 || randomNum == 19)
        {
            p2score=7;
            cout<<"You hit Snake ! Go down to position 7. "<<endl;
            cout<<"Player 2s score is : "<<p2score<<endl;
        }

        else if (p2score == 24 || randomNum == 24)
        {
            p2score=16;
            cout<<"You hit Snake ! Go down to position 16. "<<endl;
            cout<<"Player 2s score is : "<<p2score<<endl;
        }

        else
        {
            cout<<"Player 2s score is : "<<p2score<<endl;
        }
        }
        // cout<<"Player 2s score is : "<<p2score<<endl;

        if (p2score==25||p2score>25)
        {
        //cout<<"Player 2s score is : "<<p2score;
        cout<<"Player 2 wins with a score of 25 ! ";
        cout<<"Play again ? (Y/N) : ";
        cin>>option2;


        if (option2=='Y'||option2=='y')
        {
            gameplay=true;
        }

        else if (option2=='N'||option2=='n')
        {
            gameplay=false;
        }
        }

        cout<<endl;


    }

    return 0;
}
*/

/*

                                // (Program to enter a hollow rectangle) //

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cout<<"The hollow rectngle. "<<endl;
    cout<<"Enter the number of rows : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j==1||j==num||i==1||i==num)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
*/

// (Program for number pyramid (FAIQ)) //
// #include <iostream>
// #include <string>
// #include <cmath>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number of rows. ";
//     cin>>num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = i; j < num ; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = i; j >= 1 ; j--)
//         {
//             cout<<j;
//         }
//         for (int j = 2; j<=i ; j++)
//         {
//             cout<<j;
//         }

//         cout<<endl;
//     }

//    return 0;
//}

// (Program for number pyramid (ZAEEM)) //
// #include <iostream>
// #include <string>
// #include <cmath>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int rowsNum=0;
//     cout<<"Enter number: ";
//     cin>>rowsNum;
//     cout<<endl;
//     for (int i = 0; i < rowsNum; i++)
//     {
//         for (int l = rowsNum-1; l >i; l--)
//         {
//             /* code */
//             cout<<" ";
//         }

//         for (int j = i; j >0; j--)
//         {
//             cout<<j+1;
//         }
//         for (int k = 0; k <i+1; k++)
//         {
//             // cout<<"here";
//             cout<<k+1;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    // cout << "n: " << n << endl;
    // 731
    // 365
    // 182
    // 91
    // 45

    // cout<<(n > 0 && n > 10 && n < 5)<<endl;
    // cout<<((--n /= 2) > 2)<<endl;
    // cout << "n: " << n << endl;

    for (;( n > 0 && n > 10 && n < 5) || (--n /= 2) > 2; n--);
    {
        cout << "Your magical Number is: " << n << endl;
    }
    // {cout<<"hi";
    // cout<<"hello";}
    return 0;
}
*/

/*
//Q4.
#include <iostream>
using namespace std;

int main() {
    int num;
    int arr1[10];
    int arr1Size=0; // this is to deal with the garbage values we dont want//
    int arr2[10];
    int arr2Size=0;  // this is to deal with the garbage values we dont want//

    cout<<"Enter 10 integers for Array A (input -1 to stop early) : "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>num;
        if (num==-1)
        {
            break;
        }
        else{
            arr1[i]=num;
            arr1Size+=1;
        }
    }

    // cout<<"The contents of array 1 are: "<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr1Size==i){
    //         break;
    //     }
    //     cout<<arr1[i]<<endl;
    // }

cout<<"Enter 10 integers for Array B (input -1 to stop early) : "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>num;
        if (num==-1)
        {
            break;
        }
        else{
            arr2[i]=num;
            arr2Size+=1;
        }
    }

    int interArr[10];
    int index=0;         // this is to deal with the garbage values we dont want //

    for (int i = 0; i < arr1Size; i++)
    {
        for (int j = 0; j < arr2Size ; j++)
        {
            if (arr1[i]==arr2[j])
            {
                // cout<<arr1[i]<<endl;
                 interArr[index]= arr1[i];
                 index++;
            }
        }

    }

    cout<<"intersection array has: {";
    for (int i = 0; i < index; i++)
    {
       cout<<interArr[i];
       cout<<",";
    }
    cout<<"}";
    return 0;
}
*/

/*

                            // (Program to enter two arrays from user and then find intersection between them) //

#include <iostream>
using namespace std;

int main() {
    int num;
    int integers[10];
    //int last=1;


    cout<<"Enter 10 integers (seperated by spaces): ";
    for (int i = 0; i < 10; i++)
    {
        cin>>integers[i];
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<integers[i]<<endl;
    // }
    int unique[10];
    int uniqueArrIndex=0;
    bool flagFound=false;


    for (int i = 0; i < 10; i++)
    {
        //cout<<"integers[i]: "<<integers[i]<<endl;
        //cout<<"uniqueArrIndex: "<<uniqueArrIndex<<endl;
        flagFound=false;

        for (int j = 0; j < uniqueArrIndex; j++)
        {
            if(integers[i]==unique[j]){

                flagFound=true;
                break;
            }
        }

        if (flagFound){

        }
        else{
            unique[uniqueArrIndex]=integers[i];
            uniqueArrIndex++;

        }
    }

     // cout<<"unique array index : "<<uniqueArrIndex<<endl;

    int count=0;
    int countArr[uniqueArrIndex];
    int countArrIndex;

    for (int i = 0; i < uniqueArrIndex; i++)
    {
        count=0;
        for (int j = 0; j < 10 ; j++)
        {
            if (integers[j]==unique[i])
            {
                count++;
                countArr[i]=count;
                countArrIndex++;
            }
        }
    }

    // for (int i = 0; i < uniqueArrIndex; i++)
    // {
    //     //cout<<"counter array has : " <<countArr[i]<<endl;
    //     cout<<countArr[i]<<endl;
    // }

    // Final output //

    for (int i = 0; i < uniqueArrIndex; i++)
    {
        cout<<unique[i]<<" occurs "<<countArr[i]<<" times"<<endl;
    }

    return 0;
}
*/

/*

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;


                                            // STARS //

    // 1.
    // for (int i = 1; i <= num; i++)
    // {
    //   for (int j = 0; j < i; j++)
    //   {
    //     cout<<"*";
    //     //cout<<endl;
    //   }
    //   cout<<endl;
    // }

    // 2.
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = num; j >= i; j--)
    //     {
    //      cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 3.
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = i; j < num; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 4.
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j < i ; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = i; k <= num ; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

                                             // NUMBERS //

    // 1.
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // 2.
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = num; j >= i; j--)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // 3.
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = i; j < num; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //        cout<<i;
    //     }
    //     cout<<endl;
    // }

    // 4.
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout<<" ";
    //     }

                                                  // NUMBERS Increasing //

    // for (int i = 1; i <= num; i++)
    // {
    //     //cout<<"     ";
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

                                                // Printing full triangels //

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = i; j < num; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int k = 1; k < i ; k++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = num; j >= i ; j--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= num; i++)
    // {
    //     cout<<"    ";
    //     for (int j = i; j < num; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }


     for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j==1||j==num||i==1||i==num)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = i; j < num; j++)
    //     {
    //         cout<<" ";
    //     }

    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }









    return 0;
}
*/

// #include <iostream>
// #include <string>
// #include <cmath>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter a number ";
//     cin>>num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = i; j <=num ; j++)
//         {
//             cout<<"*";
//         }
//         for (int j = 1; j <= 2 * i - 2; j++) {
//             std::cout <<" ";
//         }
//         for (int k = i; k <= num; k++)
//         {
//             cout<<"*";
//         }
//             cout<<"\n";
//         //cout<<endl;
//     }

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         for (int j = (2*i-2); j < (2*num-2); j++)
//         {
//          cout<<" ";
//         }
//         for (int j = i; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <cmath>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int r,c;
//     cout<<"Enter number of rows ";
//     cin>>r;
//     cout<<"Enter number of columns ";
//     cin>>c;
//     int arr[r][c];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

// cout<<"The matrix is : "<<endl;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int num;
//     int coordinatei,coordinatej;
//     bool flagfound=false;
//     cout<<"Enter your searching number ";
//     cin>>num;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (num==arr[i][j])
//             {
//                 flagfound=true;
//                 coordinatei=i;
//                 coordinatej=j;
//             }
//         }
//     }
//     // bool flagfound=true;

//     if (flagfound==true)
//     {
//         cout<<"Number is present "<<endl;
//         cout<<"Coordinates are "<<coordinatei<<" "<< coordinatej;
//     }
//     else{
//         cout<<"Number is not present ";
// }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int menu = 1;
//     int arr[5][5];

//     while (menu != 0)
//     {
//         cout << endl;
//         cout << "Library Management System Menu " << endl;
//         cout << "1. Input Books " << endl;
//         cout << "2. Display books " << endl;
//         cout << "3.Total books per section " << endl;
//         cout << "4.total books per genre " << endl;
//         cout << "5.Section with most books " << endl;
//         cout << "6.search for a number of books " << endl;
//         cout << "7.update number of books " << endl;
//         cout << "8.sort and display books by genre " << endl;
//         cout << "0.Exit " << endl;
//         cout << "Enter your choice: ";
//         cin >> menu;
//         cout << endl;

//         if (menu == 1)
//         {
//             for (int i = 0; i < 5; i++)
//             {
//                 cout << "Enter the number of books for section " << i + 1 << " (enter -1 to stop): ";
//                 for (int j = 0; j < 5; j++)
//                 {
//                     cin >> arr[i][j];
//                     if (arr[i][j] == -1)
//                     {
//                         for (int k = j; k < 5; k++)
//                         {
//                             arr[i][k] = 0;
//                         }
//                         break;
//                     }
//                 }
//             }
//         }

//         if (menu == 2)
//         {
//             cout << "Section/Genre	Horror	   Scifi	      Mystery		Fanatsy		Non Fiction " << endl;
//             for (int i = 0; i < 5; i++)
//             {

//                 cout << "Section" << i + 1 << ":";

//                 for (int j = 0; j < 5; j++)
//                 {
//                     cout << "     " << arr[i][j];
//                 }
//                 cout << endl;
//             }
//         }

//         if (menu == 3)
//         {
//             cout << "Total books per section : " << endl;

//             for (int i = 0; i < 5; i++)
//             {

//                 int sum = 0;
//                 cout << "Section" << i + 1 << ":";

//                 for (int j = 0; j < 5; j++)
//                 {
//                     sum = sum + arr[i][j];
//                 }
//                 cout << sum << " Books";
//                 cout << endl;
//             }
//         }

//         if (menu == 4)
//         {
//             cout << "Total books per Coloumn : " << endl;

//             for (int i = 0; i < 5; i++)
//             {

//                 int sum = 0;
//                 cout << "genre " << i + 1 << ":";

//                 for (int j = 0; j < 5; j++)
//                 {
//                     sum = sum + arr[j][i];
//                 }
//                 cout << sum << " Books";
//                 cout << endl;
//             }
//         }

//         if (menu == 5)
//         {
//             int arrRowSum[5];
//             int maxSum = 0;
//             int maxRowIndex = -1;
//             for (int i = 0; i < 5; i++)
//             {

//                 int sum = 0;
//                 // cout << "Section" << i + 1 << ":";

//                 for (int j = 0; j < 5; j++)
//                 {
//                     sum = sum + arr[i][j];
//                     if (sum >= maxSum)
//                     {
//                         maxSum = sum;
//                         maxRowIndex = i + 1;
//                     }
//                 }
//                 // cout << sum << " Books";
//                 // cout << endl;
//             }
//             cout << "Section with the most books: Section " << maxRowIndex << " with " << maxSum << " books." << endl;
//         }

//         if (menu == 6)
//         {
//             cout << endl;
//             int numOfBooksSearh = 0;
//             cout << "Enter the number of books to search for: ";
//             cin >> numOfBooksSearh;
//             cout << endl;
//             for (int i = 0; i < 5; i++)
//             {

//                 for (int j = 0; j < 5; j++)
//                 {
//                     if (arr[i][j] == numOfBooksSearh)
//                     {
//                         switch (j)
//                         {
//                         case 0:
//                             cout << "Found " << numOfBooksSearh << " in Section " << i + 1 << ", Genre " << "Horror" << endl;
//                             break;
//                         case 1:
//                             cout << "Found " << numOfBooksSearh << " in Section " << i + 1 << ", Genre " << "Sci-Fi" << endl;
//                             break;
//                         case 2:
//                             cout << "Found " << numOfBooksSearh << " in Section " << i + 1 << ", Genre " << "Mystery" << endl;
//                             break;
//                         case 3:
//                             cout << "Found " << numOfBooksSearh << " in Section " << i + 1 << ", Genre " << "Fantasy" << endl;
//                             break;
//                         case 4:
//                             cout << "Found " << numOfBooksSearh << " in Section " << i + 1 << ", Genre " << "Non-Fiction" << endl;
//                             break;

//                         default:
//                             break;
//                         }
//                     }
//                 }
//             }
//         }

//         if (menu == 7)
//         {
//             cout << endl;
//             int rowNum = -1;
//             int colNum = -1;
//             int updatedBookValue = 0;
//             cout << "Enter the Section Number (1-5) to Update: ";
//             cin >> rowNum;
//             cout << endl;
//             cout << "Enter the Genre Number (1-5) to Update: ";
//             cin >> colNum;
//             cout << endl;
//             cout << "Enter the New Number of Books: ";
//             cin >> updatedBookValue;
//             cout << endl;

//             arr[rowNum - 1][colNum - 1] = updatedBookValue;

//             switch (colNum)
//             {
//             case 1:
//                 cout << "Updated Section" << rowNum << ", Genre: Horror to " << updatedBookValue << " books." << endl;
//                 break;
//             case 2:
//                 cout << "Updated Section" << rowNum << ", Genre: Sci-Fi to " << updatedBookValue << " books." << endl;

//                 break;
//             case 3:
//                 cout << "Updated Section" << rowNum << ", Genre: Mystery to " << updatedBookValue << " books." << endl;
//                 break;
//             case 4:
//                 cout << "Updated Section" << rowNum << ", Genre: Fantasy to " << updatedBookValue << " books." << endl;
//                 break;
//             case 5:
//                 cout << "Updated Section" << rowNum << ", Genre: Non-Fiction to " << updatedBookValue << " books." << endl;
//                 break;

//             default:
//                 break;
//             }
//         }

//         if (menu == 8)
//         {
//             int sortOrder;
//             cout << "Enter 1 for Ascending order, 2 for Descending order: ";
//             cin >> sortOrder;
//             cout << endl;

//             for (int genre = 0; genre < 5; genre++)
//             {
//                 int books[5];
//                 int sections[5];

//                 for (int i = 0; i < 5; i++)
//                 {
//                     books[i] = arr[i][genre];
//                     sections[i] = i + 1;
//                 }

//                 for (int i = 0; i < 5 - 1; i++)
//                 {
//                     for (int j = 0; j < 5 - i - 1; j++)
//                     {
//                         bool swapCondition = false;
//                         if (sortOrder == 1)
//                         {
//                             if (books[j] > books[j + 1])
//                             {
//                                 swapCondition = true;
//                             }
//                         }
//                         else
//                         {
//                             if (books[j] < books[j + 1])
//                             {
//                                 swapCondition = true;
//                             }
//                         }

//                         if (swapCondition)
//                         {

//                             int temp = books[j];
//                             books[j] = books[j + 1];
//                             books[j + 1] = temp;

//                             int tempSection = sections[j];
//                             sections[j] = sections[j + 1];
//                             sections[j + 1] = tempSection;
//                         }
//                     }
//                 }

//                 string genreName;
//                 switch (genre)
//                 {
//                 case 0:
//                     genreName = "Horror";
//                     break;
//                 case 1:
//                     genreName = "Sci-Fi";
//                     break;
//                 case 2:
//                     genreName = "Mystery";
//                     break;
//                 case 3:
//                     genreName = "Fantasy";
//                     break;
//                 case 4:
//                     genreName = "Non-Fiction";
//                     break;
//                 default:
//                     genreName = "Unknown";
//                     break;
//                 }
//                 cout << "Genre: " << genreName << endl;
//                 cout << "Section\tNumber of Books" << endl;
//                 for (int i = 0; i < 5; i++)
//                 {
//                     cout << sections[i] << "\t\t" << books[i] << endl;
//                 }
//                 cout << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    bool check=true;
    char arr[3][3]={0};
    cout<<"Tic-Tac-Toe Game "<<endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"Enter your value ";
    //         cin>>arr[i][j];
    //     }
        
    // }


    // Printing initial table 
    for (int i = 0; i < 3; i++)
    {
        cout<<"     ";
        for (int j = 0; j < 3; j++)
        {
            // for (int k = 0; k < 5; k++)
            // {
            //     cout<<" ";
            // }
            
            
            //cout<<" "<<arr[i][j];
            if (j<2)
            {
            cout<<"   |";
            }
            else{
                
            cout<<"   ";

            }
            
        }
        cout<<endl;
        if (i<2)
        {
            cout<<"     ";
        cout<<"-----------";
        }
        cout<<endl;
    }
    
    int count = 0;
    while (check)
    {
    int Xx,Xy;
    cout<<"Player X, enter row and column (0-2) "<<endl;
    cin>>Xx;
    cin>>Xy;
    // cout<<endl;

    while (arr[Xx][Xy]!=0)
    {
        cout<<"re-enter coordinates as incorrect coordinates entered "<<endl;
        cout<<"Player X, enter row and column (0-2) "<<endl;
        cin>>Xx;
        cin>>Xy;
    }
    

    
    arr[Xx][Xy]='X';

    // Printing table after X Players turn

    for (int i = 0; i < 3; i++)
    {
        cout<<"     ";
        for (int j = 0; j < 3; j++)
        {
            // cout<<"here"<<arr[i][j]<<"here"<<endl;
            if (arr[i][j]==0)
            {
                if (j<2)
                {
                    /* code */
                    cout<<"   |";
                }
                else
                {
                    cout<<"   ";
                    /* code */
                }
                
                
                
            }
            else
            {
                // cout<<"here"<<endl;
               cout<<" "<<arr[i][j];
                if (j<2)
                {
                cout<<" |";
                }
                else
                {
                cout<<" ";
                    
                } 
            }
            
            
            
            
            
        }
        cout<<endl;
        cout<<"     ";
        if (i<2)
        {
        cout<<"-----------";
        }
        cout<<endl;
    }

       if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X' || arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X' || arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X' )
       {
        cout<<"Player X Wins ";
        break;
       }

       if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' )
       {
        cout<<"Player X Wins ";
        break;
       }

       if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X' )
       {
        cout<<"Player X Wins ";
        break;
       }


       count=count+2;
    //    cout<<endl;
       if (count>=9)
        {
            cout<<"Draw ";
            cout<<endl;
            break;
        }
       
       

    int Yx,Yy;
    cout<<"Player O, enter row and column (0-2) "<<endl;
    cin>>Yx;
    cin>>Yy;
    //cout<<endl;

    while (Xx==Yx && Xy==Yy || arr[Yx][Yy]!=0)
    {
        cout<<"re-enter coordinates as incorrect coordinates entered ";
        cout<<"Player O, enter row and column (0-2) "<<endl;
        cin>>Yx;
        cin>>Yy;
    }
    
    
    
    arr[Yx][Yy]='O';
    // Printing table after O Players turn

    for (int i = 0; i < 3; i++)
    {
        cout<<"     ";
        for (int j = 0; j < 3; j++)
        {
             if (arr[i][j]==0)
            {
                if (j<2)
                {
                    /* code */
                    cout<<"   |";
                }
                else
                {
                    cout<<"   ";
                    /* code */
                }
                
                
                
            }
            else
            {
                // cout<<"here"<<endl;
               cout<<" "<<arr[i][j];
                if (j<2)
                {
                cout<<" |";
                }
                else
                {
                cout<<" ";
                    
                } 
            }
            
        }
        cout<<endl;
        cout<<"     ";
        if (i<2)
        {
        cout<<"-----------";
        }
        cout<<endl;
    }

    if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O' || arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O' || arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O' )
       {
        cout<<"Player O Wins ";
        break;
       }

       if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' || arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' )
       {
        cout<<"Player O Wins ";
        break;
       }

       if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' || arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O' )
       {
        cout<<"Player O Wins ";
        break;
       }
            

        //cout<<"HELLLOOOOOOOOOO ";
        // cout<<count;
        // cout<<endl;
        // count=count+2;
        // cout<<endl;

        // if (count>=9)
        // {
        //     cout<<"Draw ";
        //     break;
        // }
        






   }
    





    return 0;
}
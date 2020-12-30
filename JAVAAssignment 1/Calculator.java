import java.util.Scanner;
class Calculator
{
public static void main(String[] args)
{
int num1,num2;
System.out.println("Enter two numbers:");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
System.out.println("The addition of two numbers:");
System.out.println(num1+num2);
System.out.println("The subtraction of two numbers:");
System.out.println(num1-num2);
System.out.println("The multiplication of two numbers:");
System.out.println(num1*num2);
System.out.println("The division of two numbers:");
System.out.println(num1/num2);
}
}

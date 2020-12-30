import java.util.Scanner;
class Inequality
{
public static void main(String[] args)
{
int num1,num2;
System.out.println("Enter two numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
if(num1!=num2)
{
System.out.println("The numbers are not equal");
}
else
{
System.out.println("The numbers are equal");
}
}
}
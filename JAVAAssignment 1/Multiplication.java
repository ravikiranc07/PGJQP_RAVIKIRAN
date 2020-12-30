import java.util.Scanner;
class Multiplication
{
public static void main(String[] args)
{
int num1,num2,num3;
System.out.println("Enter a number");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
System.out.println("multiplication of 3 numbers is:");
System.out.println(num1*num2*num3);
}
}
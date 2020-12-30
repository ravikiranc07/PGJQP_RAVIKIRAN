import java.util.Scanner;
class Swapwo
{
public static void main(String[] args)
{
int num1,num2;
System.out.println("enter the numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num1=num1+num2;
num2 =num1-num2;
num1 =num1-num2;
System.out.println("After swapping");
System.out.println(num1);
System.out.println(num2);
}
}

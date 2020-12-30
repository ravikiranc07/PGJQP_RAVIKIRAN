import java.util.Scanner;
class Swap
{
public static void main(String[] args)
{
int num1,num2,temp;
System.out.println("enter the numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
temp = num1;
num1 = num2;
num2 = temp;
System.out.println("After swapping");
System.out.println(num1);
System.out.println(num2);
}
}
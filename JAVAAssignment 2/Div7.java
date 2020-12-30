import java.util.Scanner;
class Div7
{
public static void main(String[] args)
{
int num;
System.out.println("Enter the number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if(num%7==0)
{
System.out.println("The number is divisible by 7");
}
else
{
System.out.println("The number is not divisible by 7");
}
}
}
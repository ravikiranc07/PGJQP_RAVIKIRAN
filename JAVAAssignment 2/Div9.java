import java.util.Scanner;
class Div9
{
public static void main(String[] args)
{
int num;
System.out.println("Enter the number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if(num%9==0)
{
System.out.println("The number is divisible by 9");
}
else
{
System.out.println("The number is not divisible by 9");
}
}
}
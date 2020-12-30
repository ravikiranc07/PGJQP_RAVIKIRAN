import java.util.Scanner;
class Addmul
{
public static void main(String[] args)
{
int num1,num2,res1,res2;
System.out.println("Enter two numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
res1=num1+num2;
res2=num1*num2;
System.out.println("the result of addition is:");
System.out.println(res1);
System.out.println("the result of multiplication is:");
System.out.println(res2);
if(res1>res2)
{
System.out.println("The addition is greater ");
}
else
{
System.out.println("The multiplication is greater");
}
}
}
import java.util.Scanner;
class Greater100
{
public static void main(String[] args)
{
int num1,num2,res;
System.out.println("Enter two numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
res=num1+num2;
System.out.println("the result is:");
System.out.println(res);
if(res>100)
{
System.out.println("The result is greater than 100");
}
else
{
System.out.println("The result is less than 100");
}
}
}
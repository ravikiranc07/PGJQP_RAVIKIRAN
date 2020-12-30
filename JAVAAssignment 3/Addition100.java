import java.util.Scanner;
class Addition100
{
public static void main(String[] args)
{
int num1,num2,result;
System.out.println("enter the numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
result=num1+num2;
System.out.println(result);
if(result>100)
{
System.out.println("Result is greater than 100");
}
else
{
System.out.println("Result is not greater than 100");
}
}
}
import java.util.Scanner;
class Average
{
public static void main(String[] args)
{
int num1,num2,num3,num4,num5,res;
System.out.println("Enter 5 numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
num4=sc.nextInt();
num5=sc.nextInt();
res=(num1+num2+num3+num4+num5)/5;
System.out.println("The average of 5 number is");
System.out.println(res);
if(res>100)
{
System.out.println("the average is greater than 100");
}
else
{
System.out.println("the average is less than 100");
}
}
import java.util.Scanner;
class Greaterthan10
{
public static void main(String[] args)
{
int num;
System.out.println("Enter the number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if(num>10)
{
System.out.println("The number is greater than 10");
}
else
{
System.out.println("The number is less than 10");
}
}
}
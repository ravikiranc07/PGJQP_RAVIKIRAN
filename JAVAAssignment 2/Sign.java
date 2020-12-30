import java.util.Scanner;
class Sign
{
public static void main(String[] args)
{
int num;
System.out.println("enter the number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if(num<0)
{
System.out.println("the number is negative");
}
else if(num==0)
{
System.out.println("the number is zero");

}
else
{
System.out.println("the number is positive");
}
}
}
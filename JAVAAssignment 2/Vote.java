import java.util.Scanner;
class Vote
{
public static void main(String[] args)
{
int age;
System.out.println("Enter the age of the person");
Scanner sc=new Scanner(System.in);
age=sc.nextInt();
if(age>=18)
{
System.out.println("the person is eligible to vote");
}
else
{
System.out.println("the person is not eligible to vote");
}
}
}
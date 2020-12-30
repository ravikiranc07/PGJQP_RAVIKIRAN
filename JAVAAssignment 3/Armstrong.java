import java.util.Scanner;
class Armstrong
{
public static void main(String[] args)
{
int num,n,rem,res=0;
System.out.println("Enter a number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
n=num;
while(n!=num)
{
rem=n%10;
res+=rem*rem*rem;
n/=10;
}
if(res==num)
{
System.out.println("It is a armstrong number");
}
else
{
System.out.println("It is not a armstrong number");
}
}
}
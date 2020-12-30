import java.util.Scanner;
class Sumofdigits
{
public static void main(String[] args)
{
int num,sum=0,i;
System.out.println("Enter a number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
while(num>0)
{
i=num%10;
sum=sum+i;
num=num/10;
}
System.out.println(sum);
}
}
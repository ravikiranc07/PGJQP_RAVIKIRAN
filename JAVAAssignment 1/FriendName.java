
import java.util.Scanner;
class FriendName
{
public static void main(String[] args)
{
char ch1;
char ch2;
System.out.println("enter friends name");
Scanner sc=new Scanner(System.in);
ch1=sc.next().charAt(0);
ch2=sc.next().charAt(0);
System.out.println(ch1+"\n"+ch2);
}
}
import java.util.Scanner;
class Grade
{
public static void main(String[] args)
{
int score;
System.out.println("enter the score");
Scanner sc=new Scanner(System.in);
score=sc.nextInt();
if(score>=90)
{
System.out.println("Grade A");
}
else if(score>=80 && score<90)
{
System.out.println("Grade B");
}
else if(score>=60 && score<80)
{
System.out.println("Grade C");
}
else if(score>=45 && score<60)
{
System.out.println("Grade D");
}
else
{
System.out.println("Fail");
}
}
}

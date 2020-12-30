import java.util.Scanner;
class Area
{
public static void main(String[] args)
{
int length,breadth,choice;
System.out.println("enter the choice \n1.square \n2.rectangle \n3.parrallelogramc\n4.rhombus");
Scanner sc=new Scanner(System.in);
choice=sc.nextInt();
System.out.println("enter the length and breadth");
length=sc.nextInt();
breadth=sc.nextInt();
switch(choice)
{
case 1: System.out.println(length*breadth);break;
case 2: System.out.println(length*breadth);break;
case 3: System.out.println(length*breadth);break;
case 4: System.out.println(length*breadth);break;
default: System.out.println("Invalid choice");
}
}
}
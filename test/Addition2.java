import java.util.Scanner;

class Arithmatic
{
    int Addition(int iNo1, int iNo2)
    {
        int Result = 0;
        Result = iNo1 + iNo2;
        return Result;
    }

}
class Addition2
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0, Ans = 0;
        
        Arithmatic aobj = new Arithmatic();

        Scanner scan = new Scanner(System.in);

        System.out.println("Enter 1st Number: ");
        iNo1 = scan.nextInt();

        System.out.println("Enter 2nd Number: ");
        iNo2 = scan.nextInt();

        Ans = aobj.Addition(iNo1, iNo2);

        System.out.println("Addition of "+iNo1+" and "+iNo2+" is :"+Ans);

    }
}
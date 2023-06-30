import java.util.Scanner;
class OverloadedFunctionsWithTypeConversion{
    public static void func(int x){
        System.out.println( x + " --(int to double)--> " + (float)(x));
    }
    public static void func(double x){
        System.out.println( x + " --(double to int)--> " + (int)(x));
    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        float num_f;
        byte num_b;

        System.out.print("Enter a byte code -> ");
        num_b = in.nextByte();
        func(num_b);

        System.out.print("Enter a floating-point integer -> ");
        num_f = in.nextFloat();
        func(num_f);

        in.close();
    }
}

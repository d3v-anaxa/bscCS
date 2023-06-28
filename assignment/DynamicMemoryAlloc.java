import java.util.Scanner;
class DynamicMemoryAlloc{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int size;

        System.out.print("Enter the size of array : ");
        size = in.nextInt();

        int[] array = new int[size];
        for (int i = 0; i < size; i++){
            System.out.print("Enter elem-" + (i + 1) + " : ");
            array[i] = in.nextInt();
        }

        System.out.print("Elements -> ");
        for (int i = 0; i < size; i++){
            System.out.print(" " + array[i]);
        }   System.out.println("");
        in.close();
    }
}

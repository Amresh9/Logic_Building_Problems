import java.util.*;
import java.lang.*;

public class BubbleSortJava {
    static void bubbleSort(int arr[]) {
        int n = arr.length;
        int temp = 0;
        for (int round = 0; round < n - 1; round++) {
            for (int index = 0; index < n - 1 - round; index++) {

                if (arr[index] > arr[index + 1]) {

                    temp = arr[index];
                    arr[index] = arr[index + 1];
                    arr[index + 1] = temp;

                }
            }
        }
    }

    static void printArray(int arr[]) {

        int n = arr.length;
        for (int i = 0; i < n; i++) {

            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {

        int arr[] = { 9, 8, 7, 5, 10, 3, 11, 2, 1, 6 };
        bubbleSort(arr);
        System.out.println("=================Sorted Array===============");
        printArray(arr);
    }
}
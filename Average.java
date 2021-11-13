public class Average {

public static void main(String[] args) {

 double[] arr = {19,30,21,45,67,76,34,243,87,6,35,643,355,34,4,45.9,78.9};
  double total = 0;

for(int i =0 ; i<arr.length;i++)
{

total+=arr[i];


}

double average =  total/arr.length;
System.out.print(average);




    }

}

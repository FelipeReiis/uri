import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
	    int value,highestValue =0,position=0;
	    
	    for(int i=1; i <= 100; i++){
	        value = sc.nextInt();
	        if(value > highestValue){
	            highestValue = value;
	            position = i;
	        }
	        
	    }
	    System.out.println(highestValue);
	    System.out.println(position);
		
 
    }
 
}
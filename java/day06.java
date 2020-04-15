import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);int N = scan.nextInt();
        scan.nextLine();
        
        for (int i=0; i<N; i++) {
       
            String S = scan.nextLine();
            String even = "", odd = "";
            
            for (int j=0; j<S.length(); j++) {

                if (j%2 == 0)
                    even += S.substring(j , j+1);
                
                else
                    odd += S.substring(j , j+1);
            }
            
            System.out.println(even + " " + odd);
        }
        
    }
}


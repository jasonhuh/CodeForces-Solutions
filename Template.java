import java.util.*;
import java.io.*;
import java.math.*;
 
   public class Template
   {
      public static void main(String hi[]) throws Exception
      {
         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
         StringTokenizer st = new StringTokenizer(br.readLine());
         int N = Integer.parseInt(st.nextToken());
         int K = Integer.parseInt(st.nextToken());
         char[] arr = br.readLine().toCharArray();

         char[] res = new char[100];
         Arrays.fill(res, '*');

         StringBuilder sb = new StringBuilder();

         System.out.println(sb);
      }

   }
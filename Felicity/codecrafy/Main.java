

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.Writer;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.util.StringTokenizer;

class Main {
	
	
	public static void main(String args[]) throws IOException
	{

		InputStream inputStream = System.in;
		OutputStream outputStream = System.out;
		BufferedReader br=new BufferedReader(new InputStreamReader(inputStream));
		PrintWriter pr=new PrintWriter(System.out);
		ArrayList<BigInteger> A =new ArrayList<BigInteger>(1005);
		Scanner sc=new Scanner(inputStream);
		int d,n,i,j;
		BigInteger a,b,c,temp,lm;
		char s[]=new char[1005];
		String str;
		int t;
		t=sc.nextInt();
		while(t-->0)
		{
			a=sc.nextBigInteger();
			b=sc.nextBigInteger();
			c=sc.nextBigInteger();
		    temp=a;
                    int count=0;
                    while(temp.compareTo(c)<=0)
                    {

		       temp=temp.multiply(b);
                       count++;
                    }
                     if(count==0)  pr.print("0\n");
		   else pr.print(count-1+"\n");
		}
		pr.close();
		
	}
	

}
	



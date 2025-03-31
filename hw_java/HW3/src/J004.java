import java.util.Scanner;

public class J004
{
	public static void main(String [] args)
	{
		double x1, y1;
		double x2, y2;

		Scanner x = new Scanner(System.in);
		x1 = x.nextDouble();
		y1 = x.nextDouble();
		x2 = x.nextDouble();
		y2 = x.nextDouble();
		System.out.println(java.lang.Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2)));
	}
}
